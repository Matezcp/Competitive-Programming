#include <stdio.h>

int main()
{
    int d1,d2,d3;

    scanf("%d %d %d",&d1,&d2,&d3);

    if(d1 == d2)
        if(d2 < d3)
            printf(":)\n");
        else
            printf(":(\n");

    else if(d1 > d2)
        if(d2 > d3)
            if((d1-d2) > (d2 - d3))
                printf(":)\n");
            else
                printf(":(\n");
        else
            printf(":)\n");
    else
        if(d2 < d3)
            if((d3-d2) < (d2 -d1))
                printf(":(\n");
            else
                printf(":)\n");
        else
            printf(":(\n");
    

    return 0;
}
