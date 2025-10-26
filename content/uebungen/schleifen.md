+++
date = '2025-10-26T18:59:43+01:00'
title = 'Schleifen'
weight = 6
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Argumente aufsummieren (`for`)

Schreibe eine `for`-Schleife, welche die Argumente, die dem Programm per `argv` übergeben werden, in Ganzzahlen konvertiert und aufsummiert.

## Aufgabe 2: Argumente aufsummieren (`while`)

Schreibe den Code aus Aufgabe 1 mithilfe einer `while`-Schleife um.

## Aufgabe 3: Argumente aufsummieren (`do`/`while`)

Das erste Programmargument bezeichnet eine Limite, bis zu der die folgenden Argumente aufsummiert werden sollen. Schreibe eine `do`/`while`-Schleife, welche die Argumente ab dem zweiten Argument aufsummiert bis die Limite (erstes Argument) erreicht ist.

## Aufgabe 4: Argumente aufsummieren (`continue`)

Kann eine Zeichenkette mithilfe von `atoi` nicht in eine Zahl umgewandelt werden, wird der Wert `0` zurückgegeben. Erweitere den Code aus Aufgabe 1, indem nicht in Zahlen konvertierbare Argumente ignoriert werden und die Schleife mit `continue` vorzeitig zum nächsten Durchlauf springt.

## Aufgabe 5: Argumente aufsummieren (`break`)

Schreibe den Code aus Aufgabe 3 mit einer `for`-Schleife um, die beim Erreichen der Limite mithilfe von `break` abgebrochen werden soll.

## Aufgabe 6: Arithmetisches Mittel bestimmen

Schreibe eine Schleife, welche alle Argumente aufsummiert und dann deren arithmetisches Mittel berechnet (Summe geteilt durch Anzahl).

## Aufgabe 7: Maximum und Minimum bestimmen

Schreibe eine Schleife, welche die Argumente in Zahlen umwandelt und das grösste sowie das kleinste Element ermittelt und beide ausgibt.

Tipp: Die Konstanten `INT_MIN` und `INT_MAX` aus `limits.h` können hierzu nützlich sein.