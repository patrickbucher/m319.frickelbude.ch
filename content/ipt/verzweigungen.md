+++
date = '2025-09-08T19:31:47+02:00'
title = 'Verzweigungen'
weight = 4
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `branches` an:

    mkdir branches

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd branches

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben.

Tipp: Du kannst wieder das [Grundgerüst](/ipt/operatoren-und-ausdruecke/#aufgabe-0-grundgerüst) von letzter Woche als Grundlage für jede Aufgabe verwenden.

## Aufgabe 1: Pythagoräische Triplets

Schreibe ein C-Programm `pyth-triplets.c`, welches drei ganzzahlige Variablen `a`, `b` und `c` als Kommandozeilenparameter entgegennimmt. Falls die drei Zahlen die Gleichung $a^2+b^2=c^2$ erfüllen, soll ausgegeben werden, dass es sich um ein pythagoräisches Triplet handelt; andernfalls, dass es keines ist.

Das Programm soll folgendermassen funktionieren:

```plain
$ ./pyth-triplets 3 4 5
3, 4 und 5 sind ein pythagoräisches Triplet!
$ ./pyth-triplets 1 2 3
1, 2, und 3 sind kein pythagoräisches Triplet!
```

## Aufgabe 2: Temperaturumrechner

Schreibe ein C-Programm `temp-conv.c`, welches zwischen Temperaturangaben in den Einheiten Celsius und Fahrenheit umrechnet. Das Programm nimmt zwei Angaben entgegen: Eine Fliesskommazahl (Grad) und einen Buchstaben `'c'` bzw. `'C'` oder `'f'` bzw. `'F'`. Die Temperaturangabe soll jeweils in die andere umgerechnet werden:

```bash
$ ./temp-conv 56.3 F
56.3°F = 13.5°C
$ ./temp-conv 100.0 f
100.0°F = 37.8°C
$ ./temp-conv 35.0 C
35.0°C = 95.0°F
$ ./temp-conv 21.0 c
21.0°C = 69.8°F
```

Verwende die folgenden Formeln:

```math
$$F=C \times \frac{9}{5} + 32$$
```

```math
$$C=(F - 32) \times \frac{5}{9}$$
```

Tipp: Den Buchstaben erhältst du über den Ausdruck `argv[2][0]` (Typ: `char`).

## Aufgabe 3: Währungsrechner

Schreibe ein C-Programm `cur-conv.c`, welches von den Währungen US-Dollar (`D`), Euro (`E`) und Pfund (`P`) nach Schweizer Franken umrechnet. Das Programm erwartet zwei Angaben: Einen Betrag als Fliesskommazahl und das Währungssymbol. Der umgerechnete Beitrag wird in Schweizer Franken ausgegeben:

```plain
$ ./cur-conv 100.00 D
CHF 80.00
$ ./cur-conv 100.00 E
CHF 93.00
$ ./cur-conv 100.00 P
CHF 108.00
```

Du kannst die folgenden Wechselkurse verwenden:

| Währung | Zeichen | Wechselkurs |
|---------|---------|------------:|
| $       | D       |        0.80 |
| €       | E       |        0.93 |
| £       | P       |        1.08 |

## Aufgabe 4: Body-Mass-Index

Schreibe ein C-Programm `bmi.c`, welches zwei Angaben entgegennimmt: Die Körpergrösse einer Person in Meter und das Körpergewicht in Kilogramm. Berechne anschliessend den Body-Mass-Index nach folgender Formel:

```math
$$\text{BMI}=\frac{\text{Gewicht}}{\text{Grösse}^2}$$
```

Das Programm soll je nach errechneten Body-Mass-Index ein anderes Urteil fällen:

| BMI | Urteil |
|----:|--------|
|$<20$|Untergewicht|
|$20..25$|Normalgewicht|
|$>25$|Übergewicht|

Das Programm soll folgendermassen funktionieren:

```plain
$ ./bmi 2.01 75
BMI=18.56 Untergewicht
$ ./bmi 1.88 76
BMI=21.50 Normalgewicht
$ ./bmi 1.68 95
BMI=33.66 Übergewicht
```

## Aufgabe 5: Bereichsprüfung

Schreibe ein C-Programm `range-check.c`, welches drei Ganzzahlen `x`, `a` und `b` entgegennimmt und ausgibt, ob `x` unterhalb, innerhalb oder überhalb des Bereiches zwischen `a` und `b` liegt:

```plain
./range-check 5 10 20
5 ist unterhalb [10..20]
./range-check 15 10 20
15 ist innerhalb [10..20]
./range-check 25 10 20
15 ist überhalb [10..20]
```

Die Grenzen sind inklusive zu prüfen, d.h. 10 und 20 gelten als innerhalb von `[10..20]`.

## Aufgabe 6: Quadratische Gleichung

Eine quadratische Gleichung hat die folgende Form:

```math
$$ax^2+bx+c=0$$
```

Schreibe ein C-Programm `quadratic-equation.c`, welches drei Ganzzahlen `a`, `b` und `c` entgegennimmt. Damit soll zunächst die _Diskriminante_ $D$ berechnet werden:

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
$ ./quadratic-equation 2 3 -5
x1=1.0, x2=-2.5
$ ./quadratic-equation 1 -2 1
x=1.0
$ ./quadratic-equation 3 4 5
keine Lösung
```

## Aufgabe 7: Rock, Paper, Scissors (Schere, Stein, Papier)

Schreibe ein Programm `rock-paper-scissors.c`, welches einen Spielzug als Buchstabe `r` (Rock), `p` (Paper) oder `s` (Scissors) entgegennimmt. Der Spielzug des Computerspielers soll als Zufallszahl berechnet werden: `0` bedeutet Rock, `1` bedeutet Paper und `2` bedeutet Scissors.

Anschliessend soll der Sieger nach der folgenden Logik ermittelt werden:

- Scissors schlägt Paper
- Paper schlägt Rock
- Rock schlägt Scissors

Das Programm soll folgendermassen funktionieren:

```plain
$ ./rock-paper-scissors p
Spieler: Paper
Computer: Paper
Unentschieden!
$ ./rock-paper-scissors r
Spieler: Rock
Computer: Scissors
Der Spieler gewinnt!
```

Tipp: Eine Zufallszahl zwischen 0 und 2 erhältst du folgendermassen:

```c
#include <time.h>
#include <stdlib.h>

srand(time(NULL));
char computer = rand() % 3;
```

## Aufgabe 8: Sternzeichen

Schreibe ein Programm `zodiac-sign.c`, welches eine Tages- und eine Monatsangabe entgegennimmt und das Sternzeichen der Person ausgibt:

```plain
$ ./zodiac-sign 25 3
Widder
$ ./zodiac-sign 24 6
Krebs
$ ./zodiac-sign 30 9
Waage
```

Tipp: Die Daten zu den Tierkreiszeichen findest du auf [Wikipedia](https://de.wikipedia.org/wiki/Tierkreiszeichen#Die_zw%C3%B6lf_Tierkreiszeichen).
