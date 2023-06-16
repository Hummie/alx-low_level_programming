#include <stdio.h>
/**
  *main - starting function
  *
  *Description: putchar to output the alphabet
  *
  *Return: 0
  */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}

