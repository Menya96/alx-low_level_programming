#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
int _islower(int c);
int isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memeset(char *s, char b, unsigned int n);
char *_memecpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
//char *strpbrk(char *s, char *acccept);
char *_strstr(char *haystack, char *needle);

#endif

