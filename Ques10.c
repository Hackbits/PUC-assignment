//To count the number of digits in a given number.//
#include<stdio.h>

int main() {
    int a, count = 0;
    printf("Enter a number:");
    scanf("%d",&a);
    while (a!=0)
    {
        count++;
        a/=10;
       
    }
    printf("Total number of digits is %d\n",count);

     return 0;

}