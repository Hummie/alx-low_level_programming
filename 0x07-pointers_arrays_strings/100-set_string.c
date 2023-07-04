#include "main.h"
/**
  *set_string - function to set value of a pointer to a char
  *@s: pointer
  *@to: variable being pointed
  */
void set_string(char **s, char *to)
{
	*s = to;
}
