#include <stdio.h>


int main(int argc,char *argv[]){
    int metrics,i;
    int actual_metric,past_metric,wasPeack=0,wasValley=0;

    scanf("%d",&metrics);

    for(i = 0;i<metrics;i++){
        scanf("%d",&actual_metric);

        if(i != 0){
            
            if(actual_metric == past_metric){
                printf("0\n");
                return 0;
            }

            if(i != 1){
                if(wasPeack == 1 && actual_metric > past_metric){
                    printf("0\n");
                    return 0;
                }
                else if(wasValley == 1 && actual_metric < past_metric){
                    printf("0\n");
                    return 0;
                }
            }

            if(actual_metric > past_metric){
                wasValley = 0;
                wasPeack = 1;
            }
            else{
                wasPeack = 0;
                wasValley = 1;
            }
        }
        past_metric = actual_metric;
    }
    
    printf("1\n");

	return 0;
}