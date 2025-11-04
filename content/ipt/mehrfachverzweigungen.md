+++
date = '2025-09-14T19:02:11+02:00'
title = 'Mehrfachverzweigungen'
weight = 5
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `multibranches` an:

    mkdir multibranches

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd multibranches

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben. **Es sollen überall `switch`/`case`-Konstrukte zum Einsatz kommen!**

Tipp: Du kannst wieder das [Grundgerüst](/ipt/operatoren-und-ausdruecke/#aufgabe-0-grundgerüst) von vorletzter Woche als Grundlage für jede Aufgabe verwenden.

## Aufgabe 1: Vokal oder Konsonant?

Die Buchstaben unseres Alphabets unterteilt man in Vokale (a, e, i, o, u, y) und Konsonanten (b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, z).

Schreibe ein C-Programm `letters.c`, welches einen Kleinbuchstaben von der Kommandozeile entgegennimmt und ausgibt, ob es sich dabei um einen Vokal oder um einen Konsonanten handelt:

```plain
$ ./letters a
'a' ist ein Vokal
$ ./letters b
'b' ist ein Konsonant
$ ./letters 3
'3' ist unbekannt
```

Tipps:

- Verwende ein `switch`/`case`-Konstrukt, das für mehrere `case`-Fälle den gleichen Code ausführt.
- Zugriff auf den Kommandozeilenparameter erhältst du über `argv[1][0]`.

## Aufgabe 2: Römische Zahlen ausgeben

Die Ziffern von 1-9 werden durch die folgenden römischen Zahlen repräsentiert:

1. I
2. II
3. III
4. IV
5. V
6. VI
7. VII
8. VIII
9. IX

Schreibe ein C-Programm `dec-to-roman.c`, welches eine Ziffer von 1-9 als Ganzzahl oder Zeichen entgegennimmt und die entsprechende römische Zahl dazu ausgibt:

```plain
$ ./dec-to-roman 4
IV
$ ./dec-to-roman 9
IX
$ ./dec-to-roman y
Die spinnen, die Römer.
```

## Aufgabe 3: Römsiche Ziffern umwandeln

Das römische Zahlensystem verwendet folgende Ziffern mit dazugehörigen Werten:

- I: 1
- V: 5
- X: 10
- L: 50
- C: 100
- D: 500
- M: 1000

Schreibe ein C-Programm `roman-to-dec.c`, welches eine römsiche Ziffer als Zeichen entgegennimmt und den entsprechenden dezimalen Zahlenwert dazu ausgibt:

```plain
$ ./roman-to-dec X
10
$ ./roman-to-dec D
500
$ ./roman-to-dec A
Die spinnen, die Römer.
```

## Aufgabe 4: Zweistellige hexadezimale Zahlen

Hexadezimale Zahlen verfügen über 16 mögliche Zustände pro Ziffer: 0-9 und a-f. Bei einer zweistelligen _Dezimalzahl_ multipliziert man die linke Ziffer mit 10 und addiert sie zur rechten Ziffer, um ihren Wert zu erhalten. Bei einer _Hexadezimalzahl_ multipliziert man die linke Ziffer mit 16 nd addiert sie zur rechten Ziffer, um ihren dezimalen Wert zu erhalten.

Schreibe ein C-Programm `hex-to-dec.c`, welches eine zweistellige hexadezimale als zwei Zeichen entgegennimmt, daraus die dezimale Zahl errechnet und sie ausgibt:

```plain
$ ./hex-to-dec a7
167
$ ./hex-to-dec 3f
63
$ ./hex-to-dec ff
255
```

Tipp: Das linke Zeichen erhältst du per `argv[1][0]`, das rechte Zeichen per `argv[1][1]`.

## Aufgabe 5: Positiv, Null, Negativ

Schreibe ein C-Programm `pos-null-neg.c`, welches eine Dezimalzahl entgegennimmt und ausgibt, ob diese positiv, null oder negativ ist:

```plain
$ ./pos-null-neg 34
positiv
$ ./pos-null-neg -13
negativ
$ ./pos-null-neg 0
null
```

Tipp: Teile die Zahl `x` durch ihren Absolutwert, den du mittels `abs(x)` erhältst, um 1, 0 oder -1 zu erhalten. Formuliere anschliessend ein `switch`/`case`-Statement auf das Ergebnis. Vorsicht bei der Division durch 0!

## Aufgabe 6: Spielkarten

Schreibe ein C-Programm `cards.c`, welches zwei Zeichen entgegennimmt:

1. Eine Farbe
    - `C`: ♣ Clubs 
    - `D`: ♦ Diamonds
    - `H`: ♥ Hearts
    - `S`: ♠ Spades
2. Einen Wert
    - `A`: Ace
    - `2`: 2
    - `3`: 3
    - `4`: 4
    - `5`: 5
    - `6`: 6
    - `7`: 7
    - `8`: 8
    - `9`: 9
    - `X`: 10
    - `J`: Jack
    - `Q`: Queen
    - `K`: King

Das Programm soll ausgeben, um welche Karte es sich handelt.

```plain
$ ./cards C3
Clubs 3
$ ./cards HX
Hearts 10
$ ./cards SJ
Spades Jack
$ ./cards SA
Spades Ace
```

## Aufgabe 7: Schachbrett-Koordinaten

Beim Schachbrett werden die Spalten mit den Zeichen a-h und die Zeilen mit den Zahlen 1-8 bezeichnet. Ein bestimmtes Feld kann man dann mit Koordinaten wie z.B. "a4" oder "d7" benennen.

Schreibe ein C-Programm `chess-coords.c`, welches eine solche Koordinate entgegennimmt und zurückgibt, welche Farbe das Spielfeld hat.

```plain
$ ./chess-coords a1
schwarz
$ ./chess-coords a2
weiss
$ ./chess-coords h8
schwarz
$ ./chess-coords f5
weiss
```

Tipp: Bei "ungeraden" Spalten a, c, e und g sind die ungeraden Zeilen 1, 3, 5, 7 schwarz. Bei den "geraden" Spalten ist es gerade umgekehrt.

## Zusatzaufgabe (freiwillig): Schach-Spielzüge prüfen

Beim Schach werden die Spielfiguren mit folgenden Abkürzungen benannt:

- K: King (König)
- Q: Queen (Königin)
- R: Rook (Turm)
- B: Bishop (Läufer)
- N: Knight (Pferd/Springer)
- P: Pawn (Bauer)

Diese Figuren dürfen sich nach bestimmten [Regeln](https://de.wikipedia.org/wiki/Schach#Zugregeln) bewegen.

Ein Spielzug kann folgendermassen definiert werden: `Kd4 e5` (der König bewegt sich diagonal vom Feld d4 aufs Feld e5).

Schreibe ein C-Programm `chess-move.c`, welches einen Spielzug als zwei Kommandozeilenparameter entgegennimmt und ausgibt, ob dieser Spielzug erlaubt ist. Der Einfachheit halber sollen nur vereinfachte Regeln umgesetzt werden:

- König: Ein Feld horizontal, vertikal, diagonal
- Königin: Mehrere Felder horizontal, vertikal, diagonal
- Turm: Mehrere Felder horizontal, vertikal
- Läufer: Mehrere Felder diagonal
- Pferd: Pro Zug ein Feld horizontal und zwei Felder vertikal oder zwei Felder horizontal und ein Feld vetikal
- Bauer: Ein Feld vertikal

Die Ausgangslage (Kann ein Läufer überhaupt auf diesem Feld landen?) kannst du ignorieren.

Tipps:

- Bei der horizontalen Bewegung ändert sich die Spalte a-h aber nicht die Zeile 1-8
- Bei der vertikalen Bewegung ändert sich die Zeile 1-8 aber nicht die Spalte a-h
- Bei der diagonalen Bewegung ändern sich Zeile und Spalte um den gleichen Betrag
- Bearbeite die Figuren in folgender Reihenfolge (aufsteigender Schwierigkeitsgrad):
    - Bauer
    - Turm
    - Läufer
    - König
    - Königin
    - Pferd

```plain
$ ./chess-move Kd4 e5
erlaubt
$ ./chess-move Kd4 e6
nicht erlaubt
```
