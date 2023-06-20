#include "main.h"
/**
  *int_abs - absolute value of a number
  *@num: Bumber tobe computed
  *Return: Absolute value or 0
  */
int _abs(int num)
{

	if (num < 0)
	{
	int abs_val;

	abs_val = num* -1;
	return(abs_val);
	}
	return(num);
}
