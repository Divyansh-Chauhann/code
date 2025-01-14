import java.lang.Math;
import java.util.Scanner;
public class menu_driven {
    public static void main(String agrs[])
    {   int n;
        do{
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1:To find area of circle\nEnter 2:To find area of rectangle\nEnter 3:To find area of triangle\nEnter 0:To exit");
        System.out.print("\nEnter the key:");
         n=sc.nextInt();
        if(n==1)
        {
            float r;
            System.out.print("Enter radius of the Circle:");
            r=sc.nextFloat();
            float c=(float) (3.14*2*r);
            float a=(float) (3.14*r*r);
            System.out.println("the Circumference of the circle is:"+c);
            System.out.println("The area of Circle is:"+a); 
        }
        else if(n==2)
        {
                    float l,b1;
            System.out.print("Enter length and bredth of the rectangle:");
            l=sc.nextFloat();
            b1=sc.nextFloat();
            float p=2*(l+b1);
            float a1=l*b1;
            System.out.println("the perimeter of the rectangle is:"+p);
            System.out.println("\nThe area of rectangle is:"+a1);
        }
        else if (n==3)
        {
            int a2,b2,c2;
            System.out.print("Enter three sides of triangle:");
            a2=sc.nextInt();
            b2=sc.nextInt();
            c2=sc.nextInt();
            float s=(float) ((a2+b2+c2)/2.0);
            float ar=(float) Math.sqrt(s*(s-a2)+(s-b2)*(s-c2));
            System.out.println("The area of triangle is:"+ar);
        }
        else if(n==0)
        {
            System.out.println("End of program");
        }
        else 
        System.out.println("Wrong key");
    }
    while(n!=0);
    {}
    }
    
}
