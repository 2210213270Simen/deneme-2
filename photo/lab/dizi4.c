#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int en,boy,i,j;
	
	printf("en degerini girin: ");
	scanf("%d",&en);
	
	printf("boy deðerini girin: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		
		for(j=1;j<=en;j++)
		{
			printf("*");
			
		}
		printf("\n");
		
	}
	
	
	
	
	return 0;
}
