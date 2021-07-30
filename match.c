
#include "holberton.h"

/**
* *match - fuction given the list of functions
* @oper: operator
* @*match():fuction
* Return: pointer to the function
*/
int (*match(const char oper))()
{

	format_t operations[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"d", printf_integer},
		{"i", printf_integer},
		{NULL, NULL},
	};

	unsigned int i = 0;

	while (operations[i].oper != NULL)
	{
		if (operations[i].oper[0] == oper)
		{
		return (operations[i].f);
		}
		i++;
	}
	return (NULL);
}
