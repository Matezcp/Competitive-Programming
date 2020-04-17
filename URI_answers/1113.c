#include <stdio.h>

#define bool int
#define false 1
#define true 0

int main(){
	
	int a,b;
	bool stop = false;
	
	while (stop == false)
	{
		scanf("%d %d",&a,&b);
		
		if (a < b)
		{
			printf("Crescente\n");
		}
		else if (b < a)
		{
			printf("Decrescente\n");
		}
		else if (a == b)
		{
			stop = true;
		}
	}
	
	return 0;
}