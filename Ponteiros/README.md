# Ponteiros
Ponteiros em **C** são variáveis cujo valor é um endereço de memória. Em termos não técnicos, um ponteiro é como se fosse um inteiro bem grande e sem sinal.

~~~C
#include<stdio.h>
int main(void)
{
	int a = 5; // O valor de a é 5
	int *ponteiro = &a; // O valor de ponteiro é número correspondente ao endereço de a
	printf("Este é o valor de a: %d\n", a);
	printf("Este é o valor de ponteiro: %lu\n", ponteiro);
	// %lu é para unsigned long int, lembra que disse que um ponteiro era um int grandão sem sinal?!
    return 0;
}
~~~

Saída:
~~~
Este é o valor de a: 5
Este é o valor de ponteiro: 140725846926284
~~~

## Acessando variáveis por referência
Como já dito, um ponteiro guarda o endereço de uma variável na memória, mas como isso pode nos ajuda?
Bom, através do endereço podemos acessar o valor da variável de qualquer escopo do programa.
~~~C
int a = 5;
int b = 2;
int *ptr;

ptr = a; // Errado! isso muda o endereço para qual o ponteiro aponta para 5.
ptr = &a; // Atribui o endereço da variavel a no ponteiro
*ptr = b; // Segue abaixo uma explicação para essa linha
~~~
Você deve ter percebido que o ponteiro estava apontando para o endereço da variável **a**, correto? Ao utilizar (\*) antes do nome da variável, dizemos ao compilador que estamos acessando a posição de memória apontada pelo ponteiro, logo ao atribuir **b** nesta posição de memória, estamos atribuindo **b** em **a**, ou seja, o mesmo que fazer **a = b**.

## Acessando posições de memória através de ponteiros
Você pode até se perguntar, mas é só isso? E lhe responderei, não!
Nas declarações de variáveis:
~~~C
int vetor[10];
char nome[50];
~~~
tanto **vetor** quanto **nome** são ponteiros! Seria muito custoso armazenar todas essas posições como variáveis separamente, então armazena-se apenas o endereço de inicio destes vetores, assim o operador **[]** indica qual posição a partir daquele endereço você está buscando.
Este operador não funciona apenas com vetores ou matrizes declarados no inicio do programa, você pode declarar ponteiros e acessar os elementos em posições especificadas por **[]** também!
~~~C
int vetor[10];
int *ptr;
ptr = vetor; // Vetor também é ponteiro, essa atribuição é válida
ptr[4] = 3; // Assim vetor[4] == 3
~~~
Também é possivel incrementar os ponteiros:
~~~C
int vetor[10];
int *ptr = vetor;
if ( *ptr == vetor[0] ) printf("São iguais!!!\n");
ptr++;
if ( *ptr == vetor[1] ) printf("Incrementou!!!\n");
~~~
Saída:
~~~
São iguais!!!
Incrementou!!!
~~~

Esta foi uma introdução aos ponteiros, espero que tenham entendido!