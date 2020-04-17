#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[]){
    int num;
    double fibo;

    scanf("%d",&num);

    fibo = (  pow(((1+sqrt(5))/2.0),num) - pow(((1-sqrt(5))/2.0),num)  )/sqrt(5);
    
    printf("%.1lf\n",fibo);

	return 0;
}