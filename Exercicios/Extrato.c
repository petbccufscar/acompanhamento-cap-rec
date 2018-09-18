#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	FILE * saldo;
	FILE * transactions;
	// Arquivo aberto para append + leitura
	saldo = fopen("saldo.tct","a+");
	// Arquivo aberto apenas para leitura
	transactions = fopen("transacoes.txt","r");
	// Checa se ocorreu algum erro
	if(saldo == NULL || transactions == NULL)
	{
		printf("\nERRO =(\n");
		exit(0);
	}
	// Não vai alocar recurso
	// Desnecessário =) (então pode)
	char l_saldo[255];
	char l_tran[255];
	while((fscanf(saldo,"%s\n",l_saldo)) != EOF)
	{
		// Lê até a última linha e para
		// ultima linha = l_saldo
	}
	// Converte o valor de l_saldo para int assim
	// podemos fazer operações com num_saldo
	int valor_saldo = atoi(l_saldo);
	int t = 0;
	int valor_tran = 0;
	while((fscanf(transactions,"%s\n",l_tran)) != EOF)
	{
		// t == 0 não importa para nós agora
		// Já que é a data
		// Valor a ser operado
		if(t==1)
		{
			valor_tran = atoi(l_tran);
			printf("\nValor tran:%d",valor_tran);
		}
		// Operação a ser feita
		if(t==2)
		{
			if(!strcmp(l_tran,"D"))
				valor_saldo -= valor_tran;
			if(!strcmp(l_tran,"C"))
				valor_saldo += valor_tran;
			printf("\nValor saldo:%d",valor_saldo);
			t = 0;
		}
		else
			t++;
	}
	printf("\nValor final:%d",valor_saldo);
	fclose(saldo);
	fclose(transactions);

}
