+++
date = '2025-11-22T21:07:33+01:00'
title = 'Wertetabellen'
weight = 99
+++

## Aufgabe 1: Palindrom

Betrachte die folgende Funktion:

```c
_Bool is_palindrome(char word[])
{
    _Bool palindrome = true;
    int n = strlen(word);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        // point A
        if (word[i] != word[j]) {
            palindrome = false;
            break;
        }
        // point B
    }
    return palindrome;
}
```

Im Code sind mit Kommentaren zwei Stellen markiert: `point A` und `point B`. Die Werte der Variablen an diesen Stellen sollen in der folgende Tabelle ergänzt werden:

|Iteration| Stelle | `word` | `i` | `j` | `palindrome` |
|--------:|--------|:------:|----:|----:|--------------|
|        1| `A`    | `"sugus"`|   |     |              |
|        1| `B`    |    "   |     |     |              |
|        2| `A`    |    "   |     |     |              |
|        2| `B`    |    "   |     |     |              |

Kopiere diese Tabelle heraus und ergänze bzw. erweitere sie für den Funktionsaufruf mit dem Argument `"sugus"`.

Wenn sich der Wert gegenüber der oberen Zeile nicht ändert, kannst du die Zelle einfach leer lassen oder `"` hineinschreiben.

Wiederhole das Vorgehen anschliessend für das Funktionsargument `"sulfus"`.

## Aufgabe 2: Summe ungerader Zahlen

Betrachte die folgende Funktion:

```c
int sum_of_odd_numbers(int numbers[], int n)
{
    float result = 0;
    for (int i = 0; i < n; i++) {
        int number = numbers[i];
        if (number % 2 == 1) {
            result += numbers[i];
        }
        // point A
    }
    return result;
}
```

Kopiere und ergänze die Tabelle mit den Werten der Ausdrücke im Spaltentitel für das Argument `{1, 2, 3, 4, 5, 6, 7}`:

| Iteration | `i` | `number` | `number % 2` | `result` |
|----------:|----:|---------:|-------------:|---------:|
|          1|     |          |              |          |
