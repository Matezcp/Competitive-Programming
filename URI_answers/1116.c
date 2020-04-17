#include <stdio.h>

int main (){
	
	int a,i,x,y;
	
	scanf("%d",&a);
	
	for (i = 1;i <= a;i++)
	{
		scanf("%d %d",&x,&y);
		
		if (x != 0 && y != 0)
		{
		printf("%.1lf\n",(double)x/y);	
		}
		
		else if (x == 0)
		{
			printf("0.0\n");
		}
		
		else if (y == 0)
		{
			printf("divisao impossivel\n");
		}
	}
	
	return 0;
}