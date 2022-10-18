#include <unistd.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char word[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);

	_putchar('\n');
	return (0);
}
