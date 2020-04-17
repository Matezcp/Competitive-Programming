#include <stdio.h>

int main(){
	
	int km;
	float litros, total;
	
	scanf("%d %f", &km, &litros);
	
	total = km/litros;
	
	printf("%.3f km/l\n",total);
	
	return 0;
}