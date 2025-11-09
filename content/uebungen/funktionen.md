+++
date = '2025-11-09T15:02:25+01:00'
title = 'Funktionen'
weight = 7
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Grundrechenarten

Schreibe vier Funktionen für Grundrechenarten mit Ganzzahlen mit der Signatur `int (int, int)`:

1. Addition: `add`
2. Subtraktion: `subtract`
3. Multiplikation: `multiply`
4. Division: `divide`

## Aufgabe 2: Schaltjahr bestimmen

Schreibe eine Funktion namens `is_leap` mit der Signatur `_Bool (int)`, welche `true` zurückgibt, wenn es sich bei der übergebenen Jahreszahl um ein Schaltjahr handelt, und `false` andernfalls.

## Aufgabe 3: Hypothenuse berechnen

Schreibe eine Funktion `hypot` mit der Signatur `double (double, double)`, welche als Parameter zwei Seitenlängen von Katheten eines rechtwinkligen Dreiecks erwartet und die Länge der Hypothenuse zurückgibt. Verwende zur Berechnung die folgende Formel:

```math
$$ c = \sqrt{a^2 + b^2} $$
```

## Aufgabe 4: Kreisberechnungen

Schreibe zwei Funktionen zu Berechnungen am Kreis:

1. `circle_circumference`: `double (double)`
2. `circle_area`: `double (double, double)`

Die erste Funktion berechnet den Kreisumfang anhand dessen Radius:

```math
$$ U = 2 \pi r $$
```

Die zweite Funktion berechnet die Kreisfläche anhand dessen Radius:

```math
$$ A = \pi r^2 $$
```

## Aufgabe 5: Notenberechnung

Schreibe eine Funktion `grade` mit der Signatur `double (int, int)`, welche eine erreichte und eine maximale Punktzahl entgegennimmt und die daraus resultierende Schulnote gemäss folgender Formel zurückgibt:

```math
$$ N = \frac{P}{P_{max}} \times 5 + 1 $$
```

## Aufgabe 6: Rechteck zeichnen

Schreibe eine Funktion `draw_rectangle` mit der Signatur `void (short, short, char)`, welche zwei Seitenlängen (Breite und Höhe) entgegennimmt und ein ausgefülltes Rechteck bestehend aus dem übergebenen Zeichen mit `putchar` auf den Bildschirm ausgibt:

Der Beispielaufruf `draw_rectangle(3, 5, '*')` soll folgendes ausgeben:

```plain
***
***
***
***
***
```