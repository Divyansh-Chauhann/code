import java.util.Scanner;
class abc
{
    public static void main(String[] args) {
        String a="I hate ";
        String b="I love ";
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of n:");
        int n=sc.nextInt();
        int j;
        for(int i=1;i<=n;i++)
        { 
         
          if(i%2==1)
         System.out.print(a);
         else 
         System.out.print(b);
         if(i!=n)
         System.out.print(" that ");
        }
        System.out.println(" it.");
}
}
