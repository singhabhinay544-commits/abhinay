//write a program to identify adult or not:
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", & age);
    if(age >= 18 ){
    printf("Congratulation your adult: \n") ; 
    }
    else{
        printf("ooo your not adult: \n");
    }
    printf("Thank you");
    return 0;
}