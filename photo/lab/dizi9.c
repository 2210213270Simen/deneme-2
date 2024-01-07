#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,k,l,p,r;
	
	
	printf("satir sayisini girin: ");
	scanf("%d",&k);
	printf("sütün sayisini girin: ");
	scanf("%d",&l);
	
	int dizi[k][l];
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\n [%d][%d]---->",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	
	for(p=0;p<k;p++)
	{
		for(r=0;r<l;r++)
		{
			printf(" %d ",dizi[p][r]);
		}
		printf("\n");
	}
	
	
	
	}
	
	
	
	
	
	
	
	return 0;
}
