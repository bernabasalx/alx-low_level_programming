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
	char alph2 = 'A';

	while (alph1 <= 'z')
	{
		putchar(alph1);
		alph1++;
	}
	while (alph2 <= 'Z')
	{
		putchar(alph2);
		alph2++;
	}
       	putchar('\n');
       	return (0);
}

