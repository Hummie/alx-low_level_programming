#include <stdio.h>
/**
  *main - starting function
  *
  *Description: printing the alphabet in reverse order.
  *
  *Return: 0
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
