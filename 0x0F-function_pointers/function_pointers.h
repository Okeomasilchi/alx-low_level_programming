#ifndef	FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

int _putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));





#endif /* FUNCTION_POINTERS_H*/
