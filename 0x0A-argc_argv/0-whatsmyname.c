#include <stdio.h>
#include "main.h"
/**
* main - print the name of the program followed by a new line
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
