#include <stdio.h>
/**
  *main - starting function
  *
  *Description: printing numbers using putchar and not using the char variable.
  *
  *Return: 0
  */
int main(void)
{
	int i = '0';

	for (i = '0'; i < 10 ; i++)
	putchar(i + '0');
	return (0);
}
