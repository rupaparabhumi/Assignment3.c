#include<stdio.h>
 int main()
{
int num,sum,m;

printf("Enter a number:");
scanf("%d",&num);

while(num!=0)
{
m=num%10;
sum +=m;
num/=10;
}

printf("Sum is=%d",sum);
return 0;
}
