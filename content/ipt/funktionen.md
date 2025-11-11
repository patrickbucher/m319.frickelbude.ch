+++
date = '2025-11-10T20:08:33+01:00'
title = 'Funktionen'
weight = 9
+++

Erstelle ein neues Verzeichnis `functions`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

Schreibe zu jeder Funktion auch ein Hauptprogramm, welches die Funktion aufruft. Die Benutzereingaben des Programms sollen an die Funktion weitergegeben werden:

## Aufgabe 1: Stunden, Minuten, Sekunden

Schreibe eine Funktion `void dhms(int seconds)`, welche eine Anzahl Sekunden erwartet, diese in Tage, Stunden, Minuten und Sekunden umrechnet und als eine Zeichenkette der folgenden Form ausgibt:

```plain
$ ./dhms 3600
1h
$ ./dhms 300
5m
$ ./dhms 4529
1h15m29s
$ ./dhms 86430
1d30s
```

Es sollen immer nur die relevanten Angaben (`!= 0`) ausgegeben werden.

## Aufgabe 2: Rock, Paper, Scissors

Schreibe eine Funktion `int rock_paper_scissors(char a, char b)`, welche die Zeichen `'R'` (Rock), `'P'` (Paper), `'S'` (Scissors) gemäss den Regeln von _Rock, Paper, Scissors_ (Schere, Stein, Papier) folgendes zurückgibt:

- `-1`, wenn `a` `b` schlägt
- `+1`, wenn `b` `a` schlägt
- `0`, wenn `a` und `b` den gleichen Spielzug machen (unentschieden)
- `-2`, wenn `a` einen ungültigen Spielzug macht
- `+2`, wenn `b` einen ungültigen Spielzug macht

```plain
$ ./rock-paper-scissors R P
1
$ ./rock-paper-scissors S P
-1
$ ./rock-paper-scissors R R
0
$ ./rock-paper-scissors x P
-2
$ ./rock-paper-scissors P y
2
```

## Aufgabe 3: Wörter sortieren

Schreibe eine Funktion `int before(char left[], char right[])`, welche zwei Zeichenketten entgegennimmt und sie zeichenweise alphabetisch mit dem `<`-Operator vergleicht. Das Programm soll folgendes zurückgeben:

- `-1`, wenn `left` vor `right` kommt
- `+1`, wenn `left` nach `right` kommt
- `0`, wenn die Zeichenketten identisch sind

Die Funktion bricht beim ersten Unterschied ab. Beispiel:

| 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|
|'s'|'u'|'g'|'u'|'s'|
|'s'|'u'|'g'|'e'|'r'|
|`=`|`=`|`=`|`>`|   |

Ein längeres Wort wird nach einem kürzeren Wort einsortiert, es gilt z.B. `"Baumhaus" > "Baum"`.

```plain
$ ./before abba baba
-1
$ ./before abracadabra abbacadabba
1
$ ./before foo foo
0
```

Tipp: Die Länge einer Zeichenkette erfährst du über `strlen` aus `strings.h`.

## Aufgabe 4: Minimum, Maximum, Mean

Schreibe die folgenden Funktionen:

1. `float min(float numbers[], int n)`: gibt die kleinste Zahl unter `numbers` zurück
1. `float max(float numbers[], int n)`: gibt die grösste Zahl unter `numbers` zurück
1. `float sum(float numbers[], int n)`: gibt die Summe der Zahlen `numbers` zurück
1. `float mean(float numbers[], int n)`: gibt das arithmetische Mittel von `numbers` zurück

Die Funktion erwartet jeweils ein Array an `float`-Werten und eine Zahl `n`, welche die Länge des Arrays bezeichnet.

Die Funktion `mean` soll den Durchschnitt mithilfe der Funktion `sum` berechnen.

```plain
./min-max-mean 1 2 3 4 5 6 7
min:    1
max:    7
mean:   4
```

## Aufgabe 5: Zahlenreihen

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

## Aufgabe 6: Body-Mass-Index

Schreibe eine Funktion `bmi` mit der Typsignatur `float(float, float)`, welche den Body-Mass-Index anhand von Körpergrösse in cm und Körpergewicht in kg anhand der folgenden Formel berechnet und zurückgibt:

```math
$$ \text{BMI}=\frac{\text{Gewicht}}{\text{Grösse}^2} $$
```

Schreibe dazu ein C-Programm analog zu [Verzweigungen: Aufgabe 4](/ipt/verzweigungen/#aufgabe-4-body-mass-index), welches die Funktion `bmi` verwendet.

## Aufgabe 7: FizzBuzz

Das Spiel _FizzBuzz_ wird in einer Runde von Leuten gespielt und läuft nach folgenden Regeln ab:

1. Die erste Person fängt bei 1 an zu zählen und spricht diese Zahl aus.
1. Die zweite Person zählt weiter auf 2 und spricht diese Zahl ebenfalls aus.
1. Bei Zahlen, die restlos durch drei teilbar sind, soll nicht die Zahl, sondern "Fizz" ausgesprochen werden.
1. Bei Zahlen, die restlos durch fünf teilbar sind, soll anstelle der Zahl "Buzz" ausgesprochen werden.
1. Bei Zahlen, die restlos durch drei _und_ fünf teilbar sind, soll anstelle der Zahl "FizzBuzz" ausgesprochen werden.

Schreibe eine Funktion `void fizzbuzz(short number)`, welche für jede Zahl die passende Zeichenkette ausgibt. Schreibe dazu ein Programm namens `fizzbuzz.c`, welches die Obergrenze der Zahl entgegennimmt und entsprechend viele Runden durchspielt.

```plain
$./fizzbuzz 16
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
```

## Aufgabe 8: 99 Bottles of Beer

Schreibe eine Funktion `short beer_stanza(short)`, welche eine Strophe für den Song _99 Bottles of Beer_ anhand des übergebenen Parameters ausgibt und den Parameter um 1 reduziert zurückgibt.

Die Strophe hat folgende Form, wobei `n` durch die tatsächliche Anzahl Bierflaschen zu ersetzen ist:

> `n` bottles of beer on the wall, `n` bottles of beer.
>
> Take one down and pass it around, `n-1` bottles of beer on the wall.

Schreibe ein Programm namens `bottles-of-beer.c`, welches den ganzen Song folgendermassen ausgibt:

```plain
./bottles-of-beer 99
99 bottles of beer on the wall, 99 bottles of beer.
Take one down and pass it around, 98 bottles of beer on the wall.

98 bottles of beer on the wall, 98 bottles of beer.
Take one down and pass it around, 97 bottles of beer on the wall.

[Strophen von 97 bis 2]

1 bottle of beer on the wall, 1 bottle of beer.
Take one down and pass it around, no more bottles of beer on the wall.

No more bottles of beer on the wall, no more bottles of beer.
Go to the store and buy some more, 99 bottles of beer on the wall.
```
