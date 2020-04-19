#include <stdio.h>

int main()
{
    int num_cases,i;
    int attackG,attackD,DefenseG,DefenseD,LevelG,LevelD,bonus;
    double damageD, damageG;

    scanf("%d",&num_cases);

    for(i =0;i<num_cases;i++){
        scanf("%d %d %d %d %d %d %d",&bonus,&attackD,&DefenseD,&LevelD,&attackG,&DefenseG,&LevelG);
        
        damageD = (attackD+DefenseD)/2.0;
        if(LevelD % 2 == 0)
            damageD += bonus;

        damageG = (attackG+DefenseG)/2.0;
        if(LevelG % 2 == 0)
            damageG += bonus;

        if(damageD > damageG)
            printf("Dabriel\n");
        else if(damageD < damageG)
            printf("Guarte\n");
        else
            printf("Empate\n");

    }


    return 0;
}
