#include "main.h"

/**
 * _strncpy - copys stiring from src to the dest
 *
 * @dest: the destination string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		n--;
		i++;
	}
	if (n > 0)
		while (n)
		{
			dest[i] = '\0';
			i++;
			n--;
		}

	return (dest);
}
