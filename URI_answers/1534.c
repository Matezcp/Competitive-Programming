#include <stdio.h>

int main(){
    int n;

    while(scanf("%d",&n)!= EOF){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j+(i+1)==n)
                    printf("2");
                else if(j == i)
                    printf("1");
                else
                    printf("3");
            }
            printf("\n");
        }
    }

    return 0;
}