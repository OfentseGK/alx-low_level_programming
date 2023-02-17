#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then a new line, except q & e
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
