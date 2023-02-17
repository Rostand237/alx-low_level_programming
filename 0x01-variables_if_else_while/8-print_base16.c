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
	char ch;

	for (ch = '0'; ch <= '15'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
