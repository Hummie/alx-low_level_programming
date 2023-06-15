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
	printf("size of char on: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));


	return (0);
}
