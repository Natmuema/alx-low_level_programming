#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[4] = "Main";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
