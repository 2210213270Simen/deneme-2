#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("***Suyun durumu****\n\n");

    int sicaklik;
	
	printf("suyun sicakligini giriniz: ");
	scanf("%d",&sicaklik);
	
	if(sicaklik<=0)
	{
		printf("su buz halinde");
	}  
	
	else if(sicaklik>0 && sicaklik<100)
    {
    	printf("su sivi halde");
    }	
	else
	{
		printf("su buhar halinde");
	}
	
	return 0;
}
