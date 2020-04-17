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
		
		if (a > 0 && b > 0)
		{
			printf("primeiro\n");
		}
		
		else if (a > 0 && b < 0)
		{
			printf("quarto\n");
		}
		
		else if (a < 0 && b > 0)
		{
			printf("segundo\n");
		}
		
		else if (a < 0 && b < 0)
		{
			printf("terceiro\n");
		}
		
		else if (a == 0 || b == 0)
		{
			stop = true;
		}
	}
	
	return 0;
}