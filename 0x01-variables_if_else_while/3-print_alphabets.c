#include <stdio.h>

/**
 * main - Should print alphabet in small then in caps .
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
		putchar(ALP2[i]);
	}
	putchar('\n');
	return (0);
}
