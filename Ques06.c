//To find the sum of all the natural number.//
#include<stdio.h>

int main() {
    int n,a=1,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (a<=n)
    {
        sum = sum+a;
        a++;
    }
    printf("%d\n",sum);
     return 0;

}