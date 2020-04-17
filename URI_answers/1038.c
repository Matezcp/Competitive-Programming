#include <stdio.h>

int main(){
	
	//cod | preço
	// 1  | 4
	// 2  | 4.5
	// 3  | 5
	// 4  | 2
	// 5  | 1.5
	
	int q;
	float p,c;
	
	scanf("%f %d",&c,&q);
	
	if (c == 1)
	{
		c = 4;
	}
	else if (c == 2)
	{
		c = 4.5;
	}
		else if (c == 3)
	{
		c = 5;
	}
		else if (c == 4)
	{
		c = 2;
	}
		else if (c == 5)
	{
		c = 1.5;
	}
	
	p = c * q;
	
	printf("Total: R$ %.2f\n",p);
	
	return 0;
}