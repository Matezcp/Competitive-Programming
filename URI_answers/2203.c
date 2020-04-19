#include <stdio.h>
#include <math.h>

typedef struct _point{
    int x;
    int y;
}point;

int main()
{
    point fiddle,invander;
    int radius_conj,radius_after_conj,vel;
    double dist;
    int x_quad,y_quad;

    while(scanf("%d",&fiddle.x) != EOF){
        scanf("%d %d %d %d %d %d",&fiddle.y,&invander.x,&invander.y,&vel,&radius_conj,&radius_after_conj);

        x_quad = (fiddle.x - invander.x) * (fiddle.x - invander.x);
        y_quad = (fiddle.y - invander.y) * (fiddle.y - invander.y);

        dist = sqrt(x_quad+y_quad);

        dist += 1.5*vel;

        dist -= radius_conj;

        if(dist <= radius_after_conj){
            printf("Y\n");
        }
        else
            printf("N\n");

    }


    return 0;
}
