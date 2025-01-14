import java.util.Scanner;

class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        int a = sc.nextInt();
        int temp = a;
        int f, s=0;
        int count=0;
        while (temp > 0) {
            temp = temp/ 10;
            count++;

        }
        for (int i = 1; i <= count; i++) {
            f = a % 10;
            s += f;
            a = a / 10;
        }
        System.out.println("The sum of its digits is:"+s);
    }
}