#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Should print lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
