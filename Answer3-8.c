#include <stdio.h>

int main()
{
    int n,n1,max;

    printf("Enter a number:");
    scanf("%d",&n);

    while (n!=0)
    {
        n1 = n%10;
        if(n1>max)
        {
            max=n1;
        }
        n/=10;
    }

    printf("the maximum digit is:%d",max);
}
