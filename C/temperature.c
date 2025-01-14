#include<stdio.h>
int main()
{
    float tc, tf;
    printf("\n\n\n\nEnter the temperature in farenhiet:");
    scanf("%f",&tf);
    tc=(tf-32)*(5.0/9);
    printf("the temperature in celcius:%f",tc);
return 0;

}