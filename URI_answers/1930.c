#include <stdio.h>

int main()
{
	int a,b,c,d,total;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	total = a + (b-1) + (c-1) + (d-1);
	
	printf("%d\n",total);
	
	return 0;
}