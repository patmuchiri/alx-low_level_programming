#include "main.h"

/**
 * print_most_numbers - print_most_numbers from 0 to 9
 * apart from 2 and 4
 * num - function identifier
 */

void print_most_numbers(void)

{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar (num);
		}
	}
	_putchar ('\n');
}
