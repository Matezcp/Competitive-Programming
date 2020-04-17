#include <stdio.h>

int main(){
	
	int a,i = 2;
	
	scanf("%d",&a);
	
	for (;i <= a;i += 2)
	{
		printf("%d^2 = %d\n",i,i*i);
	}
	
	return 0;
}