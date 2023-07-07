#include <stdio.h>
#include "main.h"
/**
  *main - starting function
  *@argc: counter of string argv
  *@argv: string
  *Return: 1 if error 0 for success
  */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
