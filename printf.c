#include "holberton.h"
/**
* _printf - Write a function that produces output according
* @*format: pointer of format
* @format:  pointer to format
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i_character = 0;
	unsigned int i;
	int (*format_print)();

	if ((!format) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
		format_print = match(format[i + 1]);

			if (format_print)
				i_character += format_print(list);
			else
			{
				if (format[i + 1] == '%')
					i_character += _putchar(format[i + 1]);
				else
				{
					i_character += _putchar(format[i]);
					i_character += _putchar(format[i + 1]);
				}
			}
			i++;
		}
		else
		{
			_putchar (format[i]);
			i_character++;
		}
	}

	va_end(list);
	return (i_character);
}
