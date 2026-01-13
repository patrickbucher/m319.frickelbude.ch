+++
date = '2026-01-05T12:07:08+01:00'
title = 'Python'
weight = 12
+++

Für die folgenden Übungen wird ein Python-Interpreter benötigt. Dieser sollte auf der WSL-Umgebung bereits installiert sein und lässt sich andernfalls mit dem Befehl `sudo apt install -y python3` installieren. Für Windows kann die aktuelle Version von Python als Installationspaket [heruntergeladen](https://www.python.org/ftp/python/pymanager/python-manager-25.2.msix) und installiert werden.

## Aufgabe 0: Grundgerüst

Erstelle ein Verzeichnis namens `python-exercises-ipt1.1` und wechsle dein Arbeitsverzeichnis dort hinein:

```plain
$ mkdir python-exercises-ipt1.1
$ cd python-exercises-ipt1.1
```

Initialisiere ein Git-Repository:

```plain
$ git init
```

Erstelle eine Datei namens `basic.py`:

```plain
$ nano basic.py
```

Speichere folgenden Inhalt darin ab:

```python
#!/usr/bin/env python3

import sys

print(len(sys.argv), sys.argv)
```

Die Zeilen bewirken folgendes:

1. gibt den Interpreter zur Ausführung der Datei an
2. importiert die `sys`-Library zum Zugriff auf Systemressourcen
3. gibt die Anzahl der übergebenen Kommandozeilenargumente und die Liste der Kommandozeilenargumente aus

Mache das Programm ausführbar:

```plain
$ chmod +x basic.py
```

Führe es nun aus:

```plain
$ ./basic.py
```

Füge das Beispiel der Versionskontrolle hinzu:

```plain
$ git add basic.py
$ git commit -m 'basic example'
```

## Aufgabe 1: Lohnabrechnung

Schreibe ein Programm namens `payslip.py`, welches vom Nettolohn ausgehend alle Lohnabzüge berechnet.

Initialisiere für die folgenden Lohnabzüge Variablen mit den dazugehörigen Prozentsätzen:

- AHV: 8.7%
- IV: 1.4%
- EO: 0.5%
- ALV: 1.1%
- NBU: 0.73%
- PK: 8.9%

Das Programm soll den Bruttolohn als Kommandozeilenargument (`sys.argv[1]`) entgegennehmen und die einzelnen Abzüge berechnen und ausgeben. Beispiel:

```plain
$ ./payslip 7500
Bruttolohn     7500.00
AHV:           -652.50
IV:            -105.00
EO:             -37.50
ALV:            -82.50
NBU:            -54.75
PK:             -66.75
Nettolohn:     6501.00
```

## Aufgabe 2: Kreisberechnung

Schreibe ein Programm namens `circle.py`, welches einen Radius eines Kreises als Kommandozeilenparameter entgegennimmt und dessen Umfang und Flächeninhalt berechnet und auf zwei Nachkommastellen genau ausgibt:

```plan
$ ./circle.py 3.5
A=38.48
U=22.00
```

Die Formeln zur Berechnung lauten:

```math
$$ U = 2 \pi r $$
$$ A = \pi r^2 $$
```

Du benötigst die Konstante `math.pi`, wozu du `math` importieren musst.

## Aufgabe 3: Hypothenuse berechnen

Schreibe ein Programm `hypot.py`, welches die Längen der beiden Katheten a und b als Kommendozeilenargumente entgegenmimmt, die Länge der Hypothenuse c berechnet und auf zwei Nachkommastellen genau ausgibt:

```plain
$ ./hypot.py 3 4
c=5.00
```

Die Formel zur Berechnung lautet:

```math
$$ c = \sqrt{a^2 + b^2} $$
```

Du benötigst die Funktion `math.sqrt`, wozu du `math` importieren musst.

## Aufgabe 4: Sekunden in Zeitangabe umrechnen

Schreibe ein Programm `time.py`, welches eine Anzahl Sekunden als Komandozeilenargument entgegennimmt und daraus die Anzahl Stunden, Minuten und Sekunden berechnet. Die berechneten Angaben sollen folgendermassen ausgegeben werden:

```plain
$ ./time.py 4123
1h8m43s
```

Eine Minute hat 60; eine Stunde 60*60 Sekunden.

## Aufgabe 5: Body-Mass-Index berechnen

Schreibe ein Programm namens `bmi.py`, welches die Körpergrösse in cm und das Körpergewicht in kg _interaktiv_ entgegenmimmt, daraus den _Body Mass Index_ berechnet und ausgibt:

```plain
$ ./bmi.py
Körpergrösse in cm: 1.88
Körpergewicht in kg: 78.0
Dein Body-Mass-Index: 22.07
```

Die Formel dazu lautet:

```math
$$ \text{BMI}=\frac{\text{Gewicht}}{\text{Grösse}^2} $$
```

Eine Interaktive Eingabe wird mit der Funktion `input` bewerkstelligt, welche als Argument eine Aufforderung (Prompt) entgegennimmt und die vom Benutzer getätigte Eingabe als String zurückgibt. Beispiel:

```python
name = input("Wie heisst du? ")
```

Ein String `s` kann mithilfe von `float(s)` in eine Fliesskommazahl umgewandelt werden.

## Aufgabe 6: Pythagoräische Triplets

Schreibe ein Programm namens `pyth-triplets.py`, welches drei ganzzahlige Variablen `a`, `b` und `c` als Kommadozeilenparameter entgegennimmt. Falls die drei Zahlen die Gleichung $a^2+b^2=c^2$ erfüllen, soll ausgegeben werden, dass es sich um ein pythagoräisches Triplet handelt; andernfalls, dass es keines ist.

```plain
$ ./pyth-triplets.py 3 4 5
3, 4 und 5 sind ein pythagoräisches Triplet!
$ ./pyth-triplets.py 1 2 3
1, 2, und 3 sind kein pythagoräisches Triplet!
```

Tip: Verwende den `**`-Operator für die Potenzierung.

## Aufgabe 7: Temperaturumrechner

Schreibe ein Programm namens `temp-conv.py`, welches zwischen Temperaturangaben in den Einheiten Celsius und Fahrenheit umrechnet. Das Programm nimmt zwei Angaben entgegen: Eine Fliesskommazahl (Grad) und einen Buchstaben `'c'` bzw. `'C'` oder `'f'` bzw. `'F'`. Die Temperaturangabe soll jeweils in die andere umgerechnet werden:

```bash
$ ./temp-conv.py 56.3 F
56.3°F = 13.5°C
$ ./temp-conv.py 100.0 f
100.0°F = 37.8°C
$ ./temp-conv.py 35.0 C
35.0°C = 95.0°F
$ ./temp-conv.py 21.0 c
21.0°C = 69.8°F
```

Verwende die folgenden Formeln:

```math
$$F=C \times \frac{9}{5} + 32$$
```

```math
$$C=(F - 32) \times \frac{5}{9}$$
```

## Aufgabe 8: Währungsrechner

Schreibe ein Programm `cur-conv.py`, welches von den Währungen US-Dollar (`USD`), Euro (`EUR`) und Pfund (`GBP`) nach Schweizer Franken umrechnet. Das Programm erwartet zwei Angaben: Einen Betrag als Fliesskommazahl und das Währungssymbol. Der umgerechnete Beitrag wird in Schweizer Franken ausgegeben:

```plain
$ ./cur-conv.py 100.00 USD
CHF 80.00
$ ./cur-conv.py 100.00 EUR
CHF 93.00
$ ./cur-conv.py 100.00 GBP
CHF 107.00
```

Du kannst die folgenden Wechselkurse verwenden:

| Währung | Zeichen | Wechselkurs |
|---------|---------|------------:|
| $       | USD     |        0.80 |
| €       | EUR     |        0.93 |
| £       | GBP     |        1.07 |

## Aufgabe 9: Quadratische Gleichung

Eine quadratische Gleichung hat die folgende Form:

```math
$$ax^2+bx+c=0$$
```

Schreibe ein Programm `quadratic-equation.py`, welches drei Ganzzahlen `a`, `b` und `c` entgegennimmt. Damit soll zunächst die _Diskriminante_ $D$ berechnet werden:

```math
$$D=b^2-4ac$$
```

Anschliessend gilt es, drei Fälle zu unterscheiden:

1. $D>0$: Die quadratische Gleichung hat _zwei_ Lösungen.
2. $D=0$: Die quadratische Gleichung hat _eine_ Lösung.
3. $D<0$: Die quadratische Gleichung hat _keine_ Lösung.

### Fall 1: Zwei Lösungen

Berechne die Lösungen nach der folgenden Formel:

```math
$$ x_{1,2} = \frac{-b \pm \sqrt{D}}{2a} $$
```

Beachte das Symbol $\pm$ über dem Bruchstrich: Im ersten Fall muss einmal plus und einmal minus gerechnet werden.

Gib sie als `x1=...,x2=...` aus.

### Fall 2: Eine Lösung

Berechne die Lösung nach der folgenden Formel:

```math
$$ x = \frac{-b}{2a} $$
```

Gib sie als `x=...` aus.

### Fall 3: Keine Lösung

Berechne nichts und gib `keine Lösung` aus.

### Ausgabe

Das Programm soll folgendermassen funktionieren:

```plain
$ ./quadratic-equation.py 2 3 -5
x1=1.0, x2=-2.5
$ ./quadratic-equation.py 1 -2 1
x=1.0
$ ./quadratic-equation.py 3 4 5
keine Lösung
```

## Aufgabe 10: Rock, Paper, Scissors

Schreibe ein Programm `rock-paper-scissors.py`, welches einen Spielzug als Buchstabe `rock` (Rock), `paper` (Paper) oder `scissors` (Scissors) entgegennimmt. Der Spielzug des Computerspielers soll als Zufallszahl berechnet werden: `0` bedeutet Rock, `1` bedeutet Paper und `2` bedeutet Scissors.

Anschliessend soll der Sieger nach der folgenden Logik ermittelt werden:

- Scissors schlägt Paper
- Paper schlägt Rock
- Rock schlägt Scissors

Das Programm soll folgendermassen funktionieren:

```plain
$ ./rock-paper-scissors.py paper
Spieler: Paper
Computer: Paper
Unentschieden!
$ ./rock-paper-scissors.py rock
Spieler: Rock
Computer: Scissors
Der Spieler gewinnt!
```

Tipp: Eine Zufallszahl zwischen 0 und 2 erhältst du folgendermassen:

```python
import random

computer = random.randint(0, 2)
```

## Aufgabe 11: Vokal oder Konsonant?

Die Buchstaben unseres Alphabets unterteilt man in Vokale (a, e, i, o, u) und Konsonanten (b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z).

Schreibe ein Programm `letters.py`, welches einen Kleinbuchstaben von der Kommandozeile entgegennimmt und ausgibt, ob es sich dabei um einen Vokal oder um einen Konsonanten handelt:

```plain
$ ./letters.py a
'a' ist ein Vokal
$ ./letters.py b
'b' ist ein Konsonant
$ ./letters.py 3
'3' ist unbekannt
```

Tipp: Kombiniere mehrere Fälle mit dem Operator `|` zu einem `case`, z.B. `case 1 | 2 | 3:`

## Aufgabe 12: Römische Zahlen ausgeben

Die Ziffern von 1-9 werden durch die folgenden römischen Zahlen repräsentiert:

1. I
2. II
3. III
4. IV
5. V
6. VI
7. VII
8. VIII
9. IX

Schreibe ein Programm `dec-to-roman.py`, welches eine Ziffer von 1-9 als Ganzzahl oder Zeichen entgegennimmt und die entsprechende römische Zahl dazu ausgibt:

```plain
$ ./dec-to-roman.py 4
IV
$ ./dec-to-roman.py 9
IX
$ ./dec-to-roman.py y
Die spinnen, die Römer.
```

## Aufgabe 13: Spielkarten

Schreibe ein Programm `cards.py`, welches zwei Zeichen entgegennimmt:

1. Eine Farbe
    - `C`: ♣ Clubs 
    - `D`: ♦ Diamonds
    - `H`: ♥ Hearts
    - `S`: ♠ Spades
2. Einen Wert
    - `A`: Ace
    - `2`: 2
    - `3`: 3
    - `4`: 4
    - `5`: 5
    - `6`: 6
    - `7`: 7
    - `8`: 8
    - `9`: 9
    - `X`: 10
    - `J`: Jack
    - `Q`: Queen
    - `K`: King

Das Programm soll ausgeben, um welche Karte es sich handelt.

```plain
$ ./cards.py C3
Clubs 3
$ ./cards.py HX
Hearts 10
$ ./cards.py SJ
Spades Jack
$ ./cards.py SA
Spades Ace
```

Tipp: Greife mit dem Index-Operator auf ein bestimmtes Zeichen in der Zeichenkette zu, z.B. wird für `s = "abc"` mit `s[0]` `'a'` und für `s[2]` `'c'` zurückgegeben.

Zusatztipp: Eine sogenannte _Tupel_ ist eine unveränderliche Sammlung von Werten, z.B. `("a", 1, True)`. Man kann nicht nur auf einzelne Werte, sondern auf ganze Tupel matchen:

```python
coord = "a3"
match (coord[0], coord[1]):
    case ("a", "1"):
        print("top left")
    case ("d", "4"):
        print("bottom right")
    case ("a", "4"):
        print("top right")
    case ("d", "1"):
        print("bottom left")
```

## Aufgabe 14: Schachbrett-Koordinaten

Beim Schachbrett werden die Spalten mit den Zeichen a-h und die Zeilen mit den Zahlen 1-8 bezeichnet. Ein bestimmtes Feld kann man dann mit Koordinaten wie z.B. "a4" oder "d7" benennen.

Schreibe ein C-Programm `chess-coords.py`, welches eine solche Koordinate entgegennimmt und zurückgibt, welche Farbe das Spielfeld hat.

```plain
$ ./chess-coords.py a1
schwarz
$ ./chess-coords.py a2
weiss
$ ./chess-coords.py h8
schwarz
$ ./chess-coords.py f5
weiss
```

Tipp: Bei "ungeraden" Spalten a, c, e und g sind die ungeraden Zeilen 1, 3, 5, 7 schwarz. Bei den "geraden" Spalten ist es gerade umgekehrt.

## Aufgabe 15: Zahlenreihe generieren

Schreibe ein Programm namens `series.py`, welches Zahlenreihen berechnet und ausgibt. Das Programm soll zwei Argumente entgegennehmen:

1. die Basiszahl der Reihe
2. die Länge der Reihe

Das Programm soll anschliessend die Zahlenreihe berechnen und ausgeben.

```plain
$ ./series.py 2 5
2 4 6 8 10
$ ./series.py 6 10
6 12 18 24 30 36 42 48 54 60
$ ./series.py 9 3
9 18 27
```

## Aufgabe 16: Rechenr mit mehreren Operanden

Schreibe ein Programm namens `calculator.py`, welches neben den vier Grundrechenarten Addition, Subtraktion, Multiplikation und Division auch die Potenzierung unterstützt. Das Programm nimmt als erstes Argument die Rechenoperation (`+`, `-`, `x`, `:`, `^`) und als beliebig viele weitere Argumente die Operanden entgegen. Das Programm soll die ausgewählte Berechnung durchführen und das Resultat ausgeben:

```plain
$ ./calculator.py + 3 4 8
15
$ ./calculator.py - 10 1 1 1
7
$ ./calculator.py x 2 2 3
12
$ ./calculator.py : 64 4 2 4
2
$ ./calculator.py ^ 2 3 2
64
```

## Aufgabe 17: Gleichseitiges Dreieck zeichnen

Schreibe ein Programm namens `triangle.py`, welches eine positive Ganzzahl als Argument entgegennimmt und ein gleichseitiges Dreieck der entsprechenden Seitenlänge ausgibt:

```plain
$ ./triangle.py 4
*
**
***
****
$ ./triangle.py 1
*
$ ./triangle.py 8
*
**
***
****
*****
******
*******
********
```

Tipp: Das Programm benötigt zwei ineinander verschachtelte Schleifen!

## Aufgabe 18: Text mit Banner umfassen

Schreibe ein Programm namens `banner.c`, welches ein Wort als Argument entgegennimmt und es mit einem Rahmen umfasst:

```plain
$ ./banner boom
########
# boom #
########
$ ./banner X
#####
# X #
#####
$ ./banner whatever
############
# whatever #
############
```

Tipp: Die Länge eines Strings `s` erhälst du mit `len(s)`.

## Aufgabe 19: Zahlenratespiel

Schreibe ein Programm namens `guess.py`, welches eine Zufallszahl zwischen 1 und 100 generiert, die dann der Benutzer erraten muss. Der Benutzer gibt der Reihe nach seine Versuche ein, und das Programm gibt Tipps, ob der Benutzer höher oder tiefer raten soll, bis der Benutzer die richtige Zahl errät:

```plain
$ ./guess.py
Guess the number: 50
too low
Guess the number: 75
too high
Guess the number: 66
too low
Guess the number: 70
too high
Guess the number: 68
You guessed the right number after 5 tries!
```

Das Programm soll sich merken, wie viele Versuche der Benutzer zum Erraten der Zahl benötigt und dies auch ausgeben.

Tipps:

- Verwende die Funktion `s = input("prompt: ")` um die interaktive Benutzereingabe in der String-Variablen `s` zu speichern. Verwende `n = int(s)` um den String in eine Ganzzahl umzuwandeln.
- Eine Zufallszahl erhälst du mit `random.randint(lower, upper)`.

## Aufgabe 20: Sortierung überprüfen

Schreibe ein Programm namens `sorted.py`, welches eine Reihe von Zahlen entgegennimmt und überprüft, ob diese aufsteigend sortiert ist:

```plain
$ ./sorted.py 7
sorted
$ ./sorted.py 1 2 3 4 5 6
sorted
$ ./sorted/py 1 2 9 5 6 7
unsorted
```

Tipp: Du brauchst dir jeweils die Zahl des letzten Schleifendurchlaufs zu merken.

## Aufgabe 21: Palindrome

Schreibe ein Programm namens `palindrome.py`, welches ein Wort als Argument entgegennimmt und überprüft, ob es sich dabei um ein Palindrom handelt:

```plain
$ ./palindrome.py anna
true
$ ./palindrome.py sugus
true
$ ./palindrome/py schorsch
false
$ ./palindrome.py tattarrattat
true
$ ./palindrome.py redivider
true
$ ./palindrome.py whatever
false
```

Tipp: Verwende zwei Variablen, welche den jeweils oberen und unteren Index speichern.

## Aufgabe 22: Spielkartenset ausgeben

Schreibe ein Programm namens `carddeck.py`, welches ein Spielkartenset bestehend aus 36 Karten ausgibt. Es gibt vier Farben (C: Clubs, D: Diamonds, H: Hearts, S: Spades) und 13 Werte (2, 3, 4, 5, 6, 7, 8, 9, X, J, Q, K, A).

```plain
$ ./carddeck.py
C2 C3 C4 C5 C6 C7 C8 C9 CX CJ CQ CK CA
D2 D3 D4 D5 D6 D7 D8 D9 DX DJ DQ DK DA
H2 H3 H4 H5 H6 H7 H8 H9 HX HJ HQ HK HA
S2 S3 S4 S5 S6 S7 S8 S9 SX SJ SQ SK SA
```

Tipp: Schreibe zwei verschachtelte `for`-Schleifen; eine äussere für die Zeilen/Farben und eine innere für die Spalten/Werte.
