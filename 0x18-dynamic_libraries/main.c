#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * calling the functions: _strcat and _strlen
 * Return (0) on success
 */
int main(void)
{
	char name[21] = "Chidiamara ";

	printf("\nConcatenate f name with l name, using the func _strcat\n");
	printf("name + last name = %s\n", _strcat(name, "Ekejiuba"));
	printf("\nUsing _strlen func\n\nlength of \"Chidiamara\" : %d chars\n", _strlen("Chidiamara"));
	printf("Length of \"Ekejiuba\" : %d chars\n\n", _strlen("Ekejiuba"));
	return (0);
}
