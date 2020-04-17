#include <stdio.h>

int main(){
	
	int n1,n2,n3,n4,ni,nf,h,m;
	
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	ni = n1 * 60 + n2;	
	nf = n3 * 60 + n4;
	
	if (ni > nf)
	{
		nf += 1440;	
		nf = nf - ni;
		
		h = nf/60;
		nf %= 60;
		m = nf;
	
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);	
	}	
	else if (ni < nf)
	{
		nf = nf - ni;
		
		h = nf/60;
		nf %= 60;
		m = nf;
	
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);			
	}
	else if (ni == nf)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	
	return 0;
}