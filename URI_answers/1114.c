#include <stdio.h>

#define bool int
#define false 1
#define true 0

int main(){
	
	int a;
	bool stop = false;
	
	while (stop == false)
	{
		scanf("%d",&a);
		
		if (a != 2002)
		{
			printf("Senha Invalida\n");
		}
		else if (a == 2002)
		{
			printf("Acesso Permitido\n");
			stop = true;
		}
	}
	
	return 0;
}