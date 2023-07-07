#include "main.h"
#include <stdio.h>
/**
  *main - starting function
  *@argc: integer to count command line arguments
  *@argv: stringholding command line arguments
  *Return: 0
  */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
