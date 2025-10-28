+++
date = '2025-10-27T16:33:29+01:00'
title = 'Schleifen'
weight = 8
+++

Erstelle ein neues Verzeichnis `loops`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

## Aufgabe 1: Zahlenreihe generieren

Schreibe ein Programm namens `series.c`, welches Zahlenreihen berechnet und ausgibt. Das Programm soll zwei Argumente entgegennehmen:

1. die Basiszahl der Reihe
2. die Länge der Reihe

Das Programm soll anschliessend die Zahlenreihe berechnen und ausgeben.

```plain
$ ./series 2 5
2 4 6 8 10
$ ./series 6 10
6 12 18 24 30 36 42 48 54 60
$ ./series 9 3
9 18 27
```

## Aufgabe 2: Rechner mit beliebig vielen Operanden

Schreibe ein Programm namens `calculator.c`, welches neben den vier Grundrechenarten Addition, Subtraktion, Multiplikation und Division auch die Potenzierung unterstützt. Das Programm nimmt als erstes Argument die Rechenoperation (`+`, `-`, `x`, `:`, `^`) und als beliebig viele weitere Argumente die Operanden entgegen. Das Programm soll die ausgewählte Berechnung durchführen und das Resultat ausgeben:

```plain
$ ./calculator + 3 4 8
15
$ ./calculator - 10 1 1 1
7
$ ./calculator x 2 2 3
12
$ ./calculator : 64 4 2 4
2
$ ./calculator ^ 2 3 2
64
```

## Aufgabe 3: Gleichseitiges Dreieck zeichnen

Schreibe ein Programm namens `triangle.c`, welches eine positive Ganzzahl als Argument entgegennimmt und ein gleichseitiges Dreieck der entsprechenden Seitenlänge ausgibt:

```plain
$ ./triangle 4
*
**
***
****
$ ./triangle 1
*
$ ./triangle 8
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

## Aufgabe 4: Text mit Banner umfassen

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

Tipp: Verwende die Funktion `strlen` aus `string.h`, um die Länge des einzurahmenden Wortes zu ermitteln.

## Aufgabe 5: Zahlenratespiel

Schreibe ein Programm namens `guess.c`, welches eine Zufallszahl zwischen 1 und 100 generiert, die dann der Benutzer erraten muss. Der Benutzer gibt der Reihe nach seine Versuche ein, und das Programm gibt Tipps, ob der Benutzer höher oder tiefer raten soll, bis der Benutzer die richtige Zahl errät:

```plain
$ ./guess
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

- Verwende die Funktion `scanf("%d", &x)` (mit dem Adressoperator `&`), um die interaktive Benutzereingabe in der Variablen `x` zu speichern.
- Initialisiere den Zufallszahlengenerator mit `srand(time(NULL))`, wozu die Header-Dateien `stdlib.h` und `time.h` benötigt werden.
- Eine Zufallszahl zwischen 1 und 100 erhälst du mit dem Ausdruck `rand() % 100 + 1`.

## Aufgabe 6: Notenblatt generieren

Schreibe ein Programm namens `grades.c`, welches folgende Argumente entgegennimmt:

- eine Maximalpunktzahl als Ganzzahl
- abwechselnd
    - ein Name als Zeichenkette
    - die erreichte Punktzahl dieser Person als Ganzzahl

Das Programm errechnet aus den erreichten Punktzahlen die Note gemäss folgender Formel:

```math
$$ N = \frac{P}{P_{max}} \times 5 + 1 $$
```

Anschliessend wird ein Notenblatt ausgegeben:

```plain
$ ./grades 50 Alice 49 Bob 42 Mallory 39
Alice   49/50   5.9
Bob     42/50   5.2
Mallory 39/50   4.9
```

## Aufgabe 7: Sortierung überprüfen

Schreibe ein Programm namens `sorted.c`, welches eine Reihe von Zahlen entgegennimmt und überprüft, ob diese aufsteigend sortiert ist:

```plain
$ ./sorted 7
sorted
$ ./sorted 1 2 3 4 5 6
sorted
$ ./sorted 1 2 9 5 6 7
unsorted
```

Tipp: Du brauchst dir jeweils die Zahl des letzten Schleifendurchlaufs zu merken.

## Aufgabe 8: Palindrome

Schreibe ein Programm namens `palindrome.c`, welches ein Wort als Argument entgegennimmt und überprüft, ob es sich dabei um ein Palindrom handelt:

```plain
$ ./palindrome anna
true
$ ./palindrome sugus
true
$ ./palindrome schorsch
false
$ ./palindrome tattarrattat
true
$ ./palindrome redivider
true
$ ./palindrome whatever
false
```

Tipp: Verwende zwei Variablen, welche den jeweils oberen und unteren Index speichern.
