#include "main.h"
/**
  *get_endianness - function to check endianness of a digit
  *Return: 1 if littl, 0 if big
  */
int get_endianness(void)
{
	int num = 1;
	char *end = (char *)&num;

	if (*end == 1)
		return (1);
	return (0);
}
