#include <stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    printf("Deal has profit of %f",(sp-cp));
    else 
    printf("Deal has loss of %f",(cp-sp));
}