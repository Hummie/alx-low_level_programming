#include "main.h"
/**
  *reverse_array - function to reverse array
  *@a: pointer to array
  *@n: number of elements in array
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
