#include<stdio.h>
#include<string.h>
typedef struct datadata{
	char nome[50];
	char sobrenome_cientifico[50];
}Nome_cientifico;

typedef struct animal{
	int idade;
	Nome_cientifico nome;
}Animal;

void imprime_ednaldo(Animal * ednaldo)
{
	printf("\nNome do Ednaldo:%s",ednaldo->nome.nome);
	printf("\nSobrenome do Ednaldo:%s",ednaldo->nome.sobrenome_cientifico);
}
int main()
{
	Animal a;
	a.idade = 53;
	strcpy(a.nome.nome,"Ednaldo");
	strcpy(a.nome.sobrenome_cientifico,"Ednaldus");
	imprime_ednaldo(&a);
	return 0;
}
