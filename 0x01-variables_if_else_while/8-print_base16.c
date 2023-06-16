#include <stdio.h>
/**
  *main - staring function
  *
  *Description: printing hexadecimal numbers.
  *
  *Return: 0
  */
int main(void)
{
	int f;
	char let;

	for (f = '0'; f <= '9'; f++)
	putchar(f);

	for (let = 'a'; let <= 'f'; let++)
	putchar(let);
	putchar('\n');
	return (0);
}
