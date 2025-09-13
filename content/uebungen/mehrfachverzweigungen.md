+++
date = '2025-09-13T17:32:05+02:00'
title = 'Mehrfachverzweigungen'
weight = 4
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Mathematische Operatoren

Gegeben sind zwei Ganzzahl-Variablen `a` und `b` sowie eine Variable `op` vom Typ `char`. Schreibe eine Mehrfachverzweigung mit `switch`/`case`, welche die Variable `c` je nach Wert von `op` folgendermassen berechnet:

- `+`: `a + b`
- `-`: `a - b`
- `x`: `a * b`
- `:`: `a / b`

## Aufgabe 2: Wochentag ausgeben

Gegeben ist eine Ganzzahl-Variable `d`, welche einen Wochentag von 1 (Montag) bis 7 (Sonntag) repräsentiert. Schreibe eine Mehrfachverzweigung mit `switch`/`case`, welche für die Werte von 1-7 den entsprechenden Wochentag und für alle anderen Werte `"kein Wochentag"` ausgibt.

## Aufgabe 3: Schulnote interpretieren

Die Schweizer Schulnoten haben folgende Bedeutung:

- 6: "sehr gut"
- 5: "gut"
- 4: "genügend"
- 3: "ungenügend"
- 2: "schlecht"
- 1: "sehr schlecht"

Gegeben ist eine Ganzzahl-Variable `n`, welche eine numerische Schulnote repräsentiert. Schreibe eine Mehrfachverzweigung mit `switch`/`case`, welche für die Noten 1-6 die entsprechende Bedeutung ausgibt und für alle anderen Were `"ungültige Note"`.

## Aufgabe 4: Note als Buchstaben und als Zahlen

Die Benotung kann auch mittels Buchstaben erfolgen, was folgenden Schweizer Schulnoten entspricht:

- A: 6
- B: 5
- C: 4
- D: 3
- E: 2
- F: 1

Gegeben ist eine Ganzzahl-Variable `g`, welche einen Grossbuchstaben von `'A'` bis `'F'` enthält und damit eine Schulnote repräsentiert. Schreibe eine Mehrfachverzweigung mit `switch`/`case`, welche für die genannten Buchstaben die dazu entsprechende Schweizer Note ausgibt und für alle anderen Werte `"ungültige Note"`.