#include <stdio.h>

int main(){
	
	int a,b,c;
	
	scanf("%d %d",&a,&b);
	
	if ( a > b)
	{
		b = b + 24;
		c = b - a;
		printf("O JOGO DUROU %d HORA(S)\n",c);		
	}
	else if ( b > a)
	{
		c = b - a;
		printf("O JOGO DUROU %d HORA(S)\n",c);
	}
	else if ( b == a)
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
}