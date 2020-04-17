#include <stdio.h>

int main(int argc,char *argv[]){
    
    int credit[3];
    int i,larger,sum =0;

    for(i=0;i<3;i++)
        scanf("%d",&credit[i]);

    larger = credit[0];

    for(i=1;i<3;i++){
        if(credit[i] > larger){
            sum += larger;
            larger = credit[i];
        }
        else
            sum += credit[i];
        if( (credit[i] == credit[i-1]) ||  (credit[2] == credit[0]) ){
            printf("S\n");
            return 0;
        }
    }


    if(larger == sum)
        printf("S\n");
    else
        printf("N\n");

    
	return 0;
}