#include <stdio.h>
int main()
{
    int s,sum=0;
    printf("Enter the marks of 5 subjects:");
    for(int i=1;i<6;i++)
    {
        scanf("%d",&s);
        sum=sum+s;
        
    }
    float per=sum/5.0;
    printf("sum=%d\npercentage=%f",sum,per);
return 0;
}