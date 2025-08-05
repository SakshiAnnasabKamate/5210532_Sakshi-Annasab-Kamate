
#include<stdio.h>
int main(){
    int Weekday;
    do{
        printf("Enter the days between 1 to 7:");
        scanf("%d",&Weekday);

        switch(Weekday){
            case 1:printf("Monday\n");
                    break;
            case 2:printf("Tuesday\n");
                    break;
            case 3:printf("Wednesday\n");
                    break; 
            case 4:printf("Thursday\n");
                    break;
            case 5:printf("Friday\n");
                    break;
                    
            case 6:printf("Saturday\n");
                    break;

            case 7:printf("Sunday\n");
                    break;
            default :printf("Invalid Weekday number\n");
        }
    }while(Weekday < 1 || Weekday > 7);
    return 0;
}