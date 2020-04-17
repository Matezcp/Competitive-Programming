#include <stdio.h>

void ordena(int *v){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            if(v[j]>v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1]= aux;
            }
    }
}


int main()
{
    int v[4];
    int i;

    for(i=0;i<4;i++)
        scanf("%d",&v[i]);

    ordena(v);

    if(v[3] < v[2] + v[1] || v[3] < v[2] + v[0] || v[3] < v[0] + v[1])
        printf("S\n");
    else if(v[2] < v[0] + v[1])
        printf("S\n");
    else 
        printf("N\n");
    return 0;
}
