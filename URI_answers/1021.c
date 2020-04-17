#include <stdio.h>

int main(){
	
	int a,b,c,d,e,f,g,h,i,j,k,l,n,m;
	
	scanf("%d.%d",&n,&m);
		
	a = n/100;
	n %= 100;
	b = n/50;
	n %= 50;
	c = n/20;
	n %= 20;
	d = n/10;
	n %= 10;
	e = n/5;
	n %= 5;
	f = n/2;
	n %= 2;	
	g = n/1;
	n %= 1;
	
	h = m/50;
	m %= 50;
	i = m/25;
	m %= 25;
	j = m/10;
	m %= 10;
	k = m/5;
	m %= 5;
	l = m;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",a);
	printf("%d nota(s) de R$ 50.00\n",b);
	printf("%d nota(s) de R$ 20.00\n",c);
	printf("%d nota(s) de R$ 10.00\n",d);
	printf("%d nota(s) de R$ 5.00\n",e);
	printf("%d nota(s) de R$ 2.00\n",f);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",g);
	printf("%d moeda(s) de R$ 0.50\n",h);
	printf("%d moeda(s) de R$ 0.25\n",i);
	printf("%d moeda(s) de R$ 0.10\n",j);
	printf("%d moeda(s) de R$ 0.05\n",k);
	printf("%d moeda(s) de R$ 0.01\n",l);	
	
	return 0;
}