#include "holberton.h"
/**
* printf_integer - function that prints an integer
* @i: integer
* Return: counter
*/
int printf_integer(va_list i)
{
	int len, n, number, mul, x, digit;
	int counter = 0;

	n = va_arg(i, int);
	if (n)
	{
		if (n < 0)
	{
		_putchar('-');
		counter++;
	}
	number = n;
	len = 0;
	while (number)
	{
		number /= 10;
		len++;
	}
	mul = 1;
	for (x = 1; x <= len - 1; x++)
		mul *= 10;
	for (x = 1; x <= len; x++)
	{
		digit = n / mul;
		if (n < 0)
			_putchar((digit * -1) + 48);
		else
			_putchar(digit + '0');
		counter++;
		n -= digit * mul;
		mul /= 10;
	}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (counter);
}
