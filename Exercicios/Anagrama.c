#include<stdio.h>
#include<string.h>

char checa_palindromo(char * p1)
{
	for(int i=0;i<strlen(p1);i++)
	{
		if(p1[i] != p1[ strlen(p1)-1 -i ])
			return 'N'; 
	}
	return 'S';
}

int main()
{
	char batata[10];
	strcpy(batata,"arara");
	printf("\n%c\n",checa_palindromo(batata));
}
