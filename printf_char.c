#include "holberton.h"
/**
 *printf_char - funtion to printf character
 *@c:character
 *Return:1
 */
int printf_char(va_list c)
{
  char character;
  character = va_arg(c, int);
  _putchar(character);
  return(1);
}
