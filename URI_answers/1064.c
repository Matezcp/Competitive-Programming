#include <stdio.h>

int main(){
	
	float a,b,c,d,e,f,sp,m;
	int np = 0;
	
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	
	if (a > 0)
	{
		sp += a;
		np++;
	}
	
	if (b > 0)
	{
		sp += b;
		np++;
	}
	
	if (c > 0)
	{
		sp += c;
		np++;
	}
	
	if (d > 0)
	{
		sp += d;
		np++;
	}
	
	if (e > 0)
	{
		sp += e;
		np++;
	}
	
	if (f > 0)
	{
		sp += f;
		np++;
	}
	
	m = sp/np;
	
	printf("%d valores positivos\n",np);
	printf("%.1f\n",m);
	
	return 0;
}