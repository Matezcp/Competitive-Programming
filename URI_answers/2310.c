#include <stdio.h>

int main()
{
    int num_cases,i;
    int total_ball,total_blocked,total_attacks;
    int successful_ball,successful_blocked,successful_attack;
    int saque,bloqueio,ataque;

    total_ball = total_blocked = total_attacks = successful_ball = successful_blocked = successful_attack = 0;

    scanf("%d",&num_cases);

    for(i=0;i<num_cases;i++){
        scanf("%*s %d %d %d",&saque,&bloqueio,&ataque);

        total_ball += saque;
        total_blocked += bloqueio;
        total_attacks += ataque;
        scanf("%d %d %d",&saque,&bloqueio,&ataque);

        successful_ball += saque;
        successful_blocked += bloqueio;
        successful_attack += ataque;

    }

    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",100.0*((double)successful_ball/total_ball),100.0*((double)successful_blocked/total_blocked),100.0*((double)successful_attack/total_attacks));

    return 0;
}
