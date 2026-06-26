//write a program to give grades to a student marks < 30 is c, 30<= marks <70 is B,70<= marks <90 is A,
//90<= marks <=100 is A+
#include<stdio.h>
int main(){
    int m;
    printf("enter your marks(0-100):\n");
    scanf("%d",& m);
    if(90<=m && m<= 100){
        printf("Congratulation Your grade is A+!\n");
    }
    else if(70<=m && m<90){
        printf("GOOD Your grade is A!\n");
    }
    else if(30<=m && m<70){
        printf("Need improvement Your grade is B!\n");
    }
    else if(m<30 && m>0){
        printf("Your grade is C!\n");
    }
    else{
        printf("Your entry is worng");
    }
    printf("THANK YOU1");
    return 0;
}