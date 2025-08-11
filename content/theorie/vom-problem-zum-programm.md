+++
date = '2025-08-11T15:46:34+02:00'
title = 'Vom Problem zum Programm'
weight = 1
+++

Im Modul 319 geht es um das Entwerfen und Umsetzen von Applikationen (bzw. Anwendungen, Programmen, Software). Eine Software entwickelt man, um damit ein bestimmtes Problem zu lösen. Die Problemstellung steht also am Anfang des Entwicklungsprozesses. Damit das Problem gelöst werden kann, sollte dieses zunächst so genau wie möglich beschrieben werden. Nur so kann man sicherstellen, dass die Software auch das richtige Problem löst.

Anhand der Problembeschreibung können dann die genauen _Anforderungen_ ermittelt werden. Je nach Vorgehen werden diese anders festgehalten, etwa als _Use Cases_ (Anwendungsfälle) oder als _User Stories_ in der agilen Softwareentwicklung (siehe Modul 426). Bei klassischen Vorgehensmodellen wie z.B. dem _Wasserfallmodell_ folgt eine Design-Phase, in welcher die Software aus technischer Perspektive entworfen wird.

Vor der Umsetzung stellt sich die Frage, welche Programmiersprache gewählt werden soll ‒ bzw. welche Programmiersprachen, denn eine Software kann aus verschiedenen Komponenten bestehen, z.B. einem _Frontend_ (Web Client, Mobile App) und einem _Backend_ (serverseitige Anwendung). Im Frontend sind Programmiersprachen wie JavaScript und TypeScript für Web-Anwendungen sehr beliebt, während es für die Backend-Entwicklung eine Vielzahl anderer Sprachen gibt, z.B. C# mit dem .Net-Framework, Java, Go, Ruby usw. Für Kommandozeilenwerkzeuge, Systemanwendungen und ganze Betriebssysteme kommt of die Programmiersprache C zum Einsatz, die auch in diesem Modul verwendet wird.

Programmiersprachen lassen sich nach verschiedensten Kriterien einteilen. Man unterscheidet etwa _kompilierte_ und _interpretierte_ Programmiersprachen. Bei ersteren wandelt ein sogenannter _Compiler_ den Programmcode in eine ausführbare Binärdatei um. Bei interpretierten Sprachen findet dieser Schritt nicht statt: anstelle eines Compilers gibt es einen _Interpreter_, der direkt den Programmcode ausführen kann. Dieser Ansatz ist portabler (das Skript lässt sich auf verschiedenen Betriebssystemen und Prozessor-Architekturen ausführen), dafür laufen die Programme etwas langsamer. Die Programmiersprache C ist eine kompilierte Sprache; Python, Ruby, JavaScript sind interpretierte Sprachen.

Weiter kann man zwischen stark und schwach typisierten Programmiersprachen unterscheiden. Bei ersteren (C, C++, Java, C#) muss explizit angegeben werden, welcher Datentyp eine bestimmte Variable oder ein Rückgabewert von einer Funktion hat. Bei schwach typisierten Programmiersprachen (meistens Skriptsprachen) ist dies nicht nötig, was zu kompakterem Programmcode führt ‒ aber tendenziell auch zu mehr Problemen während der Ausführung des Programms. Stark typisierte Programmiersprachen sind in der Regel kompiliert, schwach typisierte Programmiersprachen meist interpretiert.

Programmiersprachen können auch anhand ihres _Paradigmas_ eingeteilt werden. Ein Paradigma ist eine grundsätzliche Betrachtungsweise, wie Programmierprobleme und deren Lösungen ausgedrückt werden können. In diesem Modul kommt die _strukturierte Programmierung_ zum Einsatz, bei welcher der Programmfluss durch sogenannte _Kontrollstrukturen_ (Verzweigungen, Wiederholungen) ausgedrückt wird (Sprachen: C, Pascal, Go). Bei der _objektorientierten Programmierung_ (Modul 320) werden die Daten und Funktionen zu sogenannten _Klassen_ gruppiert, wodurch sich Sachverhalte aus der realen Welt analog in Software ausdrücken lassen (Sprachen: C++, C#, Java). Bei der _funktionalen Programmierung_ (Modul 323) wird das Programm in erster Linie mithilfe von Funktionen ausgedrückt: man definiert weniger den Programmablauf und mehr die Beziehung zwischen Problem und Lösung (Sprachen: Haskell, LISP, Scala, F#).

Ein wichtiger Bestandteil der Softwareentwicklung ist das _Testen_ der Software (Modul 450). Hierbei gibt es verschiedene Ansätze: man testet entweder das fertige Programm bzw. Teile davon, oder man schreibt automatisierte Tests, was bereits vor der Entwicklung des eigentlichen Programms erfolgen kann. In der Praxis kombiniert man verschiedene Arten von Tests. Beim sogenannten _Abnahmetest_ ist auch der Endanwender involviert, der überprüfen soll, ob das richtige Problem (_Validierung_) korrekt (_Verifizierung_) gelöst worden ist.

Die fertige Software muss bereitgestellt werden (_Deployment_), was heutzutage oft mithilfe von Containern (Modul 347) und in der Cloud (Modul 346) stattfinden kann. In der Praxis gilt eine Software jedoch selten als "fertig", da im Betrieb einerseits Fehler festgestellt werden, die korrigiert werden müssen, und andererseits der Anwender der Software erweiterte und verbesserte Funktionalität wünscht. Die Software muss also _gewartet_ werden. Das bedeutet nicht, dass die Software wie ein Auto oder eine andere Maschine mit der Zeit "kaputt" geht. Es können jedoch Sicherheitslücken bekannt werden, die dazu führen, dass die Software und die Komponenten, aus der sie besteht, aktualisiert werden müssen. (In der Praxis schreibt man nur einen kleinen Teil der Software selber. (Der grösste Teil wird in Form von Programmbibliotheken (engl. _Libraries_) oder _Frameworks_ zur Verfügung gestellt.)

Die Softwareentwicklug ist also ein sehr weites Feld. Es benötigt verschiedene spezialisierte Tätigkeiten, bis man von einem Problem zum funktionierenden Programm kommt: Requirements Engineering zum Ermitteln der Anforderungen, Software-Architekten zum Entwerfen der Anwendung, Designer zum Ausarbeiten der Benutzerschnitttellen, Programmierer zum Umsetzen der Anforderungen, Tester zum Überprüfen der korrekten Umsetzung, Experten für den Betrieb zum Ausliefern der Anwendung ‒ und natürlich Anwender, die Gebrauch von der Software machen und mögliche Probleme den Entwicklern zurückmelden.

## Fragen

1. Was steht ganz am Anfang der Softwareentwicklung?
1. Welche Aktivitäten müssen vor dem eigentlichen Programmieren erfolgen?
1. Wie (nach welchen Kriterien) können verschiedene Programmiersprachen eingeteilt werden?
1. Was wird beim Testen überprüft?
1. Was passiert mit einer fertig entwickelten Software?
1. Warum gilt eine Software praktisch nie als "fertig"?
1. Welche Rollen sind in der Softwareentwicklung involviert?

