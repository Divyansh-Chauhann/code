#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to be compared:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("Greatest number is:%d",a);
    else if(b>a&&b>c)
    printf("Greatest number is:%d",b);
    else if(c>a&&c>b)
    printf("Greatest number is:%d",c);
    else
    printf("Please enter different values");
}