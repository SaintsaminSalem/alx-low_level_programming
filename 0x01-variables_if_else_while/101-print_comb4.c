#include <stdio.h>
/**
 * main - p prints all possible different combinations of these digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k  = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(k == '9' && j  == '8' && i  == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
