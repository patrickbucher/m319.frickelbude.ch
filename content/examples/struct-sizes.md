+++
date = '2025-11-22T20:54:40+01:00'
title = 'Strukturgrössen'
weight = 3
+++

Was gibt das folgende Programm (`sizes.c`) aus?

```c
#include <stdio.h>

struct one {
    long l;
    int i;
    short s;
    char c;
};

struct two {
    char c;
    long l;
    short s;
    int i;
};

int main(int argc, char *argv[])
{
    printf("size of one: %lu\n", sizeof(struct one));
    printf("size of two: %lu\n", sizeof(struct two));
    return 0;
}
```