
#include<stdio.h>
int main()
{
 int n,sum,sum1=0,i,j;

 printf("Please enter an integer, n = ");
 scanf("%d", &n);

 for(i=1;i<=n;i++)
 {
     sum=0;

     for(j=1;j<=i;j++)
     {
         sum=sum+j;
     }
         sum1= sum1+sum;
 }
 printf("\nThe sum of series up to value [%d]\[%d]\n",n,sum1);
return 0;
}
