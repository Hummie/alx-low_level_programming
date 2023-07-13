#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *malch;

	malch = malloc(b);
	if (malch == NULL)
	{
		exit (98);
	}
	return (malch);
}
