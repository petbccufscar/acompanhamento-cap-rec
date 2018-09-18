#include<stdio.h>

int main()
{
	int bolo1[8] = {1,4,6,7,9,11,13,14};
	int bolo2[8] = {2,3,8,12,14,18,22,90};
	int bolo3[16];
	int j = 0;
	int k = 0;
	for(int i = 0;i<16;i++)
	{
		if(j>8)
		{
			bolo3[i] = bolo2[k];
			k++;
		}
		else if(k>8)
		{	
			bolo3[i] = bolo1[j];
			j++;

		}
		else if((bolo1[j]<=bolo2[k]))
		{
			bolo3[i] = bolo1[j];
			j++;
		}
		else if((bolo1[j]>bolo2[k]))
		{
			bolo3[i] = bolo2[k];
			k++;
		}
		printf("\n>Bolo3[%d]:%d",i,bolo3[i]);
	}
	return 0;
}
