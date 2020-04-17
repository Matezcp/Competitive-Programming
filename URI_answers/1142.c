#include <stdio.h>

int main(){
	
	int a,i,x=1,y;
	
	scanf("%d",&a);
	
	for (i=1;i<=a;i++)
	{
		y = x+2;
		for (;x<=y;x++)
		{
			printf("%d ",x);
		}
		printf("PUM\n");
		x++;
	}
	
	return 0;
}