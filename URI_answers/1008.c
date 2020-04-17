#include <stdio.h>

int main(){
	
int num, hor;
float trab, sal;

scanf("%d %d %f", &num, &hor, &trab);

sal = hor * trab;

printf("NUMBER = %d\n",num);
printf("SALARY = U$ %.2f\n",sal);

return 0;
}