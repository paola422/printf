#include "holberton.h"
/**
* operators_funct - selects the correct func to perform the operation
* sked by the user
* @oper: operator passed as arguement to program
* @*match() - fuction given the list of functions
* Return: a pointer to the function
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

	while (operations[i].oper)
	{
		if (operations[i].oper[0] == oper)
		{
			return (operations[i].f);
		}
		i++;
	}
	return (NULL);
}
