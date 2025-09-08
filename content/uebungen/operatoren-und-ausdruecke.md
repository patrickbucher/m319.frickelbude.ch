+++
date = '2025-08-31T15:15:45+02:00'
title = 'Operatoren und Ausdrücke'
weight = 2
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Operatoren auf Literalen

Welche Werte ergeben die folgenden Ausdrücke? Welche Datentypen haben sie?

1. `3 * 2 + 18 / 3 - 15 % 4`
1. `true && false || false && true || true && !false`
1. `13 > 30 / 2 || 12 >= 3 * 4 && !(3 <= 12 / 4)`
1. `sizeof(int) <= sizeof(char) || sizeof(long) < sizeof(short)`

## Aufgabe 2: Operatoren auf Variablen

Gegeben sind die folgenden Variablen:

```c
char a = 3;
short b = 17;
int c = 25;
long d = 2;
```

Welche Werte ergeben die folgenden Ausdrücke? Welche Datentypen haben sie?

1. `b % d + (c - d) * (a + d)`
1. `a > b && (c - b) < (a * b) || c % a >= b`
1. `a * a + d * d == (a + d) * (a + d)`
1. `c * sizeof(a) + a * sizeof(b)`

## Aufgabe 3: Schaltjahr berechnen

Ein Jahr hat 365 Tage. Jedes vierte Jahr ist jedoch ein _Schaltjahr_ mit 366 Tagen. Jedes hundertste Jahr ist jedoch _kein_ Schaltjahr. Jedes vierhundertste Jahr ist aber _doch_ wieder ein Schaltjahr.

Gegeben ist eine Variable `year`:

```c
int year = ...;
```

Schreibe einen Ausdruck, der anhand von `year` folgenden Wert hat:

- `true`, falls `year` ein Schaltjahr ist
- `false`, falls `year` kein Schaltjahr ist

Tipps:

- Der Operator `%` gibt des Rest einer Division zurück. Ist dieser Rest 0, lässt sich die Zahl restlos teilen.
- Du kannst mit folgenden Werten testen:
    - Schaltjahre: 1904, 1996, 2000, 2004, 2024
    - keine Schaltjahre: 1900, 1997, 2001, 2025

## Aufgabe 4: Operatorenpräzedenz

In der Mathematik gilt die Regel "Punkt vor Strich", d.h. die Operatoren Multiplikationen und Division binden stärker als Addition und Subtraktion. Der Ausdruck `(a * b) + (c / d)` könnte also auch ohne Klammern folgendermassen gechrieben werden: `a * b + c / d` ohne dessen Wert zu verändern.

In der Programmiersprache C ist die _Operatorenpräzedenz_ ebenfalls geregelt. Neben "Punkt vor Strich" gilt beispielsweise auch "Und vor Oder". Das Wikibook zur Programmiersprache C hat eine [Liste der Operatoren nach Priorität](https://de.wikibooks.org/wiki/C-Programmierung:_Liste_der_Operatoren_nach_Priorit%C3%A4t). Je höher ein Operator in dieser Liste auftaucht, desto stärker bindet er seine Operanden.

Erstelle eine eigene Liste mit Operatorenpräzedenzen, notiere aber nur die Operatoren, die wir im Unterricht angeschaut haben.
