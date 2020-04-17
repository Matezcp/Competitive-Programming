#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main(){
	
	int r;
	float a,b,m = 0;
	bool nota1 = false,nota2 = false,resp = false,stop = false;
	
while (stop == false)
{	
	resp = false;
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
	
	while (resp == false)
	{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&r);
		if (r == 2)
		{
			resp = true;
			stop = true;
		}
		else if (r== 1)
		{
			resp = true;
			nota1 = false;
			nota2= false;
			m = 0;
		}
	}

}
return 0;
}