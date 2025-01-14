#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a=1;
   int b=0;
    do
    {
         
    printf("\t\t\t\t\t\tCALCULATOR\n");
    printf("PRESS 1:For Addition\nPRESS 2:For Substraction\nPRESS 3:For Multiplication\nPRESS 4:For Devision\nPRESS 0:To Exit\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    system("cls");
    
   
            switch(a)
            {
                    case 1:
                    {
                        printf("\t\t\t\t\t\tADDITION\n");
                        float a1,b1;
                        printf("Enter the numbers to be added:");
                        scanf("%f%f",&a1,&b1);
                        float sum=a1+b1;
                        printf("Sum:%.2f",sum);
                       printf("\npress any key to go to main menu\n");
                       scanf("%d",&b);
                        break;

                    }
                    case 2:
                    {
                        printf("\t\t\t\t\t\tSUBSTRACTION\n");
                        float a2,b2;
                        printf("Enter the numbers to be subtracted:");
                        scanf("%f%f",&a2,&b2);
                        float diff=a2-b2;
                        printf("Difference:%.2f",diff);
                       printf("\npress any key to go to main menu\n");
                       scanf("%d",&b);
                        break;
                    }
                    case 3:
                    {
                        printf("\t\t\t\t\t\tMULTIPLICATION\n");
                        float a3,b3;
                        printf("Enter the numbers to be multiplied:");
                        scanf("%f%f",&a3,&b3);
                        float pro=a3*b3;
                        printf("Product:%.2f",pro);
                        printf("\npress any key to go to main menu\n");
                        scanf("%d",&b);
                        break;
                    }
                    case 4:
                    {
                        printf("\t\t\t\t\t\tDEVISION\n");
                        float a4,b4;
                        printf("Enter the numbers to be Devided:");
                        scanf("%f%f",&a4,&b4);
                        float div=a4/b4;
                        printf("Result:%.2f",div);
                        printf("\npress any key to go to main menu\n");
                        scanf("%d",&b);
                        break;
                    }
                    case 0: break;
                    default:{
                        printf("Please Enter correct choice");
                        printf("\nPress any key to go to main menu:");
                        scanf("%d",&b);}
                }
              if(b>=0&&b<=9)
              system("cls");
              
 }
 while(a!=0);
{}
 printf("Thanks for Using");
return 0;

}