#ifndef S_ALG_H
#define S_ALG_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, size_t pos, size_t size, int value);

#endif
