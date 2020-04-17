#include <stdio.h>
#include <math.h>

int main(){
	
	float a,b,c,r1,r2,d;
	
	scanf("%f %f %f",&a,&b,&c);
	
	d = (b*b)-(4*a*c);
	
	if ((d < 0)||(a == 0)){
		printf("Impossivel calcular\n");
	}
	
	else {
		r1 = ((b*-1) + sqrt(d))/(2*a);
		r2 = ((b*-1) - sqrt(d))/(2*a);
		
		printf("R1 = %.5f\n",r1);
		printf("R2 = %.5f\n",r2);		
	}	
		
	return 0;
}