#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 'This code prints all the possible combination of single digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
