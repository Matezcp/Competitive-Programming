#include <stdio.h>

int main() {
    int n,i,j,aux=0;
    
    scanf("%d",&n);
    
    int matriz[150][150];
    int count;
    
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    i=0;
    while(aux<n*n)
    {
        for(int k=0;k<n;k++)
        {
            j=0;
            for(int g=0;g<n;g++)
            {
                count=0;
                if(matriz[i][j]==1)
                {
                    count++;
                }
                if(matriz[i][j+1]==1)
                {
                    count++;
                }
                if(matriz[i+1][j]==1)
                {
                    count++;
                }
                if(matriz[i+1][j+1]==1)
                {
                    count++;
                }
                if(count>=2)
                {
                    printf("S");
                }
                else
                {
                    printf("U");
                }
                j++;
                aux++;  
            }
            i++;
            printf("\n");
        }
    }
    
    return 0;
}