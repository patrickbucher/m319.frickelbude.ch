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

Tipp: Du kannst wieder das [Grundgerüst](/ipt/operatoren-und-ausdruecke/#aufgabe-0-grundgerüst) von früher als Grundlage für jede Aufgabe verwenden.

## Aufgabe 1: Trainingsvergleich

Ein Sportler fragt sich, bei welcher Übung er mehr Arbeit (im physikalischen Sinn) verrichtet. Bei jedem Satz einer Übung hebt er ein bestimmtes Gewicht `w` zu einer bestimmten Anzahl Repetitionen `r`. Die Arbeit kann dann als Gewicht multipliziert mit der Anzahl Repetitionen (`w*r`) berechnet werden.

Der Sportler möchte nun wissen, welche von zwei Übungen die anstrengendere ist.

Schreibe ein Programm `heavier-exercise.c`, welche vier Zahlen entgegenmimmt:

1. das Gewicht der ersten Übung in kg
2. die Anzahl Repetitionen der ersten Übung
3. das Gewicht der zweiten Übung in kg
4. die Anzahl Repetitionen der zweiten Übung

Das Programm soll die beiden _Arbeisfaktoren_ (`w*r`) berechnen und vergleichend ausgeben:

```plain
./heavier-exercise 25 13 40 8
325 > 320
./heavier-exercise 20 10 45 7
200 < 315
./heavier-exercise 20 10 40 5
200 = 200
```

## Aufgabe 2: 500-Meter-Split-Zeit beim Rudern

Ein Ruderer möchte sein Training planen. Dazu möchte er folgende Angaben machen:

1. zurückzulegende Distanz in Kilometern (z.B. 10)
2. Trainingszeit in Minuten (z.B. 45)
3. Anzahl der Pausen während des Trainings (z.B. 3)
4. Dauer dieser Pausen in Sekunden (z.B. 30)

Das Display des Ergometers zeigt immer die Zeit an, die der Ruderer mit seiner derzeitigen Leistung für 500 Meter benötigt (_500 meter split time_).

Schreibe ein Programm `split-time.c`, welches diese Angabe anhand der vier bekannten Informationen berechnet:

```plain
./split-time 10 45 3 45
2m8s
./split-time 14 60 4 30
2m4s
```

Gehe bei der Berechnung folgendermassen vor:

1. Berechne die gesamte Pausenzeit (in Sekunden)
2. Berechne die reine Ruderzeit (in Sekunden) als Gesamtzeit minus Pausenzeit
3. Berechne die Anzahl 500-Meter-Abschnitte als Distanz in Metern durch 500 dividiert
4. Berechne die 500-Meter-Splitzeit als Ruderzeit dividiert durch Anzahl 500-Meter-Abschnitte

Tipp: Mit den Funktionen `floor`, `ceil` und `round` kannst du ab-, auf- und arithmetisch runden.

## Aufgabe 3: Jass-Stiche

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

1. **Farbregel**: Die zuerst ausgespielte Karte gibt die Farbe für die jeweilige Runde vor. Verfügt der Gegenspieler nicht über eine Karte der gleichen Farbe, muss er eine Karte einer anderen Farbe spielen. Diese hat wegen der Verletzung der Farbregel einen tieferen Wert als die zuerst ausgespielte Karte.
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

## Aufgabe 4: Weg bis zum Stillstand

Stösst man im Strassenverkehr auf ein Hindernis und bremst, um eine Kollision zu vermeiden, legt man noch eine Distanz zurück, bis das Fahrzeug schliesslich anhält. Diese Distanz setzt sich aus zwei Komponenten zusammen:

1. Reaktionsweg: den Weg den man mit voller Geschwindigkeit zurücklegt, bis man den Bremsvorgang einleitet.
2. Bremsweg: den Weg den das Fahrzeug mit verzögerter Geschwindigkeit zurücklegt, bis es schliesslich stillsteht.

Dabei ist folgendes zu beachten:

- Der Reaktionsweg ist abhängig von der Reaktionsgeschwindigkeit und der Fahrzeuggeschwindigkeit.
- Der Bremsweg ist abhängig von der Fahrzeuggeschwindigkeit und von der Bremsleistung (Verzögerung). Der Bremsweg wird mit der durchschnittlichen Geschwindigkeit von Anfangsgeschwindigkeit und Stillstand gerechnet, sprich die Hälfte der Anfangsgeschwindigkeit.

Schreibe ein Programm `stop-distance.c`, welches folgende Angaben entgegennimmt:

1. die Fahrzeuggeschwindigkeit in km/h
2. die Reaktionszeit in Sekunden
3. die Bremsleistung in m/s²

Das Programm soll den Weg bis zum Stillstand berechnen und auf zwei Nachkommastellen genau ausgeben:

```plain
./stop-distance 50 1 5
83.33m
./stop-distance 30 1 5
33.33m
./stop-distance 100 0.5 7
212.30m
```

Tipps:

- Rechne zuerst die Geschwindigkeit von km/h in m/s um, indem du sie durch 3.6 dividierst.
- Der Reaktionsweg ist die Reaktionszeit multipliziert mit der Geschwindigkeit (in m/s).
- Der Bremsdauer ist die Geschwindigkeit (in m/s) dividiert durch die Bremsleistung (in m/s²).
- Der Bremsweg ist die Bremsdauer multipliziert mit der Durchschnittsgeschwindigkeit.
- Die Durchschnittsgeschwindigkeit des Bremsvorgangs ist die Hälfte der Startgeschwindigkeit.

## Aufgabe 5: Punktezahl für Rennen

In der Formel 1 gibt es _Sprint-Rennen_ über 100 Kilometer und _Grand Prix_ über eine volle Renndistanz. Je nach Position am Ende des Rennens erhält man eine andere Punktzahl:

- Sprint-Rennen
    1. 8
    2. 7
    3. 6
    4. 5
    5. 4
    6. 3
    7. 2
    8. 1
- Grand Prix
    1. 25
    2. 18
    3. 15
    4. 12
    5. 10
    6. 8
    7. 6
    8. 4
    9. 2
    10. 1

Schreibe ein Programm `f1-points.c`, welches die Art des Rennens (`S` für Sprint, `G` für Grand Prix) und die Position entgegennimmt und ausgibt, wie viele Punkte der Fahrer gewinnt:

```plain
./f1-points S 7
2
./f1-points G 3
15
./f1-points X 1
unknown race type 'X'
./f1-points G 17
0
```

## Aufgabe 6: g-Kräfte bei Aufprall

Die auf einen Rennfahrer wirkenden Kräfte bei einem Aufprall werden in _g-Kräften_ angegeben, wobei ein g der Erdbeschleunigung von 9.81 m/s² beträgt.

Schreibe ein Programm `g-force.c`, welches folgende Angaben entgegennimmt:

- Einschlaggeschwindigkeit in km/h
- Bremsdistanz in m (bei einem Aufschlag oft nur wenige Zentimeter!)

Das Programm soll die Bremsverzögerung in g angeben:

```plain
./g-force 100 1
39.33
./g-force 200 0.5
314.62
```

Tipp:

- Rechne die Anfangsgeschwindigkeit von km/h nach m/s um, indem du sie durch 3.6 teilst.
- Die Bremsdauer (in s) erhälst du, indem du den Bremsweg durch die Durchschnittsgeschwindigkeit dividierst.
- Die Durchschnittsgeschwindigkeit beim Aufprall ist die Hälfte der Einschlaggeschwindigkeit.
- Die Bremsbeschleunigung erhälst du, indem du die Einschlaggeschwindigkeit durch die Bremsdauer dividierst.
- Die g-Kräfte erhälst du, indem du die Bremsbeschleunigung durch 9.81 dividierst.

## Aufgabe 7: Pit Stop Delta Time

Bei einem Formel-1-Rennen verliert man bei einem Boxenstopp Zeit gegenüber den anderen Fahrern, welche die Start-Ziel-Gerade mit voller Geschwindigkeit passieren.

Die verlorene Zeit beim Boxenstopp gegenüber einer normalen Runde bezeichnet man als _Pit Stop Delta Time_. Diese ist von folgenden Einflussfaktoren abhängig:

1. Länge der Boxengasse bzw. Zielgerade (in m)
2. Tempolimit in der Boxengasse (in km/h)
3. Standzeit beim Boxenstopp (in s)
4. Durchschnittsgeschwindigkeit auf der Zielgeraden (in km/h)

Schreibe ein Programm `pit-stop-delta-time.c`, welches die obenstehenden Angaben entgegennimmt und daraus die verlorene Zeit beim Boxenstopp berechnet:

```plain
./pit-stop-delta-time 500 80 3.1 200
16.60s
./pit-stop-delta-time 400 60 2.9 180
18.90s
./pit-stop-delta-time 900 80 3.5 275
32.22s
```

Mit den Formeln der Aufgaben 4 und 6 sollte sich die Aufgabe lösen lassen.

Die Länge der Boxengasse und Zielgeraden können der Einfachheit halber als gleich angesehen werden.

## Aufgabe 8: Reifenverschleiss

In der Formel 1 gibt es verschiedene Reifenmischungen ("Compounds"). Je weicher ein Reifen ist, desto schnellere Runden lässt er zu Beginn zu, doch desto schneller baut er auch ab und wird so langsamer. Jede Reifenmischung hat zwei Kennwerte: Die Leistungseinbusse gegenüber der schnellsten Reifenmischung und der Abbau der Leistung pro Runde:

| Mischung | Leistungseinbusse $p_{\alpha} $ | Leistungsabbau $ p_{\beta} $ |
| -------- | -----------------:| --------------:|
| C5       | 0%                | 0.93%          |
| C4       | 1%                | 0.85%          |
| C3       | 2%                | 0.72%          |
| C2       | 3%                | 0.58%          |
| C1       | 4%                | 0.49%          |

Schreibe ein C-Programm `tyre-degradation.c`, welches die folgenden Angaben entgegennimmt:

1. Die Reifenmischung (z.B. `C5`, `C4` usw.)
2. Eine Referenz-Rundenzeit $t_0$ in Sekunden (z.B. `90`)
3. Die Anzahl geplanter Runden $n$ mit einer Reifenmischung

Das Programm soll berechnen, wie schnell die letzte Runde mit der Reifenmischung in Sekunden $t$ absolviert wird.

```math
$$ t = t_0 \times p_{\alpha} \times + p_{\beta}^{n} $$
```

Tipps:

- Rechne die Leistungseinbussen von Prozent in Faktoren um (z.B. 8% = 1.08)
- Verwende die Funktion `pow` aus `math.h` für Potenzrechnungen. (Beim Kompilieren wird das Flag `-lm` benötigt.)
- Setze die Faktoren $p_{\alpha}$ und $p_{\beta}$ mithilfe von `switch`/`case` abhängig von der Reifenmischung.

```plain
./tyre-degradation C5 90 3 
92.53
./tyre-degradation C1 90 3
94.98
./tyre-degradation C5 90 20
108.30
./tyre-degradation C1 90 20
103.21
```
