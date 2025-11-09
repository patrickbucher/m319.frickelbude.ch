+++
date = '2025-11-09T15:06:19+01:00'
title = 'Banner Zeichnen'
weight = 2
+++

Beispiel (`banner-old.c`):

```c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int n = strlen(argv[1]) + 4;

    for (int i = 0; i < n; i++) {
        putchar('#');
    }
    putchar('\n');

    printf("# %s #\n", argv[1]);

    for (int i = 0; i < n; i++) {
        putchar('#');
    }
    putchar('\n');

    return 0;
}
```

Beispiel (`banner-new.c`):

```c
#include <stdio.h>
#include <string.h>

void draw_line(char c, int n) {
    for (int i = 0; i < n; i++) {
        putchar(c);
    }
}

int main(int argc, char *argv[]) {
    int n = strlen(argv[1]) + 4;

    draw_line('#', n);
    putchar('\n');

    printf("# %s #\n", argv[1]);

    draw_line('#', n);
    putchar('\n');

    return 0;
}
```