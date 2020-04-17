#include <stdio.h>

int main(int argc,char *argv[]){
    
    int number_of_cases,number_of_person;
    int i;

    scanf("%d",&number_of_cases);

    while(number_of_cases != 0){
        for(i=0;i<number_of_cases;i++){
            scanf("%d",&number_of_person);

            if(number_of_person % 2 != 0)
                printf("%d\n",((number_of_person-1)*2)+1);
            else
                printf("%d\n",((number_of_person-2)*2)+2);
        }

        scanf("%d",&number_of_cases);
    }
   


	return 0;
}