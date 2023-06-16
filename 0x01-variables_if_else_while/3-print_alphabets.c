#include <stdio.h>
/**
  *main - staring function
  *
  *Description: printing the alphabet in lowercase and uppercase using putchar
  *
  *Return: 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}

