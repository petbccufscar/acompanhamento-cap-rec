#include<stdio.h>


// Recebe uma cópia do valor que for enviado
// Vai receber 6
int funcao_maneira(int valor)
{
	// Apenas esse valor muda
	valor = 27;
}

int funcao_radical(int * valor)
{
	// Isso muda o valor de jorge
	*valor = 26;
}

int main()
{
	int jorge = 6;
	// Vai enviar 6

	funcao_maneira(jorge);
	printf("\nValor de jorge:%d",jorge);

	funcao_radical(&jorge);
	printf("\nValor de jorge:%d",jorge);
}
