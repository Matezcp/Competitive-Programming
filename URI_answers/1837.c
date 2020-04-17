#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,q,r=0;

    scanf("%d %d",&a,&b);

    q=a/b;

    if(a<0){
        if(q<=0 && b > 0 && a%b != 0)
            q--;
        else if(a%b != 0)
            q++;
    }

    r=a-(b*q);

    if(a==-b)
    {
        q=-1;
        r=0;
    }
    if(a==b){
        q = 1;
        r = 0;
    }

    printf("%d %d\n",q,r);

    return 0;
}
