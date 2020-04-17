#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,atual=0;
    int foi=0;
    int quant=0;
    char poke[1000];
    scanf("%d",&n);
    char pokemons[n][1000];
    for(i=0;i<n;i++)
    {
        foi=0;
        scanf(" %s",poke);
        for(j=0;j<n;j++)
        {
            if(strcmp(pokemons[j],poke)==0)
            {
                foi=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(foi==0)
        {
            strcpy(pokemons[atual],poke);
            atual++;
            quant++;
        }
        else
        {
            continue;
        }   
    }

    printf("Falta(m) %d pomekon(s).\n",151-quant);

    return 0;


}