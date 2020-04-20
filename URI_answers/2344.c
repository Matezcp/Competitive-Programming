#include <stdio.h>

int main()
{
    int grade;

    scanf("%d",&grade);

    if(grade == 0)
        printf("E\n");
    else if(grade <= 35)
        printf("D\n");
    else if(grade <= 60)
        printf("C\n");
    else if(grade <= 85)
        printf("B\n");
    else
        printf("A\n");


    return 0;
}
