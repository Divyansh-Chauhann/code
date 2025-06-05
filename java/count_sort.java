import java.util.Scanner;
class count_sort
{
    void count(int arr[])
    {
        int max=0;
        int n=arr.length;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            max=arr[i];
        }
        int count[]=new int[max+1];
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        int j=0;
        for(int i=0;i<=max;i++)
        {
            while(count[i]>0)
            {
                arr[j]=i;
                j++;
                count[i]--;
            }
        }
         for(int i=0;i<n;i++)
        {
            System.err.print(arr[i]+"\t");
        }
    }

    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
         System.out.print("Enter the size of array:");
         int n=sc.nextInt();
         int arr[]=new int[n];
         System.out.println("Enter the elements of arrays:");
        for(int i=0;i<n;i++)
        {
         arr[i]=sc.nextInt();
        }
        count_sort ob=new count_sort();
        ob.count(arr) ;
    }
}