#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char linha[255];
	char filtro[255];
	FILE * arq;
	arq = fopen("teste.txt","r");
	if(!arq)
	{
		printf("\nERRO =(\n");
		exit(0);
	}
	// Filtro
	scanf("%s",filtro);

	while( (fscanf(arq,"%s\n",linha)) != EOF)
	{
		if(!strcmp(linha,filtro))
		{
			printf("\nNome:%s",linha);
			fscanf(arq,"%s\n",linha);
			printf("\nRA:%s",linha);
			// Caso queira converter texto
			// Para int strtoi(texto_a_ser_convertido)
		}
	}
	printf("\n");
	fclose(arq);
}

