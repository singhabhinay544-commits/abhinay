//Write a Program to find if a character entered by user is upper case or not.
#include<stdio.h>
int main(){
    char ch;
    printf("enter your character:\n");
    scanf("%c", & ch);
    if ( ch>= 'a' && ch<='z'){
        printf("Your character is lower case:\n");
    }
    else{
        printf("Your character is upper case:\n");
    }
    printf("THANK YOU!");
    return 0;
}