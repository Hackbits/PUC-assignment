//To print the sum of all even natural numbers.//
#include<stdio.h>

int main() {
    int n,a=2,sum=0;
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