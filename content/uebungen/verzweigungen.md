+++
date = '2025-09-07T20:26:25+02:00'
title = 'Verzweigungen'
weight = 3
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Grössenvergleich

Gegeben ist eine Variable `age`, die das Alter einer Person angibt. Schreibe eine Verzweigung, welche den Text "volljährig" ausgibt, wenn `age` grösser oder gleich der Zahl 18 ist.

## Aufgabe 2: Erweiterter Grössenvergleich

Gegeben ist eine Variable `age`, die das Alter einer Person angibt. Schreibe eine Verzweigung, welche den Text "volljährig" ausgibt, wenn `age` grösser oder gleich der Zahl 18 ist, und den Text "minderjährig", wenn `age` kleiner der Zahl 18 ist.

## Aufgabe 3: Differenzierter Grössenvergleich

Gegeben ist eine Variable `age`, die das Alter einer Person angibt. Schreibe eine Mehrfachvergleich, welcher für die folgenden Wertebereiche den entsprechenden Text ausgibt:

- unter 18: "minderjährig"
- von 18 bis 64: "volljährig"
- ab 65: "pensioniert"

## Aufgabe 4: Schaltjahrberechnung

Gegeben ist eine Variable `year`, die eine Jahreszahl angibt. Schreibe eine Verzweigung, welche den Text "Schaltjahr" ausgibt, wenn es sich bei `year` um ein Schaltjahr handelt, und "kein Schaltjahr" andernfalls.

Tipp: siehe [die Aufgabe von letzter Woche](/uebungen/operatoren-und-ausdruecke/#aufgabe-3-schaltjahr-berechnen) für die genauen Bedingungen.

## Aufgabe 5: Tage pro Monat

Gegeben ist eine Zahl `month`, die einen Monat im Jahr angibt. Schreibe eine Verzweigung, welche die Anzahl der Tage in diesem Monat ausgibt.

## Aufgabe 6: Positiv oder Negativ?

Gegeben ist eine vorzeichenbehaftete, ganzzahlige Variable `number`. Verwende den ternären Operator, um in einer Variable namens `positiv` vom Typ `_Bool` abzuspeichern, ob die Zahl positiv ist oder nicht. (Die Zahl 0 zählen wir zu den positiven Zahlen.)