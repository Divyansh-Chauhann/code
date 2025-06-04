#include <math.h>
#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    double max;
    for(int i=0;i<n;i++)
    {
       scanf("%d%d",&a[i],&b[i]);    
    }
   /* for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dis=sqrt(pow((b[j]-b[i]),2)+pow((a[j]-a[i]),2));
            if(max<dis)
            max=dis;
        } 
    }*/
   int maxa=INT_MIN;
   int mina=INT_MAX;
   int maxb=INT_MIN;
   int minb=INT_MAX;
   int k=0,l=2;
   int c[4];
   int d[4];
       for(int i=0;i<n;i++)
    {
        if(a[i]>maxa)
        {
            maxa=a[i];
            c[0]=maxa;
            
            
        }
        if(b[i]>maxb)
        {
            maxb=b[i];
            d[2]=maxb;
            
        }
        if(a[i]<mina)
        {
            mina=a[i];
            c[1]=mina;
            
        }
        if(b[i]<minb)
        {
            minb=b[i];
            d[3]=minb;
            
        }
    }
    c[2]=0;c[3]=0;
    d[0]=0;d[1]=0;
   double dis;
   for(int j=0;j<4;j++)
   {
    for(int x=j+1;x<4;x++)
    {
    dis=sqrt(pow((c[x]-c[j]),2)+pow((d[x]-d[j]),2));
            if(max<dis)
            max=dis;
       }   
   }
   
    printf("%lf",max);
    return 0;
}