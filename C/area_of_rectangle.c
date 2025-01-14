#include <stdio.h>
int main()
{
    float l,b;
    printf("Enter length and bredth of the rectangle:");
    scanf("%f %f",&l,&b);
    float p=2*(l+b);
    float a=l*b;
    printf("the perimeter of the rectangle is:%f",p);
    printf("\nThe area of rectangle is:%f",a);
return 0;
}