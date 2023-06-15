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
	printf("size of a char on: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
