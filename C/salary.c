#include <stdio.h>
int main()
{
    float bs,da,hra,gs=0;
    printf("Enter the salary:");
    scanf("%f",&bs);
    if(bs<1500.0)
    {
        hra=0.1*bs;
        da=0.9*bs;
    }
    else
    {
        hra=500;
        da=0.98*bs;
    }
    gs=bs+hra+da;
    printf("\ngross salary is:%f",gs);
    return 0;
}
