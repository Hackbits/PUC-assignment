//To print multiplication table of given number.//
#include<stdio.h>

int main() {
    int a,i=1;
    printf("Emter a number:");
    scanf("%d",&a);
    for ( ; i <= 10; i++)
    {
       printf("%d*%d = %d\n",a,i,a*i); 
    }
    
     return 0;

}