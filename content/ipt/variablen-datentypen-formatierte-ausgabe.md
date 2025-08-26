+++
date = '2025-08-25T21:07:55+02:00'
title = 'Variablen, Datentypen und formatierte Ausgabe'
weight = 2
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `vars-types-output` an:

    mkdir vars-types-output

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd vars-types-output

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere für jede Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben.

## Aufgabe 1: Uninitialisierte Werte

Schreibe ein C-Programm `unitialized.c`, das Variablen _deklariert_ aber nicht _initialisiert_. Gib die Variablen aus. Was kommt heraus?

## Aufgabe 2: Zahlendarstellung: dezimal, hexadezimal und oktal

Schreibe ein Programm namens `dec-hex-oct.c`. Mit den Formatkennzeichner `%x` und `%o` können ganze Zahlen in hexadezimaler und oktaler Notation ausgegeben werden. Deklariere und initialisiere einige Variablen mit Ganzzahlen. Gib sie anschliessend jeweils in drei Darstellungen aus, indem du die Formatkennzeichner `%d` (dezimal), `%x` (hexadezimal) und `%o` (oktal) im gleichen `printf`-Aufruf verwendest.

## Aufgabe 3: Wahrheitswerte

Für dieses Programm muss zusätzlich die Header-Datei `stdbool.h` inkludiert werden. Schreibe ein Programm namens `booleans.c`. Deklariere zwei Variablen vom Datentyp `_Bool` und initialisiere diese mit den Werten `true` bzw. `false`. Gib diese Werte nun als Zahlen mit dem Formatkennzeichner `%d` aus. Welche Zahlenwerte verbergen sich hinter `true` und `false`?

## Aufgabe 4: Grenzen

Für dieses Programm wird die Header-Datei `limits.h` benötigt. Schreibe ein Programm namens `number-limits.c`. Zu jedem Datentyp (z.B. `int`) gibt es zwei Konstanten (z.B. `INT_MIN` und `INT_MAX`). Gib diese Konstanten für die Datentypen `char`, `int`, `long` und `short` (`SHRT`) aus und überprüfe damit die [Aufgabe von gestern](/uebungen/variablen-datentypen-formatierte-ausgabe/#aufgabe-2-grössenberechnung). Die Ausgabe soll in einzelnen Zeilen nach diesem Format erfolgen:

    int: UNTERGRENZE OBERGRENZE

## Aufgabe 5: Lohnabrechnung

Auf einer Lohnabrechnung werden neben dem Bruttolohn auch zahlreiche Abzüge und der Nettolohn (Bruttolohn minus Abzüge) angezeigt. Schreibe ein Programm `payslip.c`, welches die folgende Lohnabrechnung darstellt:

    Nettolohn:     7500.00
    AHV:           -652.50
    IV:            -105.00
    EO:             -37.50
    ALV:            -82.50
    NBU:            -54.75
    PK:             -66.75
    Bruttolohn:    6501.00

Gehe folgendermassen vor:

1. Deklariere und initialisiere Variablen für Netto- und Bruttolohn sowie für alle Abzüge.
2. Gib die einzelnen Zeilen in `printf`-Aufrufen an. Verwende einen passenden Formatkennzeichner zur rechtsbündigen Ausgabe auf zwei Nachkommastellen genau.

## Aufgabe 6: Einer-Diagonale

Deklariere für die Werte 1, 10, 100 usw. bis eine Million Variablen von einem passenden ganzzahligen Typ. Gib diese anschliessend mit `printf` und führenden Nullen aus, damit folgende Ausgabe entsteht:

    0000001
    0000010
    0000100
    0001000
    0010000
    0100000
    1000000

Tipp: Verwende die wissenschaftliche Schreibweise (z.B. `1e3` für 1*10^3 statt `1000`), damit du weniger Nullen eintippen musst.

## Zusatzaufgabe: Der Texteditor Vim

Der Texteditor Vim ist sehr mächtig und unter Programmierern sehr beliebt. Installiere ihn folgendermassen:

    sudo apt install -y vim

Anschliessend kannst du das interaktive Tutorial in einer bestimmten Sprache starten, z.B. auf Deutsch:

    vimtutor -l de

Arbeite das Tutorial durch und versuche die nächsten Programme mit `Vim` statt mit `nano` zu schreiben.
