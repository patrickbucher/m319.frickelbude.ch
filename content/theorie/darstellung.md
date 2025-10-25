+++
date = '2025-09-08T06:39:18+02:00'
title = 'Darstellung von Programmen'
+++

Programmcode kann mit verschiedenen Arten von Diagrammen visualisiert werden. Eine häufig verwendete Form ist der _Programmablaufplan_ oder _Flussdiagramm_ (engl. _flowchart_).

Diese Seite bietet einen Überblick über die Notation des Programmablaufplans. Sie wird laufend um die neu gelernten Inhalte ergänzt.

## Start und Stop

Jedes Programm hat einen Start und ein Ende, symbolisiert durch ein Rechteck mit abgerundeten Ecken:

```mermaid
flowchart TD
    start([Start])
    stop([Stop])
    start --> stop
```

## Operationen und Sequenzen

Damit ein Programm aber tatsächlich auch etwas macht, benötigt es Operationen, symbolisiert durch ein Rechteck:

```mermaid
flowchart TD
    start([Start])
    op1[Operation 1]
    op2[Operation 2]
    opn[Operation n]
    stop([Stop])
    start --> op1 --> op2 --> opn --> stop
```

Dies entspricht dem folgenden C-Pseudocode:

```c
op1;
op2;
opn;
```

## Ein- und Ausgaben

Ein- und Ausgaben können mit einem Parallelogramm dargestellt werden:

```mermaid
flowchart TD
    start([Start])
    readA[/a einlesen/]
    readB[/b einlesen/]
    calc[c aus a und b berechnen]
    writeC[/c ausgeben/]
    stop([Stop])
    start --> readA --> readB --> calc --> writeC --> stop
```

Pseudocode:

```c
a = read(a);
b = read(b);
c = calc(a, b);
print(c);
```

Da Ein- und Ausgaben Operationen sind, kann man für sie auch das Rechteck verwenden:

```mermaid
flowchart TD
    start([Start])
    readA[a einlesen]
    readB[b einlesen]
    calc[c berechnen]
    writeC[c ausgeben]
    stop([Stop])
    start --> readA --> readB --> calc --> writeC --> stop
```

## Verzweigungen

Verzweigungen werden mit einer Raute symbolisiert:

```mermaid
flowchart TD
    start([Start])
    readAge[Alter einlesen]
    ifAge{Alter > 18}
    writeAdult[/'volljährig' ausgeben/]
    stop([Stop])

    start --> readAge --> ifAge
    ifAge -- "nein" --> stop
    ifAge -- "ja" --> writeAdult --> stop
```

Die ausgehende _Kante_ (d.h. der Pfeil) soll jeweils angeben, ob die Bedingung zutrifft oder nicht.

Pseudocode:

```c
age = read();
if (age > 18) {
    print("volljährig");
}
```

### Verzweigung mit Alternative

Bei einer Verzweigung mit einer Alternative haben beide ausgehenden Kanten eine oder mehrere Operationen zur Folge:

```mermaid
flowchart TD
    start([Start])
    readAge[Alter einlesen]
    ifAge{Alter > 18}
    writeAdult[/'volljährig' ausgeben/]
    writeMinor[/'minderjährig' ausgeben/]
    stop([Stop])

    start --> readAge --> ifAge
    ifAge -- "nein" --> writeMinor --> stop
    ifAge -- "ja" --> writeAdult --> stop
```

Pseudocode:

```c
age = read();
if (age > 18) {
    print("volljährig");
} else {
    print("minderjährig");
}
```

### Verzweigungen mit mehreren Alternativen

Bei Verzweigungen mit mehreren Alternativen werden mehrere Rauten mit Bedingungen angegeben, z.B. verschachtelt bei "Unterfällen":

```mermaid
flowchart TD
    start([Start])
    readAge[Alter einlesen]
    ifAgeAdult{Alter > 18}
    writeAdult[/'volljährig' ausgeben/]
    ifAgeYouth{Alter > 12}
    writeYouth[/'jugendlich' ausgeben/]
    writeMinor[/'Kind' ausgeben/]
    stop([Stop])

    start --> readAge --> ifAgeAdult -- "ja" --> writeAdult --> stop
    ifAgeAdult -- "nein" --> ifAgeYouth -- "ja" --> writeYouth --> stop
    ifAgeYouth -- "nein" --> writeMinor --> stop
```

Pseudocode:

```c
age = read();
if (age > 18) {
    print("volljährig");
} else {
    if (age > 12) {
        print("jugendlich");
    } else {
        print("Kind");
    }
}
```

### Mehrfachverzweigungen

Bei Mehrfachverzweigungen enthält die Raute keine Bedingung, sondern nur einen Ausdruck. Die ausgehenden Kanten werden dann mit dem dazu passenden konstanten Wert versehen:

```mermaid
flowchart TD
    start([Start])
    readGrade[Note einlesen]
    switch{Note}
    grade6[/'sehr gut' ausgeben/]
    grade5[/'gut' ausgeben/]
    grade4[/'gengügend' ausgeben/]
    grade3[/'ungenügend' ausgeben/]
    grade2[/'schlecht' ausgeben/]
    grade1[/'sehr schlecht' ausgeben/]
    gradeX[/'unbekannt' ausgeben/]
    stop([Stop])

    start --> readGrade --> switch;
    switch -- "6" --> grade6 --> stop;
    switch -- "5" --> grade5 --> stop;
    switch -- "4" --> grade4 --> stop;
    switch -- "3" --> grade3 --> stop;
    switch -- "2" --> grade2 --> stop;
    switch -- "1" --> grade1 --> stop;
    switch -- "sonst" --> gradeX --> stop;
```

Pseudocode:

```c
grade = read();
switch (grade) {
    case 6:
        print("sehr gut");
        break;
    case 5:
        print("gut");
        break;
    case 4:
        print("genügend");
        break;
    case 3:
        print("ungenügend");
        break;
    case 2:
        print("schlecht");
        break;
    case 1:
        print("sehr schlecht");
        break;
    default:
        print("unbekannt")
}
```

### Schleifen

Bei Schleifen kann der Programmablauf weiter oben im Programm fortgesetzt werden.

Bei einer fussgesteuerten Schleife ist die Prüfung unterhalb der zu wiederholenden Anweisung(en):

```mermaid
flowchart TD
    start([Start])
    random[Zufallszahl bestimmen]
    read[/Benutzereingabe einlesen/]
    comparison{Eingabe}
    win[/'gewonnen' ausgeben/]
    loose[/'falsch' ausgeben/]
    stop([Stop])

    start --> random --> read --> comparison;
    comparison -- "Eingabe = Zufallszahl" --> win --> stop;
    comparison -- "Eingabe ≠ Zufallszahl" --> loose --> read;
```

Bei einer kopfgesteuerten Schleife ist die Prüfung oberhalb der zu wiederholenden Anweisung(en).

```mermaid
flowchart TD
    start([Start])
    random[Zufallszahl bestimmen]
    comparison{Zufallszahl}
    write[/Zufallszahl ausgeben/]
    halve[Zufallszahl halbieren]
    stop([Stop])

    start --> random --> comparison;
    comparison -- "Zufallszahl > 10" --> halve --> comparison;
    comparison -- "Zufallszahl ≤ 10" --> write --> stop;
```