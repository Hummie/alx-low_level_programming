#include<stdio.h>

/**
  *main - starting point
  *
  *Description: printf is outputting the size of variables
  *
  *Return: 0
  */
int main(void)
{
	printf("size of char on: %zu bytes\n", sizeof(char));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of long int: %zu bytes\n", sizeof(long int));
	printf("size of long long int: %zu bytes\n", sizeof(long long int));
	printf("size of char on - m32: %zu bytes\n", sizeof(char) - m32);
	printf("size of float on - m32: %zu bytes\n", sizeof(float) - m32);
	printf("size of int on - m32: %zu bytes\n", sizeof(int) - m32);
	printf("size of long int on - m32: %zu bytes\n", sizeof(long int) - m32);
	printf("size of long long int on - m32: %zu bytes\n", sizeof(long long int) - m32);

	return (0);
}
