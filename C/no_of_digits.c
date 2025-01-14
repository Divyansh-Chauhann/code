#include<stdio.h>
int main()
{
  long int n;
  printf("Enter the number:");
  scanf("%d",&n);
  long int sum=0;
  int digit;
  while(n>0)
  {
    digit=n%10;
    sum=sum*10+digit;
    n=n/10;
    
  }
  printf("reverse of digits:%d",sum);
return 0;
}