+++
date = '2025-10-20T20:51:10+02:00'
title = 'Arrays'
weight = 7
+++

Erstelle ein neues Verzeichnis `arrays`, initialisiere darin ein Git-Repository und halte die C-Quellcodedateien mittels `git add` und `git commit` im Repository fest.

## Aufgabe 1: Morsealphabet

Schreibe ein Programm `morse.c`. Bilde darin den Morsecode für die Vokale `A`, `E`, `I`, `O` und `U` ab, indem du für jeden dieser Buchstaben ein null-terminiertes Array definierst und folgendermassen mit den Zeichen `.` und `-` (Punkt und Bindestrich) initialisierst:

- `A`: `.-`
- `E`: `.`
- `I`: `..`
- `O`: `---`
- `U`: `..-`

Der Benutzer soll anschliessend das Programm mit einem dieser Buchstaben aufrufen können und den Morsecode dazu erhalten:

```plain
$ ./morse A
.-
$ ./morse U
..-
$ ./morse X
?
```

## Aufgabe 2: Schiffe versenken (in einem engen Kanal)

Verwende für das folgende Programm dieses Grundgerüst namens `ship.c`:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argv, char *argv[])
{
    srand(time(NULL));
    int i = rand() % 7;
    int j = i + 1;

    // TODO: your code

    return 0;
}
```

Definiere ein Array namens `river` der Länge 8 und initialisiere es mit Leerzeichen. Ersetze im Array auf den Positionen `i` und `j` das Leerzeichen durch ein Gleichheitszeichen `=`, was das Schiff darstellen soll.

Der Benutzer startet nun das Programm, indem er einen Arrayindex zwischen 0 und 7 eingibt, womit das Schiff beschossen werden soll. Trifft er das Schiff, ersetze das `=` an der betroffenen Stelle durch ein `x`. Verfehlt er das Schiff, ersetze das Leerzeichen durch ein `o`. Gib das Array am Schluss als String aus.

Das Spiel könnte etwa so aussehen:

```plain
$ ./ship 6
  ==  o
$ ./ship 6
    ==o 
$ ./ship 6
     o==
$ ./ship 6
     x= 
$ ./ship 8
error
```

## Aufgabe 3: Palindrome

Schreibe ein C-Programm `palindrome.c`, welches vom Benutzer Wörter der Länge 5 entgegennimmt und prüft, ob es sich dabei um ein Palindrom handelt (d.h. ob das Wort vorwärts und rückwärts gelesen gleich ist):

```plain
$ ./palindrome anina
palindrome
$ ./palindrome sugus
palindrome
$ ./palindrome maoam
palindrome
$ ./palindrome abcde
no palindrome
$ ./palindrome anna
unsupported length 4
```

Die Länge findest du über die Funktion `strlen` aus `string.h` heraus.

## Aufgabe 4: Strings kürzen

Schreibe ein Programm namens `trim.c`, welches zwei Argumente entgegennimmt:

1. ein Wort als Zeichenkette (String)
2. eine Länge als Zahl

Deklariere ein Array namens `word` der Grösse 1024. Verwende nun die Funktion `strncpy` aus `string.h`, um das Kommandozeilenargument in das Array `word` zu kopieren. Die Funktion `strncpy` erwartet drei Parameter:

1. das Array, wo die Daten hinkopiert werden sollen: `word`
2. das Array, aus dem die Daten herauskopiert werden sollen: `argv[1]`
3. die Anzahl der Bytes, die maximal kopiert werden sollen: `1024`

Verwende nun die Funktion `strnlen` aus `string.h`, um die tatsächliche Länge des kopierten Wortes zu ermitteln. Diese verwendet zwei Parameter:

1. das Wort: `word`
2. die maximal zu prüfende Limite: `1024`

Ist das Wort länger als die angegebene Limite, kürze das Wort, indem du an der passenden Stelle das Zeichen `'\0'` in das Wort einfügst. Gib das gekürzte Wort anschliessend mit `printf` aus.

```plain
$ ./trim foobar 3
foo
$ ./trim foobar 10
foobar
```
