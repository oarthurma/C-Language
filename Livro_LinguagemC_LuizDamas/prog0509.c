#include <stdio.h>

int x_isdigit (char ch)
{
	return (ch >= '0' && ch <= '9');
}

/* Escreva todos os caracteres não digitos */

void main()
{
	char c;
	while(1) /* Termina com CTRL-C */
	{
		c = getchar();
		if (!x_isdigit(c)) /* se não for digito */
			putchar(c);
	} 
}