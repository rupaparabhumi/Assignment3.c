#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter your number:");
    scanf("%d",&num1);

    printf("Enter your number:");
    scanf("%d",&num2);

    printf("Enter your number:");
    scanf("%d",&num3);

   if(num1 > num2 && num1>num3)
   {
       printf("num1 %d is max",num1);
   }
   else if(num2 > num1 && num2 > num3)
   {
       printf("num2 %d is max",num2);
   }
   else
   {
      printf("num3 %d is max",num3);
   }

   return 0;
}
