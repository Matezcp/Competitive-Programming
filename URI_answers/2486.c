#include <stdio.h>
#include <string.h>

int main()
{
    int num_food,num_that_food,calories,i;
    char food[20];

    scanf("%d",&num_food);
    while(num_food != 0){
        calories = 0;
        for(i = 0;i<num_food;i++){
            scanf("%d %[^\r\n]",&num_that_food,food);

            if(strcmp(food,"suco de laranja") == 0){
                calories += num_that_food * 120;
            }
            else if(strcmp(food,"morango fresco") == 0 || strcmp(food,"mamao") == 0){
                calories += num_that_food * 85;
            }
            else if(strcmp(food,"goiaba vermelha") == 0){
                calories += num_that_food * 70;
            }
            else if(strcmp(food,"manga") == 0){
                calories += num_that_food * 56;
            }
            else if(strcmp(food,"laranja") == 0){
                calories += num_that_food * 50;
            }
            else {
                calories += num_that_food * 34;
            }
        }

        if(calories <= 130 && calories >= 110){
            printf("%d mg\n",calories);
        }
        else if(calories > 130){
            printf("Menos %d mg\n",calories - 130);
        }
        else if(calories < 110){
            printf("Mais %d mg\n",110 - calories);
        }
        scanf("%d",&num_food);
    }   

    return 0;
}
