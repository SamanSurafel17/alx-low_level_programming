#include <main.h>
/**
 * main - function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
int main(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		co++;
		putchar('\n');
	}
}
