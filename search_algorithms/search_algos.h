#ifndef ALGO_HEADER
#define ALGO_HEADER

#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, int i, int j);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* ALGO_HEADER */
