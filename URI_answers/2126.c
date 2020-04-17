#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    char num1[12],num2[34];
    int i,flag = 1;
    int char_num1_checking = 0,num_sub_strings = 0;
    int loop = 1,last_sub_string,possible_last_sub_string;

    while(scanf("%s",num1) != EOF){

        scanf("%s",num2);

        for(i=0;i<strlen(num2);i++){
            flag = 1;
            if(num2[i] == num1[char_num1_checking]){
                if(char_num1_checking == 0)
                    possible_last_sub_string = i+1;

                if(char_num1_checking == strlen(num1)-1){
                    last_sub_string = possible_last_sub_string;
                    num_sub_strings++;   
                }
                else{
                    char_num1_checking++;
                    flag = 0;
                }
            }
                
            if((num2[i] == num1[0]) && (strlen(num1)>1) && (flag == 1)){
                possible_last_sub_string = i+1;
                char_num1_checking = 1;
            }
            else if(flag == 1){
                char_num1_checking = 0;
                possible_last_sub_string = i+1;
            }
        }

         printf("Caso #%d:\n",loop);

        if(num_sub_strings == 0)
            printf("Nao existe subsequencia\n\n");
        else{
            printf("Qtd.Subsequencias: %d\n",num_sub_strings);
            printf("Pos: %d\n\n",last_sub_string);
        }
        loop++;
        num_sub_strings = 0;
        char_num1_checking = 0;
    }

    return 0;
}