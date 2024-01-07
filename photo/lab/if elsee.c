#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x;
	printf("sayi yaziniz:");
	scanf("%d",&x);
	if(x%5==0)
	{
		printf("sayi 5'e tam bolunur");
	}
	
	else
	{
		printf("sayi 5'e tam bolunmez");
	}
	
	return 0;
}
