+++
date = '2025-10-27T16:33:29+01:00'
title = 'Schleifen'
weight = 8
+++

Erstelle ein neues Verzeichnis `loops`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

## :green_circle: Aufgabe 1: Zahlenreihe generieren

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

## :green_circle: Aufgabe 2: Rechner mit mehreren Operanden

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

## :yellow_circle: Aufgabe 3: Gleichseitiges Dreieck zeichnen

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

## :green_circle: Aufgabe 4: Text mit Banner umfassen

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

## :yellow_circle: Aufgabe 5: Zahlenratespiel

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
- Eine Zufallszahl zwischen 1 und 100 erhältst du mit dem Ausdruck `rand() % 100 + 1`.

## :yellow_circle: Aufgabe 6: Notenblatt generieren

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

## :yellow_circle: Aufgabe 7: Sortierung überprüfen

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

## :yellow_circle: Aufgabe 8: Palindrome

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

## :yellow_circle: Aufgabe 9: Punkte zählen

Schreibe ein Programm namens `points.c`, welches als Argumente die römischen Zahlenziffern `X`, `V`, `I` bzw. deren Kleinschreibweisen `x`, `v`, `i` als einzelne Zeichen akzeptiert.

Das Programm soll die Zahlen nach den folgenden Werten aufsummieren und die Summe ausgeben:

- `X` bzw. `x`: 10
- `V` bzw. `v`: 5
- `I` bzw. `i`: 1

```plain
$ ./points X v I
16
$ ./points x X x
30
$ ./points I V i X x
37
```

## :yellow_circle: Aufgabe 10: Spielkartenset ausgeben

Schreibe ein Programm namens `carddeck.c`, welches ein Spielkartenset bestehend aus 36 Karten ausgibt. Es gibt vier Farben (C: Clubs, D: Diamonds, H: Hearts, S: Spades) und 13 Werte (2, 3, 4, 5, 6, 7, 8, 9, X, J, Q, K, A).

```plain
$ ./carddeck
C2 C3 C4 C5 C6 C7 C8 C9 CX CJ CQ CK CA
D2 D3 D4 D5 D6 D7 D8 D9 DX DJ DQ DK DA
H2 H3 H4 H5 H6 H7 H8 H9 HX HJ HQ HK HA
S2 S3 S4 S5 S6 S7 S8 S9 SX SJ SQ SK SA
```

Tipp: Schreibe zwei verschachtelte `for`-Schleifen; eine äussere für die Zeilen/Farben und eine innere für die Spalten/Werte.

## :red_circle: Aufgabe 11: TicTacToe

Schreibe ein interaktives TicTacToe-Spiel als ein Programm namens `tictactoe.c`, auf dem zwei Spieler abwechslungsweise die Zeichen `X` und `O` auf ein 3x3-Feld setzen, bis entweder einer der Spieler gewonnen hat oder das Spielfeld voll ist:

```plain
$ ./tictactoe
-|-|-
-|-|-
-|-|-
Player X: 5
-|-|-
-|X|-
-|-|-
Player O: 1
O|-|-
-|X|-
-|-|-
Player X: 7
O|-|-
-|X|-
X|-|-
```

Tipps:

- Verwende ein Array der Länge 9 als Spielfeld und gib es in einer `for`-Schleife aus. Ein Zeilenumbruch erfolgt immer, wenn der Schleifenindex um eins erhöht restlos durch drei teilbar ist (`(i + 1) % 3 == 0`).
- Interaktive Eingaben können mit `scanf` eingelesen werden (siehe weiter oben).

## :red_circle: Aufgabe 12: Rechentrainer

Schreibe ein interaktives Rechentrainingsprogramm zum Üben des Modulo-Operators namens `practice-modulo.c`. Das Programm soll in einer Schleife zwei Zufallszahlen in den Bereichen 10-50 bzw. 2-9 generieren und deren Rest mithilfe des Modulo-Operators `%` berechnen. (Die grössere der beiden Zahlen soll immer der erste Operand sein.)

Dem Benutzer wird die Rechenaufgabe nun zur Lösung angezeigt. Gibt der Benutzer die richtige Antwort ein, darf er weiterspielen. Liegt er falsch, ist das Spiel zu Ende. Am Schluss soll dem Benutzer angezeigt werden, wie viele Rechnungen er korrekt gelöst hat.

```plain
$ ./practice-modulo
12 % 5
> 2
30 % 6
> 0
33 % 5
> 3
49 % 7
> 0
43 % 5
> 8
wrong; you got 4 right
```

Tipps:

- Interaktive Eingaben können mit `scanf` eingelesen werden (siehe weiter oben).
- Zufallszahlen können mit `srand` und `rand` generiert werden (siehe weiter oben).

## :black_circle: Aufgabe 13: Bubble Sort

Schreibe ein Programm namens `bubblesort.c`, welches ein Array von Zufallszahlen aufsteigend sortiert und ausgibt. Implementiere hierzu den Bubble-Sort-Algorithmus. Dieser besteht aus zwei verschachtelten `for`-Schleifen, welche benachbarte Arrayelemente miteinander vergleichen und austauschen: Ist das linke Element grösser als das rechte Element, werden die beiden Elemente miteinander vertauscht. Hierzu muss jedes Array-Element mit jedem anderen Array-Element verglichen werden.

Dem Programm soll angegeben werden können, wie viele Zufallszahlen es (im Bereich von 0-99) generieren soll. Das Programm soll zuerst die Zufallszahlen in der erstellten Reihenfolge ausgeben, dann die Zahlen sortieren und in sortierter Reihenfolge ausgeben:

```plain
$ ./bubblesort 5
13 86 45 61 22
13 22 45 61 86
```

Tipp: Um zwei Arrayelemente auszutauschen, wird eine dritte temporäre Variable (`swap`) benötigt:

```c
int swap = numbers[i];
numbers[i] = numbers[j];
numbers[j] = swap;
```

## :red_circle: Aufgabe 14: Array umdrehen

Schreibe ein Programm `reverse.c`, welches eine Zeichenkette umgekehrt in einem Array abspeichert und ausgibt:

```plain
$ ./reverse abcde
edcba
$ ./reverse 12345
54321
```

## :black_circle: Aufgabe 15: Binär-Dezimal-Rechner

Schreibe ein Programm `bin-to-dec.c`, welches eine als Zeichenkette angegebene Binärzahl in eine Dezimalzahl umrechnet:

```plain
$ ./bin-to-dec 1000
8
$ ./bin-to-dec 110
6
$ ./bin-to-dec 11010
26
```

Tipp: Die Stelle ganz rechts am Array hat den Index `strlen(argv[1])-1` und den Stellenwert 0 oder 1. Die Stelle links davon hat einen um 1 kleineren Index und einen doppelt so hohen Stellenwert.

## :black_circle: Aufgabe 16: Dezimal-Binär-Rechner

Schreibe ein Programm `dec-to-bin.c`, welches eine Dezimalzahl entgegennimmt un diese in eine Binärzahl umrechnet:

```plain
$ ./dec-to-bin 8
1000
$ ./dec-to-bin 6
110
$ ./dec-to-bin 26
11010
```

Teile die Zahl durch 2 und ermittle den Rest. Der Rest ist die Binärziffer; das Ergebnis der Division wird für den nächsten Schritt verwendet.

Tipp: Die Anzahl der benötigten Binärziffern erfährst du mithilfe der Berechnung `ceil(log2(x))`, wobei `x` die eingegebene Dezimalzahl ist und `ceil` und `log2` Funktionen aus `math.h` sind. (Das Programm muss mit `-lm` kompiliert werden.)
