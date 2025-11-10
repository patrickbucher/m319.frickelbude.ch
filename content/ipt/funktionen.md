+++
date = '2025-11-10T20:08:33+01:00'
title = 'Funktionen'
weight = 9
+++

Erstelle ein neues Verzeichnis `loops`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

Schreibe zu jeder Funktion auch ein Hauptprogramm, um die Funktion damit zu testen. Die Benutzereingaben des Programms sollen an die Funktion weitergegeben werden:

## Aufgabe X: Rock, Paper, Scissors

Schreibe eine Funktion `int rock_paper_scissors(char a, char b)`, welche die Zeichen `'R'` (Rock), `'P'` (Paper), `'S'` (Scissors) gemäss den Regeln von _Rock, Paper, Scissors_ (Schere, Stein, Papier) folgendes zurückgibt:

- `-1`, wenn `a` `b` schlägt
- `+1`, wenn `b` `a` schlägt
- `0`, wenn `a` und `b` den gleichen Spielzug machen (unentschieden)

## Aufgabe X: Wörter sortieren

Schreibe eine Funktion `int before(char[] left, char[] right)`, welche zwei Zeichenketten entgegennimmt und sie zeichenweise alphabetisch mit dem `<`-Operator vergleicht. Das Programm soll folgendes zurückgeben:

- `-1`, wenn `left` vor `right` kommt
- `+1`, wenn `left` nach `right` kommt
- `0`, wenn die Zeichenketten identisch sind

```plain
$ ./before abba baba
-1
$ ./before abracadabra abbacadabba
1
$ ./before foo foo
0
```

## Aufgabe X: Minimum, Maximum, Mean

Schreibe die folgenden Funktionen:

1. `float min(float[] numbers, int n)`: gibt die kleinste Zahl unter `numbers` zurück
1. `float max(float[] numbers, int n)`: gibt die grösste Zahl unter `numbers` zurück
1. `float sum(float[] numbers, int n)`: gibt die Summe der Zahlen `numbers` zurück
1. `float mean(float[] numbers, int n)`: gibt das arithmetische Mittel von `numbers` zurück

Die Funktion erwartet jeweils ein Array an `float`-Werten und eine Zahl `n`, welche die Länge des Arrays bezeichnet.

Die Funktion `mean` soll den Durchschnitt mithilfe der Funktion `sum` berechnen.

```plain
./min-max-mean 1 2 3 4 5 6 7
min:    1
max:    7
mean:   4
```

## Aufgabe X: Zahlenreihen

Schreibe eine Funktion namens `series` mit der Typsignatur `void (short, short, short)` mit folgenden Parametern:

1. der ersten Zahl einer Zahlenreihe
2. der zweiten Zahl einer Zahlenreihe
3. der gewünschten Länge der Zahlenreihe

Die Funktion gibt anschliessend die Zahlenreihe aus:

```plain
./series 2 4 10
2
4
6
8
10
12
14
16
18
20
```

Tipp: Die Schrittweite erfährst du, wenn du von der ersten Zahl die zweite subtrahierst.

## Aufgabe X: Body-Mass-Index

Schreibe eine Funktion `bmi` mit der Typsignatur `float(float, float)`, welche den Body-Mass-Index anhand von Körpergrösse in cm und Körpergewicht in kg berechnet.

Siehe [Verzweigungen: Aufgabe 4](/ipt/verzweigungen/index.html#aufgabe-4-body-mass-index) für Zusatzinformationen.
