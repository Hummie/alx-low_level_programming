#include <stdio.h>
#include "function_pointers.h"
/**
  *print_name - function to print name
  *@name: string
  *@f: pointer to function
  *Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
