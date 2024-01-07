#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int m1[2][2]={10,20,30,40};
	int m2[2][2]={1,2,3,4};
	int sum[2][2];
	
	int i,j,k,l;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=m1[i][j]*m2[i][j];
		}
		
	}
	
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf(" %d",sum[k][l]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
