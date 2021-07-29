#include "holberton.h"
/**
 * printf_string - function to string
 * @s: string
 * Return:int
 */

int printf_string(va_list s)
{
	char *character;
	unsigned int i = 0;

	character = va_arg(s, char *);

	if (character == NULL)
		character = "(NULL)";
	while (character[i])
	{
		_putchar(character[i]);
		i++;
	}
	return (i);
}
