#include <stdio.h>

int main()
{
    int num_sitios,i,num_sitios_visitados=0;
    int sitios[1000000];
    unsigned long long int num_carneiros_total=0;
    unsigned long long int num_carneiros_roubados=0;
    int visitados[1000000];
    int next = 0,atual = 0;

    scanf("%d",&num_sitios);

    for(i=0;i<num_sitios;i++){
        scanf("%d",&sitios[i]);
        num_carneiros_total +=sitios[i];
        visitados[i]=0;
    }

    do{
        atual = next;
        if(sitios[atual] %2 == 0){
            next = atual - 1;
        }
        else{
            next = atual + 1;
        }
        num_carneiros_roubados++;
        sitios[atual]--;
        if(visitados[atual]==0){
            visitados[atual] = 1;
            num_sitios_visitados++;
        }

    }while(next < num_sitios && next >= 0 && sitios[next]>0);

    printf("%d %llu\n",num_sitios_visitados,num_carneiros_total-num_carneiros_roubados);
   
    
    return 0;
}
