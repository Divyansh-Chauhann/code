#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    b=(a%2==0)?1:0;
    if(b==1)
    printf("Number is even");
    else
    printf("Number is odd");

}