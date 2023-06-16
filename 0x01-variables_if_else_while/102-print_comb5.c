#include <stdio.h>
/**
  *main - starting function
  *
  *Description: printing possible combinations of two digits
  *
  *Return: 0
  */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			for (k = j + 1; k < 100; k++)
			{
				for (l = k + 1; l < 100; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');

					if (i < 96 || j < 97 || k < 98 || l < 99)
					{

				putchar(',');
				putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
