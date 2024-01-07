#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int n1,n2;
float ort;

	
	printf("Notlarinizi giriniz\n");
    
	printf("1.sinav notunuz:");
    scanf("%d",&n1);
	
	printf("2.sinav notunuz:");
	scanf("%d",&n2);
	
	ort=(n1+n2)/2;
	
	if(ort>=50)
	{
		printf("Tebrikler geçtiniz :)");
	}

	else
	{
		printf("uzgunum kaldiniz:(");
	}
	return 0;
}
