#include "main.h"
void print_diagsums(int *a, int size);

/**
* _puts_recursion - prints a string followed by a new line
*@s: pointer to string
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
