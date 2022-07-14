#ifndef GRANDPARENT_H
#define GRANDPARENT_H

int _putchar(char c);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *);
char *rot13(char *);
char *add_strings(char *n1, char *n2, char *r, int r_index);
void print_buffer(char *b, int size);
void print_number(int n);
#endif