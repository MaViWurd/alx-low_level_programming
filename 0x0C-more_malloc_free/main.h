#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
unsigned int *initDigitArray(size_t size);
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		char *n2_digits, size_t n1_len, size_t n2_len);
int stringIsPosInt(char *s);
void error(int status);
#endif /*MAIN_H*/
