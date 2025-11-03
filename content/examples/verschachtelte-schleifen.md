+++
date = '2025-11-03T08:26:41+01:00'
title = 'Verschachtelte Schleifen'
+++

Beispiel (`mystery.c`):

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int n = argc - 1;
    int *numbers = (int *)malloc(sizeof(int) * n);
    if (numbers == NULL || argc < 2) {
        fprintf(stderr, "usage: %s NUMBER_1 NUMBER_2 ... NUMBER_N\n", argv[0]);
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);
        numbers[i - 1] = number;
    }

    // start of relevant part
    _Bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                found = true;
                break;
            }
        }
    }
    if (found) {
        puts("found");
    } else {
        puts("not found");
    }
    // end of relevant part

    return 0;
}

```

Was macht dieses Programm? Betrachte nur den mit Kommentaren markierten relevanten Teil.