#include <stdio.h>
#include <math.h>

int mmc(int num1, int num2) {

    int resto, x, y;

    x = num1;
    y = num2;

    do 
	{
   		resto = x % y;
        x = y;
        y = resto;

    } while (resto != 0);

    return (num1*num2)/x;
}


int main()
{
	int n,resposta=1,i;
	int pos[101];

	scanf("%lld",&n);
	
	for(i = 1;i<=n;i++)
	{
		scanf("%lld",&pos[i]);
	}
	
	for(i = 1;i<=n;i++)
	{
		int digl = pos[i];
		int tempo = 1;
		
		while(digl != i)
		{
			tempo++;
			digl = pos[digl];
		}
		resposta = mmc(resposta,tempo);
	}
	printf("%lld\n",resposta);
	return 0;
}