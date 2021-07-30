# printf
## SIMPLE IMPLEMENTATION OF THE PRINTF FUNCTION

It accepts different types of characters that can be printed printf allows specific formatting of the output, here are some examples:

| Formateador | Salida |
| ------ | ------ |
|%i|entero en base 10 con signo (int)
|%d|printf("El numero entero en base 10 es: %d", -10);|
|%c|caracter (char)|
|%s|cadena de caracteres (string)

HOW TO CREATE OUR PRINTF FUNCTION

- for the creation of our printf function we use our #include library "holberton.h" which contains the definitions of our functions that we will use for our printf function.

- We create functions that our printf will work 
- printf_char.c
- printf_string.c
- printf_integer.c

WE CREATE SOME FILES

- holberton.h - This file contains our prototype and functions
- printf.c - This file contains our prototype and functions
- match.c - File must contain the function that selects the correct function to perform the operation requested by the user. 

- We will use Prototype: int _printf(const char *format, ...); which is an enclosed library function.c which sends an output in stdout format.

## Compilar

we will use to compile
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
```sh
./a.out
```
