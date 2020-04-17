#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main(){
	
	float a,b,m = 0;
	bool nota1 = false,nota2 = false;
	
	while(nota1 == false)
	{
		a = 0;
		scanf("%f",&a);
		if (a <= 10 && a >= 0)
		{
			nota1 = true;
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	
	while(nota2 == false)
	{
		b = 0;
		scanf("%f",&b);
		if (b <= 10 && b >= 0)
		{
			nota2 = true;
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	
	m = (a+b)/2;
	
	printf("media = %.2f\n",m);	
	
	return 0;
}