#include "main.h"
/**
  *palistrlen - function to find the length of string
  *@a: pointer to string
  *@len: iterates through a to find length
  *Return: length
  */
int palistrlen(char *a, int len)
{
	if (*a == '\0')
		return (len - 1);
	return (palistrlen(a + 1, len + 1));
}

/**
  *palistrcomp - function to compare string
  *@a: pointer to string
  *@l: length
  *Return: 0 or 1
  */
int palistrcomp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	if (*a == 0)
		return (1);
	return (palistrcomp(a + 1, l - 2));
}

/**
  *is_palindrome - function to check if string is a palindrome
  *@s: pointer to string
  *Return: 1
  */
int is_palindrome(char *s)
{
	int l;

	l = palistrlen(s, 0);
	return (palistrcomp(s, l));
}

