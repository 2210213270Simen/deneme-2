#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char sehir[15];
	
	int i;
	for(i=0;i<2;i++)
	{
		printf("sehiri yazýn: ");
		scanf("%s",sehir);
		printf("yazdiðiniz il: %s",sehir);
		printf("\n");
		
	}
	
	
	
	return 0;
}
