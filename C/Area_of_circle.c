#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius of the Circle:");
    scanf("%f",&r);
    float c=3.14*2*r;
    float a=3.14*r*r;
    printf("the Circumference of the circle is:%f",c);
    printf("\nThe area of Circle is\r:%f",a);
}