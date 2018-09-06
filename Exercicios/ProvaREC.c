#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	char nome[25];
	char nacao[25];
	Data data;
}Avatar;

void mudar_dia_do_avatar(Avatar * v,int dia)
{
	v->data.dia = dia;
}

void multi_matrix(int a[3][3], int b[3][3], int c[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = 0;
			for(int k =0;k<3;k++)
			{
				// Faz a multiplicação linha por coluna
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}

void printa_matrix(int matrix[3][3])
{
	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	Avatar aang;
	strcpy(aang.nome,"Aang");
   	strcpy(aang.nacao,"Ar");
	aang.data.dia = 16;
	aang.data.mes = 3;
	aang.data.ano = 1999;
	mudar_dia_do_avatar(&aang,17);
	// Matriz do nada =D
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int b[3][3] = {1,2,3,4,5,6,7,8,9};
	int c[3][3];
	multi_matrix(a,b,c);
	printa_matrix(c);
	// Como usar arquivos =D
	FILE * arq;
	// w escreve
	// r lê
	// a append (qual a tradução? kkkk) concatena, isso!
	// w+ r+ leitura e escrita
	// (o que vc quer)b binario
	arq = fopen("arquivo.cleiton","wb");
	if(arq == NULL)
	{
		// sai do programa se deu algum erro
		printf("\n Não deu para abrir =(");
		exit(1);
	}
	fwrite(&aang,1,sizeof(aang),arq);
	fclose(arq);
	arq = fopen("arquivo.cleiton","rb");
	if(arq == NULL)
	{
		// sai do programa se deu algum erro
		printf("\n Não deu para abrir =(");
		exit(1);
	}
	// ngm liga pra korra
	Avatar korra;
	fread(&korra,sizeof(Avatar),1,arq);
	fclose(arq);

	printf("\nNome do avatar:%s",korra.nome);

}
