#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - You can only use the putchar function (every other function
 *(printf, puts, etc…) is forbidden)
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
