#include "main.h"
/**
  *rot13 - function shifts by 13 places
  *@str: pointer to string
  *Return: str
  */
char *rot13(char *str)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (str[i] == data1[j])
		{
			str[i] = drot13[j];
			break;
		}
		}
	}
	return (str);
}
