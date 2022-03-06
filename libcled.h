#ifndef _LIBCLED_H
#define _LIBCLED_H

int efprintf(FILE *strem, const char *fmt, ...);
int eprintf(const char *fmt, ...);
char *cat(const char *file);
char *fmove(char *buf, const char *name);

#endif // _LIBCLED_H
