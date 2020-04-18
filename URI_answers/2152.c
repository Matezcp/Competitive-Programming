#include <stdio.h>
#include <string.h>

int main() {
    char hour[3],minute[3];
    int occurrence,num_cases,i;

    scanf("%d",&num_cases);

    for(i =0;i<num_cases;i++){
        scanf("%s %s %d",hour,minute,&occurrence);

        if(strlen(hour) == 1)
            printf("0");
        
        printf("%s:",hour);

        if(strlen(minute) == 1)
            printf("0");
        
        printf("%s ",minute);

        if(occurrence == 0)
            printf("- A porta fechou!\n");
        else
            printf("- A porta abriu!\n");
        

    }


    return 0;
}