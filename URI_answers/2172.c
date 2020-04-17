#include <stdio.h>
#define ever  ;;
int main()
{
    long double exp,aumento;
    
    for(ever)
    {
        scanf("%Lf %Lf",&aumento,&exp);
        if(exp==0 && aumento==0)
        {
            break;
        }
        else
        {
            printf("%.0Lf\n",exp*aumento);
        }
    }
    return 0;
}
