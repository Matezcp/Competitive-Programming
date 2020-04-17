#include <stdio.h>

int main(){
	
	float a,b,c,d;
	
	scanf("%f %f %f", &a,&b,&c);
	
	if (a < (b+c) && b < (a+c) && c < (a+b))
	{
		d = a+b+c;
		printf("Perimetro = %.1f\n",d);
	} 
	else 
	{
		d = ((a+b)*c)/2;
		printf("Area = %.1f\n",d);
	}
	
	return 0;
}