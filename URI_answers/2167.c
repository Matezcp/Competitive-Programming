#include <stdio.h>

int main()
{
    int n,i,ant,agr,sim=0,indice;
    
    scanf("%d",&n);
    
    ant=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&agr);
        if (agr < ant)
        {
            indice = i;
            printf("%d\n",indice);
            return 0;
        }
        ant = agr;
    }
    printf("0\n");
    return 0;
}
