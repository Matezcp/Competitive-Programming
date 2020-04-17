#include <stdio.h>

int main(int argc,char *argv[]){
    
    int money,gived,need_to_give;
    int i,flag = 1;

    while(1){
        scanf("%d %d",&money,&gived);

        if(money == 0 && gived == 0)
            break;

        need_to_give = gived - money;
        flag = 1;

        for(i=0;i<2;i++){
            if(need_to_give >= 100)
                need_to_give -= 100;
            else if(need_to_give >= 50)
                need_to_give -= 50;
            else if(need_to_give >= 20)
                need_to_give -= 20;
            else if(need_to_give >= 10)
                need_to_give -= 10;
            else if(need_to_give >= 5)
                need_to_give -= 5;
            else if(need_to_give >= 2)
                need_to_give -= 2;
            if((need_to_give == 0) && (i == 0))
                flag = 0;
        }

        if(flag == 0)
            printf("impossible\n");
        else if(need_to_give == 0)
            printf("possible\n");
        else
            printf("impossible\n");

    }


	return 0;
}