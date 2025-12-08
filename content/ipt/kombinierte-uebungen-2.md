+++
date = '2025-12-07T16:35:25+01:00'
title = 'Kombinierte Übungen 2'
weight = 11
draft = false
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

Zum Testen der folgenden Programme kann der folgende Beispieltext in eine Datei namens `text.txt` kopiert werden:

```plain
The royal society for putting things on top of other things will once again gather on Sunday afternoon in order to discuss the society's progress concerning the activity of putting things on top of other things. The year has been a difficoult one, because there are not many things to be found that are not on top of other things. However, this must not be an excuse for complacency. Some things still are not on top of other things in any conceivable way. Therefore, the royal society's struggle for putting things on top of other things must and will continue until there are no more things to be found that are not on top of other things.
```

Beim Aufruf über die Kommandozeile kann diese Datei folgendermassen verarbeitet werden:

```plain
./echo <text.txt
```

### :green_circle: Aufgabe 1: Gross- und Kleinschreibung

Erstelle ein Programm `capitalize.c` basierend auf `echo.c`:

```bash
cp echo.c capitalize.c
```

Dieses Programm soll alle Kleinbuchstaben im Eingabetext in Grossbuchstaben umwandeln. Alle anderen Zeichen (Satzzeichen, Leerschläge, Grossbuchstaben) sollen unverändert bleiben:

```plain
./capitalize <text.txt
THE ROYAL SOCIETY FOR PUTTING THINGS ON TOP OF OTHER THINGS [...]
```

Tipp: Verwende eine Bereichsprüfung auf das Intervall `['a'..'z']` um die umzuwandelnden Zeichen von gleich zu belassenden Zeichen unterscheiden zu können. Ein Kleinbuchstabe wird in einen Grossbuchstaben umgewandelt, indem man die Differenz zwischen `'a'` und `'A'` von ihm abzieht. (`'A'` hat den ASCII-Code 66, `'a'` hat den ASCII-Code 97.)

### :yellow_circle: Aufgabe 2: Zeilen umbrechen

Erstelle ein Programm `linebreak.c` basierend auf `echo.c`:

```bash
cp echo.c linebreak.c
```

Das Programm soll als Kommandozeilenparameter eine Zahl entgegennehmen, welche die gewünschte Zeilenlänge repräsentiert. Der Eingabetext soll dann jeweils beim ersten Leerzeichen nach der erreichten Zeilenlänge umgebrochen werden, indem ein zusätzliches Zeichen `'\n'` ausgegeben wird:

```plain
./linebreak 20 <text.txt
The royal society for
putting things on top
of other things will
[...]
```

Tipp: Merke dir nach jeder Zeichenausgabe, wie viele Zeichen bereits ausgegeben worden sind. Setzte diesen Zähler nach einem Zeilenumbruch zurück.

### :yellow_circle: Aufgabe 3: Passwörter generieren

Schreibe ein Programm `passwords.c`, welches Zufallspasswörter generiert und hierzu zwei Parameter entgegennimmt:

1. die Anzahl der zu generierenden Passwörter
2. die Länge eines Passworts

Das Programm soll nun zufällige Passwörter bestehend aus den folgenden Zeichen generieren:

1. Grossbuchstaben: A-Z
2. Kleinbuchstaben: a-z
3. Ziffern: 0-9

Verwende das folgende Grundgerüst:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomAlphanumeric();

int main(int argc, char *argv[])
{
    srand(time(NULL));

    int n = atoi(argv[1]);
    int l = atol(argv[2]);

    // TODO: generate n passwords of length l of A-Z, a-z, 0-9

    return 0;
}

char randomAlphanumeric()
{
    int i = rand();

    // TODO: convert i to a character A-Z, a-z, 0-9

    return '?';
}
```

Tipp: Es gibt verschiedene Ansätze, wie aus der Zufallszahl `i` ein Zeichen aus dem Bereich A-Z, a-z und 0-9 ermittelt werden kann:

- Aufwändig und einfach: Lege alle Zeichen in einem Array ab. Berechne den Zeichenindex nun mithilfe der Variablen `i`, dem Modulooperator `%` und der Länge des Zeichenarrays.
- Elegant: Berechne zuerst die Anzahl der möglichen zeichen. Verwende anschliessend den Modulooperator `%`, um den Wert der Zahl `i` in den passenden Bereich von 0 bis zur Anzahl der Zeichen herunterzubrechen. Mache nun die Fallunterscheidung nach folgenden Intervallen:
    - `[0,25]`: Grossbuchstabe (`'A' + x`)
    - `[26,51]`: Kleinbuchstabe (`'a' + x - 26`)
    - `[52,61]`: Ziffer (`'0' + x - 52`)

Beispiel:

```plain
./passwords 3 12
NHFEVrPjxPAp
snevcDpi6IPK
3GwUUBIgJLic
```

### :red_circle: Aufgabe 4: Buchstabenverteilung

Erstelle ein Programm `histogram.c` basierend auf `echo.c`:

```bash
cp echo.c histogram.c
```

Das Programm soll einen Text einlesen, die Häufigkeit der Buchstaben `'A'` bis `'Z'` ermitteln und das Ergebnis mithilfe von horizontalen Balken visualisieren:

```plain
./histogram <text.txt
A ==========================
B ======
C =================
D =======
E ====================================================
F ================
G =====================
H ================================
I ==================================
J
K
L =============
M ======
N ===================================================
O ============================================================
P ===========
Q
R ===============================
S ================================
T =================================================================
U ===============
V ===
W ====
X =
Y ============
Z
```

Tipps:

- Erstelle ein Array der Länge 26 und initialisiere alle Werte mit 0.
- Für jedes eingelesene Zeichen muss geprüft werden, ob es im Intervall `['A','Z']`, im Intervall `['a','z']` oder ausserhalb liegt.
- Der zu erhöhende Arrayindex berechnet sich dann aus `c - 'A'` bzw. `c - 'a'`.
- Das Ergebnis kann mithilfe einer verschachtelten Schleife visualisiert werden:
    - Äussere Schleife: Iteration über die Buchstaben.
    - Innere Schleife: Iteration über die gefundene Anzahl.

## Teil 2: Funktionen und Rekursion

TODO

- Fakultät berechnen
- Fibonacci-Zahlen berechnen
- Summe und Produkt als Rekursion
- Euklid

## Teil 3: Schleifen und Algorithmen

TODO

- Binäre Suche
- Bubble Sort
- Primzahlen finden
- Primfaktor-Zerlegung

## Teil 4: IP-Adressen und Bitweise-Operationen

1. IP-Adresse als Datenstruktur bestehend aus vier `unsigned char`-Feldern
2. Validierung von Subnetz-Maske: alle 1-Bits müssen links sein, alle 0-Bits rechts
3. Umwandlung von IP-Adresse in `unsigned int`
4. Überprüfung, ob zwei IP-Adressen einander "sehen" können anhand subnet mask