+++
date = '2025-10-12T17:59:38+02:00'
title = 'Kombinierte Übungen'
weight = 6
+++

Lege für die folgenden Übungen ein neues Verzeichnis namens `combined` an:

    mkdir combined

Wechsle das aktuelle Arbeitsverzeichnis in den soeben erstellten Ordner:

    cd combined

Lege in diesem Ordner ein Git-Repository an:

    git init

Sichere nach jeder Aufgabe deine Lösung (z.B. `some-exercise.c`):

    git add some-exercise.c
    git commit -m "worked through some exercise"

Bearbeite so die folgenden Aufgaben. Es können alle bisher behandelten Konstrukte zum Einsatz kommen.

Tipp: Du kannst wieder das [Grunderüst](/ipt/operatoren-und-ausdruecke/#aufgabe-0-grundgerüst) von früher als Grundlage für jede Aufgabe verwenden.

## Aufgabe 1: Trainingsvergleich

Ein Sportler fragt sich, bei welcher Übung er mehr Arbeit (im physikalischen Sinn) verrichtet. Bei jedem Satz einer Übung hebt er ein bestimmtes Gewicht `w` zu einer bestimmten Anzahl Repetitionen `r`. Die Arbeit kann dann als Gewicht multipliziert mit der Anzahl Repetitionen (`w*r`) berechnet werden.

Der Sportler möchte nun wissen, welche von zwei Übungen die anstrengendere ist.

Schreibe ein Programm `heavier-exercise.c`, welche vier Zahlen entgegenmimmt:

1. das Gewicht der ersten Übung in kg
2. die Anzahl Repetitionen der ersten Übung
3. das Gewicht der zweiten Übung in kg
4. die Anzahl Repetitionen der zweiten Übung

Das Programm soll einen _Arbeisfaktor_ (`w*r`) berechnen und ausgeben:

```plain
./heavier-exercise 25 13 40 8
325 > 320
./heavier-exercise 20 10 45 7
200 < 315
./heavier-exercise 20 10 40 5
200 = 200
```

## Aufgabe 2: Jass-Stiche

Das Schweizer Kartenspiel _Jassen_ kann mit den bereits bekannten französischen Karten gespielt werden, welche sich durch zwei Zeichen identifizieren lassen:

1. Farbe
    - `C`: ♣ Clubs (Kreuz)
    - `D`: ♦ Diamonds (Ecken)
    - `H`: ♥ Hearts (Herz)
    - `S`: ♠ Spades (Schaufel)
2. Wert (mit aufsteigendem Wert)
    - `6`: 6
    - `7`: 7
    - `8`: 8
    - `9`: 9
    - `X`: 10
    - `J`: Jack (Bube)
    - `Q`: Queen (Königin)
    - `K`: King (König)
    - `A`: Ace (Ass)

Zwei Karten können nach den folgenden Regeln miteinander verglichen werden:

1. **Farbregel**: Die zuerst ausgespielte Karte gibt die Farbe für die jeweilige Runde vor. Verfügt der Gegenspieler nicht über eine Karte der gleichen Farbe, muss er eine Karte einer anderen Farbe geben. Diese hat wegen der Verletzung der Farbregel einen tieferen Wert als die zuerst ausgespielte Karte.
    - Beispiel: Wird _Schaufel_ ausgespielt, gilt `S6 > HA` (_Schaufel 6_ schlägt _Herz Ass_).
1. **Trumpffarbe**: Eine Karte der jeweiligen Trumpffarbe schlägt die Karten der anderen Farbe. Die Farbregel wird dadurch ausser Kraft gesetzt.
    - Beispiel: Ist _Herz_ Trumpf, gilt `H6 > SK` (_Herz 6_ schlägt _Schaufel König_).
1. **Kartenwerte**: Innerhalb einer Farbe werden die Karten anhand ihres Wertes verglichen (siehe _aufsteigende_ Reihenfolge oben).
    - Beispiel: Es gilt `DQ > D9` (_Ecken Königin_ schlägt _Ecken 9_).
1. **Trumpfwerte**: Bei der Trumpffarbe ist der _Bube_ die stärkste und die _9_ die zweitstärkste Karte. Die restlichen Karten folgen der bekannten Reihenfolge.
    - Beispiel: Es gilt `CJ > HA` (_Kreuz Bube_ schlägt _Herz Ass_).

Schreibe ein Programm `stronger-card.c`, welche drei Kommandozeilenparameter entgegennimmt:

1. eine Trumpffarbe (ein Zeichen: Farbe)
2. eine erste Karte (zwei Zeichen: Farbe und Wert)
3. eine zweite Karte (zwei Zeichen: Farbe und Wert)

Das Programm soll die beiden Karten nach den obigen Regeln miteinander vergleichen und folgendermassen ausgeben, welche davon die stärkere ist (die vier Beispiele demonstrieren die vier obigen Regeln in der angegebenen Reihenfolge):

```plain
./stronger-card S DX HA
DX > HA
./stronger-card S HA S6
HA < S6
./stronger-card S SK SQ
SK > SQ
./stronger-card S SQ SJ
SQ < SJ
```
