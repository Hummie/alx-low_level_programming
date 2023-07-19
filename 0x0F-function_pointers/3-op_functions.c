#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
  *op_add - function to add two integers
  *@a: parameter 1
  *@b: paramater 2
  *Return: sum of and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - function to subtract two integers
  *@a: parameter 1
  *@b: paramater 2
  *Return: Subtraction of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - function to multiply two integers
  *@a: parameter 1
  *@b: parameter 2
  *Return: multiplication of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - function to divide two integers
  *@a: parameter 1
  *@b: parameter 2
  *Return: division of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod - function to find modulo of two digits
  *@a: parameter 1
  *@b: parameter 2
  *Return: mod of a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}

