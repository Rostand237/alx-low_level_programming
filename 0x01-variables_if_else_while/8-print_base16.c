#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 16
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);

}
