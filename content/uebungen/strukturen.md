+++
date = '2025-11-22T20:56:29+01:00'
title = 'Strukturen'
weight = 8
+++

Bearbeite die folgenden Aufgaben **ohne** Hilfe eines C-Compilers, d.h. nur auf Papier. Überprüfe sie anschliessend mit einem entsprechenden C-Programm.

## Aufgabe 1: Paket

Definiere eine Struktur für ein Paket (`parcel`), welches über folgende Attribute verfügt:

- den Inhalt als Text
- ob es Kühlung benötigt (Ja/Nein)
- Höhe in cm
- Breite in cm
- Tiefe in cm
- Gewicht in kg

Erstelle anschliessend eine Instanz namens `beer_crate`, welche 24 Flaschen Bier in sechs Reihen und vier Spalten enthält.

## Aufgabe 2: Rennstrecke und Rennen

Definiere zwei Strukturen für eine Rennstrecke (`race_track`) und ein Grand-Prix-Rennen (`grand_prix`). Die Strukturen haben die folgenden Attribute:

- Rennstrecke
    - Name
    - Land
    - Anzahl Kurven ("turns")
    - Länge in Kilometern
- Rennen
    - Rennstrecke
    - Name
    - Anzahl Runden

Definiere anschliessend folgende Intanzen der beiden Strukturen:

- Der _Hockenheimring_ liegt in Deutschland und hat 17 Kurven bei einer Länge von 4.574 Kilometern.
- Der _Grosse Preis von Deutschland_ wird am Hockenheimring ausgetragen und geht über 67 Runden.

Berechne anschliessend die Länge des gesamten Rennens in Kilometern.

## Aufgabe 3: Auto und Motor

Definiere zwe Strukturen für ein Auto (`car`) und einen Motor (`engine`) mit folgenden Attributen:

- Auto
    - Marke
    - Modell
    - Anzahl Türen
    - Baujahr
    - gefahrene Kilometer
    - Neupreis in CHF
    - Motor
- Motor
    - Art des Benzins
    - Anzahl der Zylinder
    - ob es einen Turbo hat (Ja/Nein)
    - Leistung in Anzahl Pferdestärken (PS)

Erstelle anschliessend Instanzen für zwei verschiedene Autos mit unterschiedlichen Motoren.