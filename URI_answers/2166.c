#include <stdio.h>

double recursion_sqrt(int num_recur){
    if(num_recur == 0){
        return 0;
    }

    return 1/(2.0+recursion_sqrt(num_recur-1));
}



int main(int argc,char *argv[]){
    int loop;

    scanf("%d",&loop);

    printf("%.10lf\n",1.0+recursion_sqrt(loop));
    
	return 0;
}