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
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');
	putchar('\n');
	return (0);
}
