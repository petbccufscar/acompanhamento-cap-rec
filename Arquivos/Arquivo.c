#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *arq;
	char nome[55];
	int controle = 1;
	printf("\nDigite o nome do arquivo:");
	scanf("%s",nome);
	//w write and create overwrite
	//r read
	//w+ write/read and append
	arq = fopen(nome,"w");
	if(!arq)
	{
		printf("\nERRO\n");
		exit(EXIT_FAILURE);
	}
	while(controle!=0)
	{
		scanf("%s",nome);
		fprintf(arq,nome);
		fprintf(arq,"\n");
		printf("\nDeseja continuar digitando?");
		scanf("%d",&controle);
	}
	fclose(arq);
}

