//To print the first and last digit of a given number.//
#include<stdio.h>

int main() {
    int a,firstDigit,lastDigit;
    printf("Enter a number:");
    scanf("%d",&a);
    lastDigit = a % 10;
    while (a>=10)
    {
       a = a/10; 
       
    }
    firstDigit = a;
    printf("the last digit is %d\n",lastDigit);
    printf("the first digit is %d",firstDigit);
     return 0;

}