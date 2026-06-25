//write a program to check if a number is divible by 2 or not 
#include<stdio.h>
#include<math.h>
int main(){
    int m;
    printf("enter your for testing: \n");
    scanf("%d" , & m);
    printf("%d", m % 2 == 0);
    return 0;
}