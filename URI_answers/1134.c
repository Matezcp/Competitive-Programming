#include <stdio.h>

//1.Álcool 2.Gasolina 3.Diesel 4.Fim)
#define bool int
#define false 1
#define true 0
int main(){
	
	int x,a=0,g=0,d=0;
	bool stop = false;
	
	while (stop == false)
	{
		scanf("%d",&x);
		if (x==1)
		{
			a++;
		}
		else if (x==2)
		{
			g++;
		}
		else if (x==3)
		{
			d++;
		}
		else if (x==4)
		{
			printf("MUITO OBRIGADO\n");
			printf("Alcool: %d\n",a);
			printf("Gasolina: %d\n",g);
			printf("Diesel: %d\n",d);
			stop = true;
		}
		
	}
	
	return 0;
}