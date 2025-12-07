+++
date = '2025-12-07T16:35:25+01:00'
title = 'Kombinierte Übungen 2'
weight = 11
draft = true
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `combined2` an:

    mkdir combined2

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd combined2

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben. Es können alle bisher behandelten Konstrukte zum Einsatz kommen.

## Teil 1: Zeichenketten

Im ersten Teil geht es um Zeichenketten (engl. Strings), welche in C als Arrays vom Datentyp `char` repräsentiert werden. Diese Arrays sind null-terminiert, d.h. das Ende eines Strings ist durch ein Element mit dem `0` bzw. `'\0'` angezeigt. Dadurch haben Arrays, die Strings repräsentieren, ein Element mehr als die Anzahl der Zeichen, die sie abbilden.

Für drei der vier folgenden Aufgaben sollen längere Texteingaben verarbeitet werden. Verwende hierzu folgendes Grundgerüst (`echo.c`):

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
```

Das Programm verarbeitet eine interaktive Eingabe solange, bis sie mit der Tastenkombination `Ctrl`-`D` beendet wird, wodurch das Zeichen `EOF` ("end of file") an das Programm geschickt wird.

Beim Aufruf über die Kommandozeile kann eine Datei (z.B. `/usr/share/dict/words`) folgendermassen verarbeitet werden:

```plain
./echo </usr/share/dict/words
```

Möchte man nur die ersten zwölf Zeilen einer Datei verarbeiten, kann man hierzu `head` verwenden und die (reduzierte) Ausgabe über eine Piple (`|`) weiterleiten:

```plain
head -n 12 /usr/share/dict/words | ./echo
```

### :green_circle: Aufgabe 1: Gross- und Kleinschreibung

Erstelle ein Programm `capitalize.c` basierend auf `echo.c`:

```bash
cp echo.c capitalize.c
```

TODO

### :yellow_circle: Aufgabe 2: Zeilen umbrechen

### :yellow_circle: Aufgabe 3: Passwörter generieren

### :red_circle: Aufgabe 4: Buchstabenverteilung

## Teil 2: Funktionen und Rekursion

TODO

- Fakultät berechnen
- Fibonacci-Zahlen berechnen
- Euklid
- IP-Adressen und Subnetmaske: Gehört eine IP-Adresse in das Netz? Struktur mit IP, Netzwerk-Adresse und Subnetmask

## Teil 3: Schleifen und Algorithmen

TODO

- Binäre Suche
- Bubble Sort
- Primzahlen finden
- Primfaktor-Zerlegung