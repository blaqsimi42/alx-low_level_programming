#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars,
* and initializes with a specific char.
*
* @size: the size of the array string to be created.
* @c: the character that initalize the string
* Return:  a pointer to the array, or NULL on failure
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; ++i)
				str[i] = c;
		}
	}

	return (str);
}
