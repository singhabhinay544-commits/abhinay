//if a number is greater than 9 & less than 100 > print true
#include<stdio.h>
int main(){
    int n;
    printf("Enter your for testing:\n");
    scanf("%d", & n );
    printf("%d" , 9<n && n<100);
    return 0;
}