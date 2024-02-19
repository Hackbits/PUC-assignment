//To print the sum of all odd natural numbers.//
#include<stdio.h>

int main() {
    int n,a=1,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (a<=n)
    {
        sum = sum+a;
        a+=2;
    }
    printf("%d\n",sum);

     return 0;

} 