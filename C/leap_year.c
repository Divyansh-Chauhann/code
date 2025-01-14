#include <stdio.h>
int main()
{
    int y;
    printf("Enter any year to be checked:");
    scanf("%d",&y);
    if(y<100)
    {
          if(y%4==0)
          printf("It is a leap year");
          else
          printf("It is not a leap year");
    }
    else 
    {

    }

}