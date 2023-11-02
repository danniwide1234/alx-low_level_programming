#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
unsigned int string_length(char *s);
unsigned int calculate_concat_length(unsigned int len_s1, unsigned int len_s2, unsigned int n);
char *allocate_memory(unsigned int len);
void copy_string(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
