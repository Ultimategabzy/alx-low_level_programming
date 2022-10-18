#include "main.h"

/**
 * main - prints putchar followed by a newline
 * Return: returns 0
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[1]);

	_putchar('\n');

	return (0);
}
