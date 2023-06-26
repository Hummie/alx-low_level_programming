#include "main.h"
/**
  *swap_int - swaps value of integers
  *@a: pointer 1
  *@b: pointer 2
  */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
