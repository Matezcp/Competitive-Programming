#include <stdio.h>

int main(){
    int n;

    while(scanf("%d",&n)!= EOF){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j == n/2 && i == n/2)
                    printf("4");
                else if(j >= n/3  && j <= (n-((n/3)+1)) && i >= n/3  && i <= (n-((n/3)+1)) )
                    printf("1");
                else if(j == i)
                    printf("2");
                else if(j+(i+1)==n)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}