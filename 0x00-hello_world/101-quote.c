#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a single line of string,
 * Return: Always 0 for success
 */


int main(void)
{
	write(2, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
