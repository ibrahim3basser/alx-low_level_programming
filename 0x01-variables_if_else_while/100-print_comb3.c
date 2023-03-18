#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{

	for (int i = 0; i <= 8; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if ((i == j) || (j < i))
                continue;

            putchar(i+'0');
            putchar(j+'0');
            //printf("%d%d, ",i,j);
            if((i!=8) ||(j!=9))
            {
                putchar(',');
                putchar(' ');
            }
		}
	}
	putchar('\n');
	return (0);
}

