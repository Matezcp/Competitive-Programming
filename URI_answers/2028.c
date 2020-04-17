#include <stdio.h>

int main()
{
    int d,num=1,sum=1;

    while(scanf("%d",&d)!=EOF){
        sum = 1;
        printf("Caso %d: ",num);
        for(int i=d;i>0;i--){
            sum+=i;
        }
        if(sum==1)
            printf("%d numero\n",sum);
        else
            printf("%d numeros\n",sum);
        if(d== 0)
            printf("0");
        else
            printf("0 ");
        for(int i=1;i<=d;i++){
            for(int j=0;j<i;j++){
                if(i==d && j==i-1)
                    printf("%d",i);
                else
                    printf("%d ",i);
            }
        }
        printf("\n\n");
        num++;
    }
   
    
    return 0;
}
