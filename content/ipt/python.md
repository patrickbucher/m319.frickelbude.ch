+++
date = '2026-01-05T12:07:08+01:00'
title = 'Python'
weight = 12
+++

Für die folgenden Übungen wird ein Python-Interpreter benötigt. Dieser sollte auf der WSL-Umgebung bereits installiert sein und lässt sich andernfalls mit dem Befehl `sudo apt install -y python3` installieren. Für Windows kann die aktuelle Version von Python als Installationspaket [heruntergeladen](https://www.python.org/ftp/python/pymanager/python-manager-25.2.msix) und installiert werden.

## Aufgabe 0: Grundgerüst

Erstelle ein Verzeichnis namens `python-exercises-ipt1.1` und wechsle dein Arbeitsverzeichnis dort hinein:

```plain
$ mkdir python-exercises-ipt1.1
$ cd python-exercises-ipt1.1
```

Initialisiere ein Git-Repository:

```plain
$ git init
```

Erstelle eine Datei namens `basic.py`:

```plain
$ nano basic.py
```

Speichere folgenden Inhalt darin ab:

```python
#!/usr/bin/env python3

import sys

print(len(sys.argv), sys.argv)
```

Die Zeilen bewirken folgendes:

1. gibt den Interpreter zur Ausführung der Datei an
2. importiert die `sys`-Library zum Zugriff auf Systemressourcen
3. gibt die Anzahl der übergebenen Kommandozeilenargumente und die Liste der Kommandozeilenargumente aus

Mache das Programm ausführbar:

```plain
$ chmod +x basic.py
```

Führe es nun aus:

```plain
$ ./basic.py
```

Füge das Beispiel der Versionskontrolle hinzu:

```plain
$ git add basic.py
$ git commit -m 'basic example'
```

## Aufgabe 1: Lohnabrechnung

Schreibe ein Programm namens `payslip.py`, welches vom Nettolohn ausgehend alle Lohnabzüge berechnet.

Initialisiere für die folgenden Lohnabzüge Variablen mit den dazugehörigen Prozentsätzen:

- AHV: 8.7%
- IV: 1.4%
- EO: 0.5%
- ALV: 1.1%
- NBU: 0.73%
- PK: 8.9%

Das Programm soll den Bruttolohn als Kommandozeilenargument (`sys.argv[1]`) entgegennehmen und die einzelnen Abzüge berechnen und ausgeben. Beispiel:

```plain
$ ./payslip 7500
Bruttolohn     7500.00
AHV:           -652.50
IV:            -105.00
EO:             -37.50
ALV:            -82.50
NBU:            -54.75
PK:             -66.75
Nettolohn:     6501.00
```

## Aufgabe 2: Kreisberechnung

Schreibe ein Programm namens `circle.py`, welches einen Radius eines Kreises als Kommandozeilenparameter entgegennimmt und dessen Umfang und Flächeninhalt berechnet und auf zwei Nachkommastellen genau ausgibt:

```plan
$ ./circle.py 3.5
A=38.48
U=22.00
```

Die Formeln zur Berechnung lauten:

```math
$$ U = 2 \pi r $$
$$ A = \pi r^2 $$
```

Du benötigst die Konstante `math.pi`, wozu du `math` importieren musst.

## Aufgabe 3: Hypothenuse berechnen

Schreibe ein Programm `hypot.py`, welches die Längen der beiden Katheten a und b als Kommendozeilenargumente entgegenmimmt, die Länge der Hypothenuse c berechnet und auf zwei Nachkommastellen genau ausgibt:

```plain
$ ./hypot.py 3 4
c=5.00
```

Die Formel zur Berechnung lautet:

```math
$$ c = \sqrt{a^2 + b^2} $$
```

Du benötigst die Funktion `math.sqrt`, wozu du `math` importieren musst.

## Aufgabe 4: Sekunden in Zeitangabe umrechnen

Schreibe ein Programm `time.py`, welches eine Anzahl Sekunden als Komandozeilenargument entgegennimmt und daraus die Anzahl Stunden, Minuten und Sekunden berechnet. Die berechneten Angaben sollen folgendermassen ausgegeben werden:

```plain
$ ./time.py 4123
1h8m43s
```

Eine Minute hat 60; eine Stunde 60*60 Sekunden.

## Aufgabe 5: Body-Mass-Index berechnen

Schreibe ein Programm namens `bmi.py`, welches die Körpergrösse in cm und das Körpergewicht in kg _interaktiv_ entgegenmimmt, daraus den _Body Mass Index_ berechnet und ausgibt:

```plain
$ ./bmi.py
Körpergrösse in cm: 1.88
Körpergewicht in kg: 78.0
Dein Body-Mass-Index: 22.07
```

Die Formel dazu lautet:

```math
$$ \text{BMI}=\frac{\text{Gewicht}}{\text{Grösse}^2} $$
```

Eine Interaktive Eingabe wird mit der Funktion `input` bewerkstelligt, welche als Argument eine Aufforderung (Prompt) entgegennimmt und die vom Benutzer getätigte Eingabe als String zurückgibt. Beispiel:

```python
name = input("Wie heisst du? ")
```

Ein String `s` kann mithilfe von `float(s)` in eine Fliesskommazahl umgewandelt werden.