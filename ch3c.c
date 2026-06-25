#include<stdio.h>
int main(){
    int day;
    printf("Enter day(1-7):\n");
    scanf("%d" , & day);
    switch (day)
    {
    case 1:
        printf("MONDAY:\n");
        break;
    case 2: printf("TUESDAY:\n");
        break;
    case 3: printf("WEDNESDAY:\n");
        break;
    case 4: printf("THURSDAY:\n");
        break;
    case 5 : printf("FRIDAY:\n");
        break;
    case 6: printf("satruday:\n");
        break;
    case 7 : printf("SUNDAY:\n");
        break;
    default:
       printf("oo ooo worng entery:\n");
    }
    printf("THANK YOU!");
    return 0;
}