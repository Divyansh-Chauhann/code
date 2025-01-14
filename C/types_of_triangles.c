#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of triangles:");
    scanf("%d%d%d",&a,&b,&c);
    int a2=a*a,b2=b*b,c2=c*c;
    if(a==b&&b==c)
    printf("The triangle is equilateral");
    else if(a2==b2+c2||b2==c2+a2||c2==a2+b2)
    printf("The triangle is Right angled");
    else if(a==b||b==c||c==a)
    printf("The triangle is Isosceles");
    else
    printf("The triangle is Scalene");
}
