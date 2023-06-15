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


	return (0);
}
