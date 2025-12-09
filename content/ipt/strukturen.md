+++
date = '2025-11-21T09:17:35+01:00'
title = 'Strukturen'
weight = 10
+++

Erstelle ein neues Verzeichnis `structs`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

Die Übungen sind in mehrere Teile aufgeteilt, welche unabhängig voneinander bearbeitet werden können. Die einzelnen Teile bestehen aus zusammenhängenden Aufgaben, die in der gegebenen Reihenfolge bearbeitet werden sollen.

## Teil 1: Geometrie im Koordinatensystem

Im ersten Teil geht es um geometrische Figuren im zweidimensionalen karthesischen Koordinatensystem. Schreibe dazu ein C-Programm `geometry.c`. Dieses soll geometrische Objekte wie in der folgenden Abbildung verwalten können:

![Rechteck, Kreis und Dreieck im Koordinatensystem](/img/geometry.svg)

**Tipp**: Bei Unklarheiten in den folgenden Aufgaben hilft es, das Koordinatensystem und die geometrischen Objekte auf ein Blatt Papier zu zeichnen.

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
    - Punkt unten links ("bottom left")
    - Punkt oben rechts ("top right")
- Dreieck (`triangle`)
    - Punkt A
    - Punkt B
    - Punkt C

Erstelle in der `main`-Funktion je eine Instanz für jede Struktur und gib diese folgendermassen aus:

```plain
$ ./geometry
point (1.0, 3.5)
circle M=(4.0, 2.5), r=4.5
rectangle bl=(1.0, 2.0), tr=(4.0, 6.0)
triangle A=(1.0, 1.0), B=(4,0, 3.0), C=(2.0, 8.0)
```

### :yellow_circle: Aufgabe 2: Flächen berechnen

Schreibe zwei Funktionen `circle_area` und `rectangle_area`, die jeweils einen Kreis bzw. ein Rechteck als Parameter erwarten und die Fläche des jeweiligen Objekts berechnen und zurückgeben. Gehe folgendermassen vor:

Berechne für das **Rechteck** zuerst die beiden Seitenlängen aus den Differenzen der beiden x- bzw. y-Koordinaten. Das Produkt der Seitenlängen ergibt den Flächeninhalt.

Berechne den Flächeninhalt für den **Kreis** nach folgender Formel:

```math
$$ A = \pi r^2 $$
```

Rufe die Flächenberechnung mit den Beispieldaten aus Aufgabe 1 auf und ergänze die Ausgabe entsprechend:

```plain
$ ./geometry
[...]
circle M=(4.0, 2.5), r=4.5, A=63.62
rectangle bl=(1.0, 2.0), tr=(4.0, 6.0), A=12.00
[...]
```

### :red_circle: Aufgabe 3: Umfang berechnen

Schreibe drei Funktionen `circle_circumference`, `rectangle_circumference` und `triangle_circumference`, die jeweils einen Kreis, ein Rechteck bzw. ein Dreieck als Parameter erwarten und den Umfang des jeweiligen Objekts berechnen und zurückgeben. Gehe folgendermassen vor:

Berechne den Umfang für den **Kreis** nach folgender Formel:

```math
$$ U = 2 \pi r $$
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
circle M=(4.0, 2.5), r=4.5, A=63.62, U=28.27
rectangle bl=(1.0, 2.0), tr=(4.0, 6.0), A=12.0, U=14.00
triangle A=(1.0, 1.0), B=(4,0, 3.0), C=(2.0, 8.0), U=16.06
[...]
```

### :yellow_circle: Aufgabe 4: Rechteck in Dreiecke aufteilen

Schreibe eine Funktion `split_rectangle`, welche ein Rechteck und ein (noch leeres) Array von zwei (rechtwinkligen) Dreiecken als Parameter entgegennimmt. (Das Array ist ein sogenannter Ausgabe-Parameter. C-Funktionen können keine Arrays zurückgeben.) Diese Dreiecke entstehen durch eine Teilung des Rechtecks vom Punkt unten links zum Punkt oben rechts.

![Das Rechteck wird von unten links nach oben rechts in zwei Dreiecke geteilt](/img/rect-split.svg)

Erweitere die `main`-Funktion, sodass sie ein gegebenes Rechteck in zwei Dreiecke aufteilt und auch ausgibt:

```plain
$ ./geometry
[...]
rectangle bl=(1.0, 2.0), tr=(4.0, 6.0), A=12.0, U=14.00
[...]
split triangle 1 A=(1.0, 2.0), B=(4.0, 2.0), C=(4.0, 6.0)
split triangle 2 A=(1.0, 2.0), B=(4.0, 6.0), C=(1.0, 6.0)
```

### :red_circle: Aufgabe 5: Umschliessende Objekte

Schreibe eine Funktion `is_enclosing`, welche ein Rechteck und ein Dreieck als Parameter erwartet und einen Wahrheitswert zurückgibt, ob das Rechteck das Dreieck komplett umschliesst.

![Das Rechteck umschliesst das linke aber nicht das rote Dreieck](/img/enclosing.svg)

In der obigen Abbildung wird das grüne Dreieck komplett umschlossen, das rote Dreieck jedoch nicht, da der Punkt `Y` mit den Koordinaten `(13,3)` ausserhalb des Rechtecks liegt.

Dies kann mit folgenden Regeln geprüft werden, die alle erfüllt sein müssen, damit das Dreieck komplett umschlossen ist:

- Der Rechteckpunkt unten links muss eine kleinere X- und Y-Komponente als alle Punkte des Dreiecks haben.
- Der Rechteckpunkt unten rechts muss eine grössere X- und kleinere Y-Komponente als alle Punkte des Dreiecks haben.
- Der Rechteckpunkt oben rechts muss eine grössere X- und Y-Komponente als alle Punkte des Dreiecks haben.
- Der Rechteckpunkt oben links muss eine kleinere X- und grössere Y-Komponente als alle Punkte des Dreiecks haben.

Erweitere die `main`-Funktion anschliessend um das Rechteck und die beiden Dreiecke aus der Grafik:

```plain
$ ./geometry
[...]
encloses rectangle [(2,2),(12,2),(12,8),(2,8)] the triangle [(3,3),(7,6),(4,7)]? yes
encloses rectangle [(2,2),(12,2),(12,8),(2,8)] the triangle [(8,4),(13,3),(10,7)]? no
```

## Teil 2: Datum und Uhrzeit

Im zweiten Teil geht es um Datums- und Zeitangaben sowie um Berechnungen damit. Schreibe hierzu ein C-Programm `datetime.c`.

**Tipp**: Für einige Aufgaben lohnt sich das Aufzeichnen eines Zeitstrahls auf Papier.

### :green_circle: Aufgabe 6: Strukturen definieren

Definiere die folgenden Strukturen mit den dazugehörigen Attributen und passenden Datentypen. Beispielwerte sind jedem Attribut in Klammern angegeben.

- Datum (`date`)
    - Jahr (-742, 1291, 1987)
    - Monat (1, 2, …, 12)
    - Tag (1, 2, …, 31)
- Uhrzeit (`time`)
    - Stunde (1, 2, …, 24)
    - Minute (1, 2, …, 60)
    - Sekunde (1, 2, …, 60)
- Datum und Uhrzeit (`date_time`)
    - Datum
    - Uhrzeit

Erstelle in der `main`-Funktion je eine Instanz für jede Struktur und gib diese folgendermassen aus:

```plain
$ ./datetime
Date (Y=2025,M=11,D=25)
Time (h=11,m=24,s=59)
```

### :green_circle: Aufgabe 7: Formatierung

Schreibe drei Funktionen, welche ein Datum bzw. eine Uhrzeit formatiert ausgeben:

1. `format_date_en`: Formatiert das Datum gemäss amerikanischer Schreibweise (YYYY-MM-DD), z.B. 2025-11-25
2. `format_date_ch`: Formatiert das Datum gemäss schweizerischer Schreibweise (DD.MM.YYYY), z.B. 25.11.2025
3. `format_time`: Formatiert die Zeit mit dem Doppelpunkt als Trennsymbol (hh:mm:ss), z.B. 11:24:59

Erweitere die `main`-Funktion, sodass alle Funktionen einmal demonstriert werden:

```
$ ./datetime
[...]
date (US): 2025-11-25
date (CH): 25.11.2025
time: 11:24:59
```

### :yellow_circle: Aufgabe 8: Vorher/Nachher

Schreibe drei Funktionen, welche zwei `date_time`-Angaben erwartet:

1. `_Bool before(date_time a, date_time b)`: gibt `true` zurück, wenn `a` _vor_ `b` liegt; sonst `false`
1. `_Bool after(date_time a, date_time b)`: gibt `true` zurück, wenn `a` _nach_ `b` liegt; sonst `false`
1. `_Bool equal(date_time a, date_time b)`: gibt `true` zurück, wenn `a` und `b` gleich sind, sonst `false`

Vergleiche die Angaben in absteigender Grössenordnung:

1. Jahr
2. Monat
3. Tag
4. Stunde
5. Minute
6. Sekunde

Tipp: Die Funktion `after` kann mithilfe von `before` und `equal` sehr einfach implementiet werden.

Erweitere die `main`-Funktion, sodass alle Funktionen mit beiden möglichen Ergebnissen demonstriert werden.

```plain
$ ./datetime
[...]
is 2025-11-25 11:24:59 before 1993-03-19 23:45:12? no
is 1993-03-19 23:45:12 before 2025-11-25 11:24:59? yes
is 2025-11-25 11:24:59 after 1993-03-19 23:45:12? yes
is 1993-03-19 23:45:12 after 2025-11-25 11:24:59? no
```

### :yellow_circle: Aufgabe 9: Validierungsfunktionen

Schreibe folgende Validierungsfunktionen, welche prüfen, ob alle Attribute der Struktur im definierten Wertebereich liegen:

1. `_Bool is_valid_date(date d)`
1. `_Bool is_valid_time(time d)`
1. `_Bool is_valid_date_time(date_time d)`

Für die Funktion `is_valid_date` muss für Datumsangaben im Februar überprüft werden, ob es sich beim jeweiligen Jahr um ein Schaltjahr handelt. (Je nach dem beträgt die Obergrenze 28 oder 29.) Schreibe heirzu eine Funktion `_Bool is_leap_year(int year)`.

Demonstriere die Verwendung dieser Funktionen in der `main`-Funktion, wobei für jede Funktion jeweils ein positives und negatives Beispiel erstellt werden soll.

### :red_circle: Aufgabe 10: Zeitdifferenz in Sekunden

Schreibe eine Funktion `int time_diff(time a, time b)`, welche die Differenz der beiden Zeitangaben in Sekunden zurückgibt. Hierzu muss zuerst ermittelt werden, welche Zeitangabe früher bzw. später als die andere ist.

Demonstriere die Verwendung dieser Funktion in der `main`-Funktion.

### :black_circle: Aufgabe 11: Datumsdifferenz in Tagen

Schreibe eine Funktion `int date_diff(date a, date b)`, welche die Differenz der beiden Datumsangaben in Tagen zurückgibt. Hierzu muss zunächst ermittelt werden, welche Datumsangabe früher bzw. später als die andere ist. Anschliessend lässt sich die Differenz in Tagen mithilfe einer Schleife ermitteln, welche die Tage hochzählt und jeweils nach Ende Monat (d.h. nach 28, 29, 30, 31 Tagen; je nach Monat und Schaltjahr) bzw. nach Ende Jahr den Monats- bzw. Jahressprung vollzieht.

Demonstriere die Verwendung dieser Funktion in der `main`-Funktion.

### :black_circle: Aufgabe 12: Parsen von Datum und Uhrzeit

Schreibe die folgenden Funktionen zum Parsen von Datum und Uhrzeit:

- `date parse(char d[])`
- `time parse(char t[])`

Die Funktionen sollen eine Zeichenkette wie `"2025-11-25"` bzw. `"11:24:59"` entgegennehmen und eine entsprechende Struktur zurückgeben.

Demonstriere die Verwendung dieser Funktionen in der `main`-Funktion.

## Teil 3: URLs

Im dritten Teil geht es um URLs. Eine URL ist eine Zeichenkette, die aus verschiedenen Teilen besteht, die alle ihre Eigenheiten haben:

- Protokoll, z.B. `http` oder `https`
- Hostname, z.B. `m319.frickelbude.ch`
- Dokument, z.B. `/ipt/strukturen/index.html`
- Query-String, z.B. `part=3&exercise=5&solution=true`

Schreibe ein C-Programm `urls.c` für die folgenden Aufgaben. Ergänze die Hauptfunktion `main` jeweils bei jeder Aufgabe, um die neu entwickelte Funktionalität sinnvoll zu demonstrieren.

### :yellow_circle: Aufgabe 13: Strukturen definieren

Definiere eine Struktur namens `url`, welche aus folgenden Teilen besteht mit der vorgegebenen maximalen Anzahl Zeichen besteht:

- Protokoll (max. 16 Zeichen)
- Hostname (max. 128 Zeichen)
- Dokument (max. 128 Zeichen)
- Query-String (Array von max. 16 Schlüssel-Wort-Paaren)

Erstelle für die Schlüssel-Wort-Paare des Query-Strings eine Struktur namens `key_value`, welche aus folgenden Attributen besteht:

- `key` (max. 32 Zeichen)
- `value` (max. 32 Zeichen)

Erstelle anschliessend eine Struktur mit folgenden Angaben:

- Protokoll: `"https"`
- Hostname: `"m319.frickelbude.ch"`
- Dokument: `"/ipt/strukturen/index.html"`
- Query-String: Array
    - `0`
        - `"part"`
        - `"3"`
    - `2`
        - `"exercise"`
        - `"5"`
    - `0`
        - `"solution"`
        - `"true"`

### :yellow_circle: Aufgabe 14: URL ausgeben

Schreibe eine Funktion namens `output_url`, welche eine URL als Parameter erwartet und diese folgendermassen ausgibt:

```plain
https://m319.frickelbude.ch/ipt/strukturen/index.html?part=3&exercise=5&solution=true
```

Der Query-String beginnt immer mit dem Zeichen `?`. Die Schlüssel-Wert-Paare werden immer mit einem Gleichheitszeichen ausgegeben und sind mit einem `&`-Zeichen voneinander getrennt.

### :red_circle: Aufgabe 15: URL zurückgeben

Schreibe eine Funktion namens `format_url`, welche eine URL und ein für die Ausgabe genügend grosses Zeichen-Array als Parameter erwartet, in welches  diese die Zeichenkette (analog zur vorherigen Aufgabe) schreibt. Verwende hierzu die `sprintf`-Funktion, welche als ersten Parameter das bereitgestellte Array von Zeichen benötigt, in welches die URL ausgegeben wird.

### :black_circle: Aufgabe 16: URL parsen

Schreibe eine Funktion `parse_url`, welche eine URL als Zeichenkette (`char[]`) entgegennimmt, diese in ihre einzelnen Bestandteile aufteilt und als Struktur zurückgibt.

Tipp: Gehe die URL Zeichen für Zeichen durch und lege die bisher betrachteten Zeichen jeweils in einem sogenannten Buffer-Array ab. Zwischen den einzelnen URL-Bestandteilen gibt es folgende Separatoren:

- `://` zwischen Protokoll und Hostname
- `/` zwischen Hostname und Dokument
- `?` zwischen Dokument und Query-String
- `&` zwischen den einzelnen Query-String-Paaren
- `=` zwischen Schlüssel und Wert eines Query-String-Paares