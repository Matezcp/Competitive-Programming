#include <stdio.h>

int main(){
	
	float n,a,b,c;
	
	scanf("%f", &n);
	
	if (n <= 2000)
	{
		printf("Isento\n");
	}
	
	else if (n >= 2000.01 && n <= 3000)
	{
		n -= 2000;
		n = n * 0.08;
		printf("R$ %.2f\n",n);
	}
	
	else if (n >= 3000.01 && n <= 4500)
	{
		n -= 2000;
		n = 80 + (n-1000)*0.18;
		printf("R$ %.2f\n",n);
	}
	
	else if (n > 4500)
	{
		n -= 2000;
		n = 80 + 270 + (n-2500)*0.28;
		printf("R$ %.2f\n",n);
	}
	
	
	
	return 0;
}