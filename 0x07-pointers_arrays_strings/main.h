#ifndef MAIN_H
#define MAIN_H

/* Task 0 - memset */
char *_memset(char *s, char b, unsigned int n);

/* Task 1 - memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Task 2 - strchr */
char *_strchr(char *s, char c);

/* Task 3 - strspn */
unsigned int _strspn(char *s, char *accept);

/* Task 4 - strpbrk */
char *_strpbrk(char *s, char *accept);

/* Task 5 - strstr */
char *_strstr(char *haystack, char *needle);

/* Task 6 - print_chessboard */
void print_chessboard(char (*a)[8]);

/* Task 7 - print_diagsums */
void print_diagsums(int *a, int size);

/* Task 8 - set_string */
void set_string(char **s, char *to);

#endif /* MAIN_H */
