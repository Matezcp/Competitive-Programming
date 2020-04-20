#include <stdio.h>

int main()
{
    int repetition,i;

    scanf("%d",&repetition);

    for(i=0;i<repetition;i++){
        scanf("%*[^\n\r]");
        printf("I am Toorg!\n");
    }

    return 0;
}
