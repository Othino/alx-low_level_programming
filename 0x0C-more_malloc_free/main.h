#ifndef MAIN_H
#define MAIN_H
#define UNUSED(p) ((void)(p))

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned in n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

#endif /* MAIN.H */
