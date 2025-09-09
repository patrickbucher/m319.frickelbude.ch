+++
date = '2025-08-18T08:32:39+02:00'
title = 'Setup'
weight = 1
+++

Diese Anleitung beschreibt die Installation einer Entwicklungsumgebung für die Programmiersprache C, die auf Debian 13 "Trixie" GNU/Linux basiert.

## WSL (Debian 13 "Trixie")

Das _Windows-Subsystem für Linux_ (WSL) erlaubt den nahtlosen Betrieb von einem Linux-Betriebssystem unter Windows. Zunächst muss WSL installiert werden. Gehe hierzu folgendermassen vor:

- Betätige die _Windows_-Taste auf der Tastatur.
- Tippe _PowerShell_ ein.
- Mache einen Rechtsklick auf das Icon und wähle _Als Administrator ausführen_ an.

Im Konsolenfenster kannst du nun den folgenden Befehl eingeben:

```powershell
wsl --install -d Debian
```

Die Installation dauert einige Minuten. Anschliessend sollte folgender Bildschirm angezeigt werden:

![Benutzername und Passwort einrichten](/img/wsl-username-password.png)

- Verwende deinen Vornamen in Kleinbuchstaben als Benutzername, z.B. `patrick`.
- Wähle ein Passwort aus, das leicht einzutippen ist. (Hier geht es mehr um den Anwenderkomfort als um die Sicherheit.)

Nach erfolgter Einrichtung siehst du diesen Bildschirm:

![Die Debian-Eingabeaufforderung](/img/wsl-initial-prompt.png)

> [!NOTE]
> Nach erfolgter Installation steht die Umgebung im Startmenü unter der Anwendung namens _Debian_ zur Verfügung.

Mit dem `cd`-Befehl gelangt man in sein Heimverzeichnis.

### Dateiaustausch

Im Windows-Explorer findest du unten links nun das Icon _Linux_, welches das Dateisystem von _Debian_ enthält:

![Das Debian-Dateisystem von WSL](/img/wsl-debian.png)

Wenn du nach `home`, `[Benutzername]` (z.B. `patrick`) navigierst, siehst du den Inhalt deines Heimverzeichnisses:

![Das Heimverzeichnis im Windows-Explorer](/img/wsl-files-home.png)

Damit wäre Debian unter WSL vorerst fertig eingerichtet.

Weitere Installationshinweise finden sich auf der [WSL-Installationsseite](https://learn.microsoft.com/de-ch/windows/wsl/install) von Microsoft.

## Pakete installieren

Als nächstes müssen einige Software-Pakete installiert werden. Dies sind:

1. Ein C-Compiler mit verschiedensten Hilfswerkzeugen: `build-essential`
2. Ein einfacher Texteditor für die Kommandozeile: `nano`
3. Die Versionskontrollsoftware Git: `git`

Software-Pakete können unter Debian mit dem Befehl `apt install` installiert werden. Es können gleich mehrere Paketnamen auf einmal mitgegeben werden. Führe nun folgenden Befehl aus:

```bash
sudo apt install -y build-essential nano git
```

Mithilfe von `sudo` erhält man temporär Administratorenrechte. Darum muss das vorher gewählte Passwort eingegeben werden.

Anschliessend kannst du die Installation der einzelnen Pakete mit den folgenden Befehlen überprüfen:

```bash
gcc --version
nano --version
git --version
```

Die Ausgabe sollte dann ungefähr so aussehen:

![Die Versionsangaben der installierten Pakete](/img/wsl-package-versions.png)

Die angezeigten Versionsnummern können sich dabei leicht unterscheiden.

## Der Texteditor Nano

[Nano](https://www.nano-editor.org/) ist ein sehr einfacher Texteditor für die Konsole. Auf der Webseite findet man u.a. eine komplette [Anleitung](https://www.nano-editor.org/dist/latest/nano.html) und eine [Befehlsübersicht](https://www.nano-editor.org/dist/latest/cheatsheet.html).

Zu Beginn brauchen wir aber nur einige wenige Befehle. Wir wollen eine Datei namens `introduction.txt` erstellen, wozu du den folgenden Befehl ausführen musst:

```bash
nano introduction.txt
```

Es sollte nun ein Fenster erscheinen, das ungefähr so aussieht:

![Der Nano-Startbildschirm](/img/nano-startscreen.png)

Gib nun etwas Text ein, z.B. eine kleine Vorstellung von dir:

```plain
Hallo, mein Name ist Patrick, und ich programmiere gerne.
```

Mit `Ctrl`-`S` kannst du die Datei speichern. Mit `Ctrl`-`X` kannst du den Texteditor wieder verlassen.

### Konfiguration

Nano wird in einer Konfigurationsdatei namens `.nanorc` im Heimverzeichniss konfiguriert. Öffne diese Datei unter `nano` mit folgendem Befehl:

```bash
nano .nanorc
```

Nun kannst du folgende Konfiguration eingeben:

```plain
set autoindent
set tabsize 4
set linenumbers
set softwrap
include "/usr/share/nano/*.nanorc"
```

Speichere und schliesse den Texteditor mit `Ctrl`-`S` und `Ctrl`-`X`.

Die Einstellungen bedeuten das folgende:

1. automatische Einrückung
2. Einrückung mit vier Zeichen
3. Zeilennummern anzeigen
4. Verwendung von Syntax-Hervorhebung in allen vorhandenen Sprachen

Damit wäre `nano` fürs erste ausreichend konfiguriert.

## Die Versionskontrolle Git

Damit wir verschiedene Versionen von einer Datei verwalten können, benötigen wir die etablierte Versionsverwaltung Git. Diese schauen wir uns im Modul 426 genauer an. An dieser Stelle wollen wir nur die wichtigsten Handgriffe für den Anfang lernen.

### Konfiguration

Zunächst muss Git grundlegend konfiguriert werden. Wir müssen den vollen Namen sowie die E-Mail-Adresse hinterlegen, damit wir Einträge in der Versionsgeschichte festhalten können.

Ein Benutzer namens "John Doe" mit SLUZ-Account müsste folgende Befehle eingeben:

```bash
git config --global user.name "John Doe"
git config --global user.email "john_doe@sluz.ch"
```

Passe Name und E-Mail-Adresse auf deine Angaben an und führe damit die obenstehenden Befehle aus. Anschliessend kannst du die Einstellunen folgendermassen überprüfen:

```bash
git config user.name
git config user.email
```

Das Ergebnis sollte folgendermassen aussehen, natürlich mit deinen persönlichen Angaben:

![Die erfolgte Git-Konfiguration](/img/git-config-result.png)

### Repository erstellen

Git verwaltet Quellcode in einem sogenannten _Repository_. Wir wollen ein neues Repository namens `hello-world` erstellen, wozu wir zunächst ein gleichnamiges Verzeichnis anlegen:

```bash
mkdir hello-world
```

Anschliessend wechseln wir das Arbeitsverzeichnis dorthin:

```bash
cd hello-world
```

In diesem leeren Verzeichnis erstellen wir ein Repository:

```bash
git init
```

### Dateien sichern: Das erste C-Programm

Wir erstellen nun gleich unser erstes C-Programm. Starte dazu `nano` folgendermassen:

```bash
nano hello.c
```

Tippe nun den folgenden Programmcode selber ein. So kannst du sicherstellen, dass du alle darin vorkommenden Sonderzeichen auf der Tastatur findest:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    return 0;
}
```

Das ganze sollte nun etwa so aussehen:

![Das "Hallo, Welt"-Programm](/img/c-hello-world-nano.png)

Speichere die Datei ab und schliesse den Texteditor.

Wir wollen diese Datei nun in die Versionskontrolle aufnehmen.

Gib zuerst den folgenden Befehl ein, der den Zustand des Repositories ausgibt:

```bash
git status
```

Die Ausgabe sollte etwa folgendermassen aussehen:

![Die Datei ist noch nicht mit Git verwaltet](/img/git-status-untracked.png)

Merke die Datei nun für den nächsten _Commit_ (Schreibvorgang) vor:

```bash
git add hello.c
```

Kontrolliere den Vorgang, indem du erneut diesen Befehl ausführst:

```bash
git status
```

Nun sollte die Ausgabe folgendermassen aussehen:

![Die Datei wurde für den nächsten Commit vorgemerkt](/img/git-status-staged.png)

Mit dem folgenden Befehl wird die Datei definitiv ins Repository geschrieben:

```bash
git commit -m "first C program"
```

Mit dem Parameter `-m` geben wir einen Änderungskommentar mit. Dieser erscheint, wenn wir die Versionsgeschichte mit folgendem Befehl ausgeben lassen:

```bash
git log
```

Die Ausgabe sollte ungefähr folgendermassen aussehen:

![Die Git-Versionsgeschichte](/img/git-log.png)

## Der GNU C Compiler (GCC)

Wir haben nun den Programmcode in der Datei `hello.c`. Dieser ist jedoch nicht ausführbar. Um zu einem ausführbaren Programm zu kommen, müssen wir den Programmcode zuerst _kompilieren_. Hierzu haben wir den _GNU C Compiler_ (`gcc`) installiert.

### Erstes Programm kompilieren

Damit lässt sich das Programm folgendermassen kompilieren:

```bash
gcc hello.c -o hello
```

Falls es zu einem Fehler kommen sollte, kontrolliere noch einmal, ob du den Code richtig abgetippt hast, und korrigiere allfällige Fehler, bis das Programm kompiliert werden kann.

Der Befehl bedeutet folgendes: "Kompiliere die Datei `hello.c` und gib sie als Datei `hello` aus (`-o` steht für _output_).

Anschliessend sollten zwei Dateien im Verzeichnis sein, was man mit dem Befehl `ls` überprüfen kann:

![Der Programmcode und das ausführbare Programm](/img/gcc-output-ls.png)

Die Datei `hello` kann nun folgendermassen ausgeführt werden:

```bash
./hello
```

Hierbei sollte die folgende Ausgabe erscheinen:

![Die Ausgabe des Programms](/img/hello-world-output.png)

**Herzliche Gratulation!** Du hast dein erstes C-Programm zur Ausführung gebracht!

## Aufgaben

1. Schreibe ein weiteres C-Programm, das deinen Namen ausgibt.
2. Kompiliere das Programm und starte es.
3. Wenn das Programm funktioniert, kannst du den Programmcode per Git ins Repository aufnehmen.

## Zusatzaufgabe

Falls du mit allem fertig bist, kannst du dich im [Wikibook über C-Programmierung](https://de.wikibooks.org/wiki/C-Programmierung:_Grundlagen) etwas in die Thematik einlesen.

## Weitere Hinweise

Wenn die Debian-Umgebung nicht mehr funktioniert, kann sie mit folgendem Befehl entfernt werden:

> [!WARNING]
> Vorher sollten aber alle Dateien gesichert werden!

```powershell
wsl --unregister Debian
```
