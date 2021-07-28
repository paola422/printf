# printf
## What prints

It accepts different types of characters that can be printed printf allows specific formatting of the output, here are some examples:

| Formateador | Salida |
| ------ | ------ |
|%i|entero en base 10 con signo (int)
|%d|printf("El numero entero en base 10 es: %d", -10);|
|%u|entero en base 10 sin signo (int)|
|%o|entero en base 8 sin signo (int)|
|%x|entero en base 16, letras en minúscula (int)|
|%X|entero en base 16, letras en mayúscula (int)|
|%f|Coma flotante decimal de precisión simple (float)|
|%lf|Coma flotante decimal de precisión doble (double)|
|%ld|Entero de 32 bits (long)|
|%lu|Entero sin signo de 32 bits (unsigned long)|
|%e|La notación científica (mantisa / exponente), minúsculas (decimal precisión simple o doble)|
|%E|La notación científica (mantisa / exponente), mayúsculas (decimal precisión simple o doble)|
|%c|caracter (char)|
|%s|cadena de caracteres (string)

HOW TO CREATE OUR PRINTF FUNCTION

1.for the creation of our printf function we use our #include library "holberton.h" which contains the definitions of our functions that we will use for our printf function.
which is the one that contains the definitions of our functions that we will use for the correct operation of our printf.
correct operation of our printf.
2. we will create functions with which our printf will work
-printf_char.c
-printf_string.c
-printf_int.c
3. we will use Prototype: int _printf(const char *format, ...); which is an enclosed library function.
 c which sends an output in stdout format.



