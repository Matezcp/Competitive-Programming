#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d %d", &a,&b);
    if(b<a)
    {
        printf("Eu odeio a professora!\n");
    }
    else
    {
        if((b-a)>=3)
        {
            printf("Muito bem! Apresenta antes do Natal!\n");
        }
        else 
        {
            printf("Parece o trabalho do meu filho!\n");
            a+=2;
            if(a<24)
            {
                printf("TCC Apresentado!\n");
            }
            else
            {
                printf("Fail! Entao eh nataaaaal!\n");
            }
        }
    }

    return 0;
}