+++
date = '2025-09-02T06:27:26+02:00'
title = 'Operatoren und Ausdrücke'
weight = 3
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `operators-expressions` an:

    mkdir operators-expressions

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd operators-expressions

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben. **Verwende dabei nur Sprachkonstrukte, die wir bereits angeschaut haben, oder die in der Aufgabenstellung empfohlen werden.**

## Aufgabe 0: Grundgerüst

In dieser Aufgabe erstellst du das Grundgerüst für die folgenden Aufgaben. Du kannst dieses einfach für jede weitere Aufgabe kopieren.

Schreibe ein C-Programm `basic.c` mit folgendem Inhalt:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    printf("x=%d\n", x);
    return 0;
}
```

Hinweise:

- `stdlib.h` enthält verschiedene Funktionen, u.a. `atoi`.
- Die Funktion `atoi` ("Array to Integer") konvertiert ein textuelles Argument in eine Ganzzahl und gibt diese zurück.
- Mit der Notation `argv[1]` erhälst du Zugriff auf das erste Kommandozeilenargument.

Kompiliere es mithilfe von `make`:

```bash
make basic
```

Führe es aus, wobei du eine Zahl mitgeben musst:

```bash
./basic 34
```

Du solltest die folgende Ausgabe erhalten:

```plain
x=34
```

## Aufgabe 1: Hypotenuse berechnen

Die Hypothenuse ist die längste Seite eines rechtwinkligen Dreiecks. Sie wird anhand der beiden Katheten (die kürzeren Dreieck-Seiten) mithilfe des Satzes vom Pythagoras berechnet.

Erstelle ein Programm namens `hypot.c`. Dieses nimmt zwei Fliesskommazahlen `a` und `b` entgegen und berechnet daraus die Hypothenuse `c` nach folgender Formel:

```math
$$c=\sqrt{(a^2+b^2)}$$
```

Das Programm soll folgendermassen funktionieren:

```bash
$ ./hypot 3 4
c=5.00
```

Tipps:

1. Kopiere das Programm vom Grundgerüst: `cp basic.c hypot.c`
2. Verwende zusätzlich die Bibliothek `math.h`. Diese stellt die Funktion `sqrt` ("square root") für die Wurzelberechnung zur Verfügung.
3. Verwende die Funktion `atof` anstelle von `atoi`. Diese konvertiert die Kommandozeilenargumente in eine Zahl vom Typ `double`.
4. Kompiliere das Programm mit `cc hypot.c hypot -lm`. (Mit `-lm` wird die Mathematik-Library eingebunden.)
5. Das Quadrat einer Zahl `x` kannst du mit der Formel `x * x` oder mithilfe der Funktion `pow(x, 2)` berechnen.

## Aufgabe 2: Rabatt berechnen

Ein Rabatt wird in Prozenten vom Gesamtpreis angegeben.

Erstelle ein Programm namens `discount.c`. Dieses nimmt zwei Fliesskommazahlen `price_full` $p_f$ und `discount_rate` $d_r$ entgegen und berechnet damit den vergünstigten Preis `price_discounted` $p_d$ nach folgender Formel:

```math
$$p_{d} = p_{f} - p_{f} * \frac{d_r}{100}$$
```

Das Programm soll folgendermassen funktionieren:

```bash
$ ./discount 99.95 10
p=89.95
```

## Aufgabe 3: Division mit Rest

Schreibe ein Programm namens `int-div.c`, welches sowohl das Ergebnis einer Ganzzahl-Division als auch deren Rest berechnet.

Das Programm soll folgendermassen funktionieren:

```bash
$ ./int-div 10 3
3R1
```

## Aufgabe 4: Kreisberechnung

Schreibe ein Programm namens `circle.c`, welches für einen gegebenen Radius (Fliesskommazahl) den Umfang $U$ und die Fläche $A$ eines Kreises berechnet. Verwende dazu die folgenden Formeln.

Umfang:

```math
$$ U = 2 \pi r $$
```

Fläche:

```math
$$ A = \pi r^2 $$
```

Das Programm soll folgendermassen funktionieren:

```bash
$ ./circle
U=15.71, A=19.63
```

Tipps:

1. Verwende die Konstante `M_PI` aus `math.h`.
2. Das Quadrat einer Zahl `x` kannst du mit der Formel `x * x` oder mithilfe der Funktion `pow(x, 2)` berechnen.

## Aufgabe 5: Tage pro Jahr

Ein Schaltjahr hat 366 Tage. Alle anderen Jahre haben 365 Tage.

Schreibe ein Programm `days-in-year.c`, welches eine Jahreszahl entgegennimmt und ausgibt, wie viele Tage dieses Jahr hat.

Das Programm soll folgendermassen funktionieren:

```bash
$ ./days-in-year 2025
365
$ ./days-in-year 2024
366
```

Tipps:

- Unter [Schaltjahr Berechnen](/uebungen/operatoren-und-ausdruecke/#aufgabe-3-schaltjahr-berechnen) findest du die genauen Regeln.
- Der `_Bool`-Wert `true` hat den `int`-Wert `1`.
- Verwende die Header-Datei `stdbool.h` für den Datentyp `_Bool` mit den beiden Werten `true` und `false`.

## Aufgabe 6: Tage pro Monat

Die Monate haben unterschiedliche Anzahl von Tagen:

- Januar, März, Mai, Juli, August, Oktober und Dezember: **31** Tage
- April, Juni, September, November: **30** Tage
- Februar **28** oder **29** Tage

Schreibe ein Programm `days-in-month.c`, welches eine Jahres- und eine Monatszahl entgegennimmt und ausgibt, wie viele Tage dieser Monat hat.

Das Programm soll folgendermassen funktionieren:

```bash
$ ./days-in-month 2025 2
29
$ ./days-in-month 2024 2
28
$ ./days-in-month 2025 8
31
$ ./days-in-month 2025 9
30
```

Tipps:

- Du kannst den Code der Aufgabe [Tage pro Jahr](#aufgabe-7-tage-pro-jahr) wiederverwenden.
- Anhand der Monatszahl kannst du eine `_Bool`-Variable berechnen, die sich zu einer Zahl konvertieren lässt.
- Verwende `_Bool`-Hilfsvariablen wie z.B. `is_long_month`, `is_short_month`, `is_february`.

## Aufgabe 7: Zeitangaben in Stunden

Schreibe ein Programm `hours.c` welches drei Ganzzahl-Argumente entgegennimmt: Stunden, Minuten und Sekunden. Das Programm soll daraus die Anzahl Stunden als Fliesskommazahl berechnen.

Das Programm soll folgendermassen funktionieren:

```bash
./hours 8 30 0
8.50
./hours 2 0 30
2.01
./hours 1 59 59
2.00
```

## Aufgabe 8: Sekunden in Zeitangabe

Schreibe ein Programm `hms.c` welches eine Anzahl Sekunden als Ganzzahl entgegennimmt und daraus die Anzahl Stunden, Minuten und Sekunden berechnet.

Das Programm soll folgendermassen funktionieren:

```bash
./hms 3600
1h0m0s
./hms 3598
0h59m58s
```

## Aufgabe 9: Notenberechnung

Schreibe ein Programm `grade.c` welches eine erreichte $P_{e}$ und eine maximale Punktzahl $P_{m}$ entgegennimmt und daraus die Schulnote $N$ nach folgender Formel berechnet:

```math
$$ N = \frac{P_e}{P_m} \times 5 + 1 $$
```

Das Programm soll folgendermassen funktionieren:

```bash
./grade 99 100
5.95
./grade 42.75 55.5
4.82
```
