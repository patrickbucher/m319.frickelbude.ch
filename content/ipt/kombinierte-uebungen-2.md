+++
date = '2025-12-07T16:35:25+01:00'
title = 'Kombinierte Übungen 2'
weight = 11
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `combined2` an:

    mkdir combined2

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd combined2

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben. Es können alle bisher behandelten Konstrukte zum Einsatz kommen.

## Teil 1: Text und Zeichenketten

Im ersten Teil geht es um Zeichenketten (engl. Strings), welche in C als Arrays vom Datentyp `char` repräsentiert werden. Diese Arrays sind null-terminiert, d.h. das Ende eines Strings ist durch ein Element mit dem Zeichen `0` bzw. `'\0'` angezeigt. Dadurch haben Arrays, die Strings repräsentieren, ein Element mehr als die Anzahl der Zeichen, die sie abbilden.

Für drei der vier folgenden Aufgaben sollen längere Texteingaben verarbeitet werden. Verwende hierzu folgendes Grundgerüst (`echo.c`):

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
```

Das Programm verarbeitet eine interaktive Eingabe solange, bis sie mit der Tastenkombination `Ctrl`-`D` beendet wird, wodurch das Zeichen `EOF` ("end of file") an das Programm geschickt wird.

Zum Testen der folgenden Programme kann der folgende Beispieltext in eine Datei namens `text.txt` kopiert werden:

```plain
The royal society for putting things on top of other things will once again gather on Sunday afternoon in order to discuss the society's progress concerning the activity of putting things on top of other things. The year has been a difficoult one, because there are not many things to be found that are not on top of other things. However, this must not be an excuse for complacency. Some things still are not on top of other things in any conceivable way. Therefore, the royal society's struggle for putting things on top of other things must and will continue until there are no more things to be found that are not on top of other things.
```

Beim Aufruf über die Kommandozeile kann diese Datei folgendermassen verarbeitet werden:

```plain
./echo <text.txt
```

### :green_circle: Aufgabe 1: Gross- und Kleinschreibung

Erstelle ein Programm `capitalize.c` basierend auf `echo.c`:

```bash
cp echo.c capitalize.c
```

Dieses Programm soll alle Kleinbuchstaben im Eingabetext in Grossbuchstaben umwandeln. Alle anderen Zeichen (Satzzeichen, Leerschläge, Grossbuchstaben) sollen unverändert bleiben:

```plain
./capitalize <text.txt
THE ROYAL SOCIETY FOR PUTTING THINGS ON TOP OF OTHER THINGS [...]
```

Tipp: Verwende eine Bereichsprüfung auf das Intervall `['a'..'z']` um die umzuwandelnden Zeichen von gleich zu belassenden Zeichen unterscheiden zu können. Ein Kleinbuchstabe wird in einen Grossbuchstaben umgewandelt, indem man die Differenz zwischen `'a'` und `'A'` von ihm abzieht. (`'A'` hat den ASCII-Code 66, `'a'` hat den ASCII-Code 97.)

### :yellow_circle: Aufgabe 2: Zeilen umbrechen

Erstelle ein Programm `linebreak.c` basierend auf `echo.c`:

```bash
cp echo.c linebreak.c
```

Das Programm soll als Kommandozeilenparameter eine Zahl entgegennehmen, welche die gewünschte Zeilenlänge repräsentiert. Der Eingabetext soll dann jeweils beim ersten Leerzeichen nach der erreichten Zeilenlänge umgebrochen werden, indem ein zusätzliches Zeichen `'\n'` ausgegeben wird:

```plain
./linebreak 20 <text.txt
The royal society for
putting things on top
of other things will
[...]
```

Tipp: Merke dir nach jeder Zeichenausgabe, wie viele Zeichen bereits ausgegeben worden sind. Setzte diesen Zähler nach einem Zeilenumbruch zurück.

### :yellow_circle: Aufgabe 3: Passwörter generieren

Schreibe ein Programm `passwords.c`, welches Zufallspasswörter generiert und hierzu zwei Parameter entgegennimmt:

1. die Anzahl der zu generierenden Passwörter
2. die Länge eines Passworts

Das Programm soll nun zufällige Passwörter bestehend aus den folgenden Zeichen generieren:

1. Grossbuchstaben: A-Z
2. Kleinbuchstaben: a-z
3. Ziffern: 0-9

Verwende das folgende Grundgerüst:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomAlphanumeric();

int main(int argc, char *argv[])
{
    srand(time(NULL));

    int n = atoi(argv[1]);
    int l = atol(argv[2]);

    // TODO: generate n passwords of length l of A-Z, a-z, 0-9

    return 0;
}

char randomAlphanumeric()
{
    int i = rand();

    // TODO: convert i to a character A-Z, a-z, 0-9

    return '?';
}
```

Tipp: Es gibt verschiedene Ansätze, wie aus der Zufallszahl `i` ein Zeichen aus dem Bereich A-Z, a-z und 0-9 ermittelt werden kann:

- Aufwändig und einfach: Lege alle Zeichen in einem Array ab. Berechne den Zeichenindex nun mithilfe der Variablen `i`, dem Modulooperator `%` und der Länge des Zeichenarrays.
- Elegant: Berechne zuerst die Anzahl der möglichen Zeichen. Verwende anschliessend den Modulooperator `%`, um den Wert der Zahl `i` in den passenden Bereich von 0 bis zur Anzahl der Zeichen herunterzubrechen. Mache nun die Fallunterscheidung nach folgenden Intervallen:
    - `[0,25]`: Grossbuchstabe (`'A' + x`)
    - `[26,51]`: Kleinbuchstabe (`'a' + x - 26`)
    - `[52,61]`: Ziffer (`'0' + x - 52`)

Beispiel:

```plain
./passwords 3 12
NHFEVrPjxPAp
snevcDpi6IPK
3GwUUBIgJLic
```

### :red_circle: Aufgabe 4: Buchstabenverteilung

Erstelle ein Programm `histogram.c` basierend auf `echo.c`:

```bash
cp echo.c histogram.c
```

Das Programm soll einen Text einlesen, die Häufigkeit der Buchstaben `'A'` bis `'Z'` ermitteln und das Ergebnis mithilfe von horizontalen Balken visualisieren:

```plain
./histogram <text.txt
A ==========================
B ======
C =================
D =======
E ====================================================
F ================
G =====================
H ================================
I ==================================
J
K
L =============
M ======
N ===================================================
O ============================================================
P ===========
Q
R ===============================
S ================================
T =================================================================
U ===============
V ===
W ====
X =
Y ============
Z
```

Vorgehen:

- Erstelle ein Array der Länge 26 und initialisiere alle Werte mit 0.
- Für jedes eingelesene Zeichen muss geprüft werden, ob es im Intervall `['A','Z']`, im Intervall `['a','z']` oder ausserhalb liegt.
- Der zu erhöhende Arrayindex berechnet sich dann aus `c - 'A'` bzw. `c - 'a'`.
- Das Ergebnis kann mithilfe einer verschachtelten Schleife visualisiert werden:
    - Äussere Schleife: Iteration über die Buchstaben.
    - Innere Schleife: Iteration über die gefundene Anzahl.

## Teil 2: Funktionen und Rekursion

In den folgenden Aufgaben soll eine mächtige Technik für Funktionen angewendet werden: die Rekursion, bei der sich eine Funktion selber aufruft.

Damit ein endloses Aufrufen derselben Funktion verhindert werden kann, unterscheidet man bei rekursiven Funktionen anhand deren Parameter zwischen zwei Fällen:

1. der Basisfall, der das Ergebnis statisch definiert und das Ende der Rekursion signalisiert
2. der rekursive Fall, der das Ergebnis als Ausdruck rekursiver Funktionsaufrufe definiert

Die folgenden Aufgaben können zwar auch mit Schleifen gelöst werden, eine rekursive Lösung ist jedoch meist eleganter und soll darum hier gewählt werden.

### :green_circle: Aufgabe 5: Fakultät berechnen

Die Rechenoperation _Fakultät_ (engl. _factorial_) ist folgendermassen für positive natürliche Zahlen _rekursiv_ definiert:

```math
$$ 0! = 1 $$
$$ n! = n \times (n-1)! $$
```

- Basisfall: `n == 0`
- rekursiver Fall: `n > 0`

Schreibe ein Programm `factorial.c`, welches eine Zahl als Kommandozeilenargument akzeptiert und für diese Zahl die Fakultät ausrechnet und ausgibt:

```plain
./factorial 3
6
./factorial 5
120
./factorial 9
362880
```

Schreibe hierzu eine Funktion mit dem Prototyp `factorial(int n)`.

### :yellow_circle: Aufgabe 6: Fibonacci-Zahlen berechnen

Die Fibonacci-Reihe lautet 1, 1, 2, 3, 5, 8 usw. Jedes Element der Folge ist als Summe seiner beiden Vorgänger definiert (z.B. `8 = 5 + 3`). Die ersten beiden Elemente haben den Wert 1.

- Basisfall 1: `n == 0`
- Basisfall 2: `n == 1`
- rekursiver Fall: `n > 1`

Schreibe ein Programm `fibonacci.c`, welches eine Zahl `n` als Kommandozeilenargument akzeptiert und die `n`-te Fibonacci-Zahl rekursiv berechnet und ausgibt:

```plain
./fibonacci 10
89
./fibonacci 20
10946
./fibonacci 40
165580141
```

### :yellow_circle: Aufgabe 7: Summe und Produkt berechnen

Schreibe ein Programm `sumprod.c`, welches eine Zahl `n` als Kommandozeilenargument akzeptiert und für die Zahlenfolge `[1,n]` die Summe und das Produkt berechnet und ausgibt. Die Berechnungen sollen mithilfe zweier rekursiver Funktion `sum` und `prod` erfolgen:

- Basisfall: `n == 1`
- rekursiver Fall: `n > 1`

```plain
./sumprod 3
sum:      6     prod:      6
./sumprod 4
sum:     10     prod:     24
./sumprod 5
sum:     15     prod:    120
```

Tipp: Die Summe einer Zahl ist die Zahl mit der Summe der Zahl minus 1 addiert. Das Produkt einer Zahl ist die Zahl mit dem Produkt der Zahl minus 1 multipliziert.

### :red_circle: Aufgabe 8: Grösster Gemeinsamer Teiler

Der _grösste gemeinsame Teiler_ (ggT) zweier Zahlen `a` und `b` ist die grösste Zahl, durch sich diese beiden Zahlen restlos teilen lassen. Dieser kann mithilfe des Algorithmus von Euklid berechnet werden:

- Basisfall: `a == b`
- rekursiver Fall 1: `a > b`
- rekursiver Fall 2: `a < b`

Ist der Basisfall erreicht, entsprechen beide Zahlen `a` und `b` dem ggT. Im rekursiven Fall kann der ggT folgendermassen gefunden werden:

1. die kleinere Zahl wird von der grösseren Zahl subtrahiert
2. der ggT dieser Differenz und der kleineren der beiden Zahlen kann rekursiv berechnet werden

So werden die Zahlen `a` und `b` kleiner, bis sie schliesslich gleich sind.

Beispiel:

```math
$$ ggT(12, 8) = ggT(12-8, 8) $$
$$ ggT(4, 8) = ggT(8-4, 4) $$
$$ ggT(4, 4) = 4 $$
```

Schreibe ein Programm `gcd.c` (gcd: _greatest common divisor_), welches zwei positive natürliche Zahlen als Kommandozeilenargumente entgegennimmt, den ggT davon berechnet und diesen ausgibt:

```plain
./gcd 12 9
gcd(12, 9) = 3
./gcd 24 18
gcd(24, 18) = 6
./gcd 169 39
gcd(169, 39) = 13
./gcd 2048 768
gcd(2048, 768) = 256
```
