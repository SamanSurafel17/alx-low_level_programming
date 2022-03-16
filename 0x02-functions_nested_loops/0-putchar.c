#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Succsess)
 */
int main(void)
{
	char *sh = "saman";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
