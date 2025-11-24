+++
date = '2025-11-21T09:17:35+01:00'
title = 'Strukturen'
weight = 10
+++

Erstelle ein neues Verzeichnis `structs`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

Die Übungen sind in drei Teile aufgeteilt, welche unabhängig voneinander bearbeitet werden können. Die einzelnen Teile bestehen aus zusammenhängenden Aufgaben, die in der gegebenen Reihenfolge bearbeitet werden müssen.

## Teil 1: Geometrie im Koordinatensystem

Im ersten Teil geht es um geometrische Figuren im zweidimensionalen karthesischen Koordinatensystem. Schreibe dazu ein C-Programm `geometry.c`. Dieses soll geometrische Objekte wie in der folgenden Abbildung verwalten können:

![Rechteck, Kreis und Dreieck im Koordinatensystem](/img/geometry.svg)

### :green_circle: Aufgabe 1: Strukturen definieren

Definiere die folgenden Strukturen mit den dazugehörigen Attributen und passenden Datentypen. Beispielwerte sind jedem Attribut in Klammern angegeben.

- Punkt (`point`)
    - Name (Buchstabe A, B, C usw.)
    - X-Koordinate (1.0, 4.5, -2.0 usw.)
    - Y-Koordinate (analog X-Koordinate)
- Kreis (`circle`)
    - Mittelpunkt
    - Radius (z.B. 4.5)
- Rechteck (`rectangle`)
    - Punkt unten links
    - Punkt oben rechts
- Dreieck (`triangle`)
    - Punkt A
    - Punkt B
    - Punkt C

Erstelle in der `main`-Funktion je eine Instanz für jede Struktur und gib diese folgendermassen aus:

```plain
$ ./geometry
point (1.0, 3.5)
circle M=(4.0, 2.5), r=4.5
rectangle bl=(1.0, 2.0), tr=(4.0, 5.0)
triangle A=(1.0, 1.0), B=(4,0, 3.0), C=(2.0, 8.0)
```

### :yellow_circle: Aufgabe 2: Flächen berechnen

Schreibe zwei Funktionen `circle_area` und `rectangle_area`, die jeweils einen Kreis bzw. ein Rechteck als Parameter erwarten und die Fläche des jeweiligen Objekts berechnen und zurückgeben. Gehe folgendermassen vor:

Berechne für das **Rechteck** zuerst die beiden Seitenlängen aus den Differenzen der beiden x- bzw. y-Koordinaten. Das Produkt der Seitenlängen ergibt den Flächeninhalt.

Berechne den Flächeninhalt für den **Kreis** nach folgender Formel:

```math
$$ A = \pi \times r^2 $$
```

Rufe die Flächenberechnung mit den Beispieldaten aus Aufgabe 1 auf und ergänze die Ausgabe entsprechend:

```plain
$ ./geometry
[...]
circle M=(4.0, 2.5), r=4.5, A=63.62
rectangle bl=(1.0, 2.0), tr=(4.0, 5.0), A=9.0
[...]
```

### :red_circle: Aufgabe 3: Umfang berechnen

Schreibe drei Funktionen `circle_circumference`, `rectangle_circumference` und `triangle_circumference`, die jeweils einen Kreis, ein Rechteck bzw. ein Dreieck als Parameter erwarten und den Umfang des jeweiligen Objekts berechnen und zurückgeben. Gehe folgendermassen vor:

Berechne den Umfang für den **Kreis** nach folgender Formel:

```math
$$ U = 2 \pi \times r $$
```

Berechne für das **Rechteck** wieder die beiden Seitenlängen aus den Differenzen der beiden x- bzw. y-Koordinaten. Die doppelte Summe der beiden Seitenlängen ergibt den Umfang.

Berechne für das **Dreieck** die drei Seitenlängen als Hypothenusen zwischen je zwei Punktpaaren. Die Summe der einzelnen Seitenlängen ergibt den Umfang:

```math
$$ a = \sqrt{(B_x-C_x)^2+(B_y-C_y)^2} $$
$$ b = \sqrt{(A_x-C_x)^2+(A_y-C_y)^2} $$
$$ c = \sqrt{(A_x-B_x)^2+(A_y-B_y)^2} $$
```

Rufe die Umfangsberechnung mit den Beispieldaten aus Aufgabe 1 auf und ergänze die Ausgabe entsprechend:

```plain
$ ./geometry
[...]
circle M=(4.0, 2.5), r=4.5, A=63.62, U=TODO
rectangle bl=(1.0, 2.0), tr=(4.0, 5.0), A=9.0, U=TODO
triangle A=(1.0, 1.0), B=(4,0, 3.0), C=(2.0, 8.0), U=TODO
[...]
```

### :yellow_circle: Aufgabe 4: Rechteck in Dreiecke aufteilen

Schreibe eine Funktion `split_rectangle`, welche ein Rechteck als Parameter erwartet und ein Array von zwei (rechtwinkligen) Dreiecken zurückgibt. Diese Dreiecke entstehen durch eine Teilung des Rechtecks vom Punkt unten links zum Punkt oben rechts.

Erweitere die `main`-Funktion, sodass sie für...

TODO: Abbildung?

### :red_circle: Aufgabe 5: Umschliessende Objekte

- TODO umfasst ein Rechteck ein Dreieck komplett?

## Teil 2: Datum und Uhrzeit

_Aufgaben folgen_

## Teil 3: URLs

_Aufgaben folgen_