// To find the sum of first and last digit of the given number.//
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
    printf("the sum of first and last digit is %d",firstDigit+lastDigit);
     return 0;

}