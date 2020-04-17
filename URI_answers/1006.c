#include <stdio.h>

int main(){
	
float a, b, c;
float MEDIA;
	
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

a = a * 2;
b = b * 3;
c = c * 5;
MEDIA = (a+b+c)/10;

printf("MEDIA = %.1f\n", MEDIA);


return 0;
}