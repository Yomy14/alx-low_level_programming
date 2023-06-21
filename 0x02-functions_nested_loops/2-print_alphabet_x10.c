#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints the alphabet 10 times,
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
