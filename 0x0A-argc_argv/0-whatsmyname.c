#include <stdio.h>
/**
  *main - starting function
  *@argc: integer to count command line arguments
  *@argv: stringholding command line arguments
  *Return: 0
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
