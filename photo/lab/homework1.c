#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dizi[100];
	int sayi,i;
	
	printf("eleman sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
    {
       printf("dizinin %d. eleman� girin:",i+1);
	   scanf("%d",&dizi[i]);	
	}	
	
	printf("|\n");
	
	for(i=0;i<sayi;i++)
    {
       printf("%d ",dizi[i]);	
	}	
	
	
	return 0;
}
