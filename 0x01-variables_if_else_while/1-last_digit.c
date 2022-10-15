#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the last digit of the number stored in the var n
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
if (ld > 5)
	printf(" Last digit of %d is %d", n, ld);
	printf(" and is greater than 5\n");
else if (ld == 0)
	printf(" Last digit of %d is %d and is 0\n", n, ld);
else if (ld < 6 && ld != 0)
	printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, ld);
	return (0);
}
