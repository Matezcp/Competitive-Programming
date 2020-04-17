#include <stdio.h>

int main(){
	
 	int a,b,c,d,e,np;
 	
 	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 	
 	if (a % 2 == 0)
 	{
 	  np++;
	}
	
	if (b % 2 == 0)
 	{
 		np++;	
	}
	
	if (c % 2 == 0)
 	{
 		np++;
	}
	
	if (d % 2 == 0)
 	{
 		np++;
	}
	
	if (e % 2 == 0)
 	{
 		np++;
	}
	
	printf("%d valores pares\n",np);
	
	return 0;
}