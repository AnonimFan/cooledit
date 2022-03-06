#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "libcled.h"

// Error File print formatted
int efprintf(FILE *strem, const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    vfprintf(stream, fmt, args);
    va_end(args);

    return 0;
}

int eprintf(const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);

    return 0;
}

char *cat(const char *file)
{
    char *lines;
    char line[300];

    FILE *f = fopen(file, "rb");

    int i = 0;
    while (fscanf(f, "%s", line)) {
        lines[i] = line;
        ++i;
    }

    return lines;
}

char *fmove(char *buf, const char *name)
{
    char *temp = cat(name);

    buf = temp;

    free(temp);

    return buf;
}

