//write a program to check if a stduent passed or failed
//marks > 30 is PASSED
//marks<30 is FAILED
#include<stdio.h>
int main(){
    int n;
    printf("Enter your no. buddy:\n");
    scanf("%d", & n);
    if(n>0 && n >=30 && n <=100 ){
    printf("congratulation buddy your pass\n GOOD LUCK!");
    }
    else if ( n<0 || n>100){
        printf("wrong entry bro");
    }
    else{
        printf("your fail\n Better luck nxt time");
    }
    return 0;
} 

