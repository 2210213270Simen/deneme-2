#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
/*	int avarege[]={5,8,7,3,6,9};
	

	int i;
	
	for(i=0;i<6;i++)
	{
		printf("%d\n",avarege[i]);
	}
*/

      int array[]={3,10,20,40};
      
      int i,sum;
      for(i=0;i<4;i++)
      {
      	sum=sum+array[i];
	  }
      
	  printf("sum: %d",sum);


	
	
	
	
	return 0;
}
