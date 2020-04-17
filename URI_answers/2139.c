#include <stdio.h>

#define january 31
#define february 29
#define march 31
#define april 30
#define may 31
#define june 30
#define july 31
#define august 31
#define september 30
#define october 31
#define november 30

int main(int argc,char *argv[]){
    
   int month,day,actual_day;

   while(scanf("%d",&month) != EOF){
       scanf("%d",&day);

        if(month == 1){
            actual_day = day;
        }
        else if(month == 2){
            actual_day = day + january;
        }
        else if(month == 3){
            actual_day = day + january + february;
        }
        else if(month == 4){
            actual_day = day + january + february + march;
        }
        else if(month == 5){
            actual_day = day + january + february + march + april;
        }
        else if(month == 6){
            actual_day = day + january + february + march + april + may;
        }
        else if(month == 7){
            actual_day = day + january + february + march + april + may + june;
        }
        else if(month == 8){
            actual_day = day + january + february + march + april + may + june + july;
        }
        else if(month == 9){
            actual_day = day + january + february + march + april + may + june + july + august;
        }
        else if(month == 10){
            actual_day = day + january + february + march + april + may + june + july + august + september;
        }
        else if(month == 11){
            actual_day = day + january + february + march + april + may + june + july + august + september + october;
        }
        else{
            actual_day = day + january + february + march + april + may + june + july + august + september + october + november;
        }

        if(actual_day == 359){
            printf("E vespera de natal!\n");
        }
        else if(actual_day == 360){
            printf("E natal!\n");
        }
        else if(actual_day > 360){
            printf("Ja passou!\n");
        }
        else
            printf("Faltam %d dias para o natal!\n",360 - actual_day);
            

   }


	return 0;
}