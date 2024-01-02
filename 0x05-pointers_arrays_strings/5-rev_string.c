/**
 * _strlen - gets the length of a string
 *
 * @s: the string to get length of
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * rev_string - prints the reverse of a string
 *
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char a;

	len = _strlen(s) - 1;
	for (i = len; i > len / 2; i--)
	{
		a = s[i];
		s[i] = s[len - i];
		s[len - i] = a;
	}
}
