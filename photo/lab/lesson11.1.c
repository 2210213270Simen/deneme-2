#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,sayi;
	int faktoriyel;
	
	printf("write a number: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	
	printf("sonuc: %d", faktoriyel);
	
	
	
	
	return 0;
}
