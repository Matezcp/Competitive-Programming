#include <stdio.h>

int main(){
	
	int x,z,i =0,v=0,c=0;
	
	scanf("%d %d",&x,&z);
	
	while (z <= x)
	{
		scanf("%d",&z);
	}
	while (i < z)
	{
		i += x+c;
		v++;
		c++;
	}
	
	printf("%d\n",v);
	return 0;
}