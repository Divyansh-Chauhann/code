import java.util.Scanner;
public class table {
    void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number:");
        int a=sc.nextInt();
        int p;
        for(int i=1;i<11;i++)
        {
            p=a*i;
            System.out.println(a+" X "+i+" = "+p);
        }
    }
    
}
