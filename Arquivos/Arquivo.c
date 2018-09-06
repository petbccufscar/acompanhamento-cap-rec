#include<stdio.h>
#include<stdlib.h>
void main()
{
	// Declaração de uma FILE (Stream de Bytes)
	FILE *arq;
	// Declaração de uma string o tamanho 55 é opcional
	char nome[55];
	// Variável usada para controle (Interessante saber o conceito disso)
	int controle = 1;

	printf("\nDigite o nome do arquivo:");
	// Lê o nome do arquivo em um scanf simples
	scanf("%s",nome);
	// w write, create and overwrite
	// r read
	// w+ write/read and append
	// Cria arquivo com o nome digitado
	arq = fopen(nome,"w");
	// Checa se deu para criar
	// Não daria certo se não tivesse permissão por exemplo
	if(!arq)
	{
		printf("\nERRO\n");
		// Função pra sair do programa
		exit(EXIT_FAILURE);
	}
	// Escreve o nome digitado no arquivo
	// até que controle seja != 0
	while(controle!=0)
	{
		// Lê entrada
		scanf("%s",nome);
		//Escreve no arquivo o nome
		fprintf(arq,nome);
		// Pula de linha no arquivo
		fprintf(arq,"\n");
		// O famigerado controle
		printf("\nDeseja continuar digitando? Digite 0 para parar.");
		scanf("%d",&controle);
	}
	fclose(arq);
}

