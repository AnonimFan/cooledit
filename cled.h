#ifndef _CLED_H
#define _CLED_H

typedef struct {
    size_t cap;
    size_t size;
    char *chars;
} Line;

typedef struct {
    int x, y;
} Cursor;

#define BUFFER_CAP 65535
typedef struct {
    char buffer[BUFFER_CAP];
    size_t buffer_size = 0;
} Buffer;

#endif // _CLED_H
