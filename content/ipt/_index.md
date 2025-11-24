+++
date = '2025-08-18T08:31:23+02:00'
title = 'IPT 1.1'
weight = 6
+++

## Befehlsreferenz

| Befehl | Bedeutung |
|---|---|
|**Verzeichnisse**|Arbeit mit Verzeichnissen|
|`mkdir DIR`|erstelle das Verzeichnis namens `DIR`|
|`cd DIR`|wechsle ins Arbeitsverzeichnis `DIR`|
|`cd ..`|wechsle ins übergeordnete Arbeitsverzeichnis|
|`ls`|Inhalt des Arbeitsverzeichnisses anzeigen|
|**Dateien**|Arbeit mit Dateien|
|`cp SOURCE TARGET`|die Datei `SOURCE` nach `TARGET` kopieren|
|**Bearbeitung**|Quellcodedateien bearbeiten|
|`nano PROGRAM.c`|die Quellcodedatei `PROGRAM.c` im Texteditor Nano bearbeiten|
|**Kompilierung**|Aus Quellcode ausführbare Programme erzeugen|
|`cc PROGRAM.c -o PROGRAM`|aus der Quellcodedatei `PROGRAM.c` das ausführbare Programm `PROGRAM` kompilieren|
|`make PROGRAM`|aus der Quellcodedatei `PROGRAM.c` das ausführbare Programm `PROGRAM` kompilieren|
|`cc PROGRAM.c -o PROGRAM -lm`|aus der Quellcodedatei `PROGRAM.c`, welches `math.h` verwendet, das ausführbare Programm `PROGRAM` kompilieren|
|**Formatierung**|Quellcode automatisch formatieren|
|`clang-format -i PROGRAM.c`|die Quellcodedatei `PROGRAM.c` automatisch formatieren|
|`indent -kr -nut PROGRAM.c`|die Quellcodedatei `PROGRAM.c` gemäss K&R-Stil und ohne Tabs formatieren|
|**Versionskontrolle**|Dateien per Git sichern|
|`git init`|im Arbeitsverzeichnis ein Git-Repository erstellen|
|`git add PROGRAM.c`|die Quellcodedatei `PROGRAM.c` für den nächsten Schreibvorgang vormerken|
|`git commit -m "KOMMENTAR"`|die vorgemerkten Änderungen im Repository festschreiben|
|**Paketverwaltung**|Software installieren|
|`sudo apt install -y build-essential`|Programmierwerkzeuge (`gcc`, `make`) installieren|
|`sudo apt install -y clang-format`|Das Formatierungswerkzeug `clang-format` installieren|
|`sudo apt install -y indent`|Das Formatierungswerkzeug `indent` installieren|
