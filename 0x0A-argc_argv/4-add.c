#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
  *main - starting function
  *@argc: counter
  *@argv: string
  *Return: 1 or 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num = 1;
	int i;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	while (num < argc)
	{
		for (i = 0; i < argv[num][i]; i++)
		{
			if (!(isdigit(argv[num][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
