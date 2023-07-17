#include<stdlib.h>
#include<stdio.h>
/**
* main - Entry point
* Description: 'putchar'
* Return: Always 0 (Success)
*/
int main(void)
{
        char alph1 = 'a';

        while (alph1 <= 'z')
        { 
		if (alph1 == 'e' || alph1 == 'q')
		{
			continue;
		}
                putchar(alph1);
                alph1++;
        }
        putchar('\n');
        return (0);
}
