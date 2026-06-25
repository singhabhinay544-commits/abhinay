#include<stdio.h>
#include<math.h>
int main(){
    printf("enter your numerator number:\n");
    int n;
    scanf("%d", & n);
    printf("enter your denominator number:\n");
    int k;
    scanf("%d", & k);
    printf("remainder of your number : %d\n", n % k ); //here % use for finding remainder in our program

    return 0;
}