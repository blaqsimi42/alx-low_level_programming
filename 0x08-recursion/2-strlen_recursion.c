/**
 * _strlen_recursion - the length of string return
 *
 * @s: the length of string to get
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
