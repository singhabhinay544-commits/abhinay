#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", & age);
    if(age >= 18 ){
    printf("Congratulation your adult: \n") ; 
    }
    else if(age >= 13 && age < 18 ) {
        printf("hey buddy you are teenager: \n");
    }
    else {
        printf("you are child: \n");
    }
    printf("thank you buddy");
    return 0;
}
 