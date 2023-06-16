#include <stdio.h>
/**
  *main - starting function
  *
  *Description: printing base 10 numbers that are single digits starting from 0
  *
  *Return: 0
  */
int main(void)
{
	int i = '0';

	for (i = 0; i < 10; i++)
	printf("%d", i);
	printf("\n");
	return (0);
}
