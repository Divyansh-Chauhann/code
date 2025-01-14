#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the number to be swapped:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapped numbers are:%d  %d",a,b);
    return 0;
}