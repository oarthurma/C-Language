#include <stdio.h>

int x_toupper(char ch)
{
	if (ch >= 'a' && ch <= 'z') /* Se minúscula */
		return ch + 'A' - 'a';
	else
		return ch; /* Devolve a própria */
}

/* Escreva todos os caracteres em maiúsculas */

void main()
{
	char c;
	while(1) /* Termina com CRTL-C */
	{
		c=getchar();
			putchar(x_toupper(c));
	}
}