#include<stdio.h>

   int add(int a,int b)
   {
       return a+b;
   }
   int sub(int a,int b)
   {
       return a-b;
   }
   int mul(int a,int b)
   {
       return a*b;
   }
   int div(int a,int b)
   {
       return a/b;
   }
   int main()
   {
       int num1,num2,opation,result;
       printf("Enter first number:");
       scanf("%d",&num1);

       printf("Enter second number:");
       scanf("%d",&num2);

       printf("\n");

       printf("1.Addition\n");
       printf("2.subtraction\n");
       printf("3.multiplication\n");
       printf("4.division");

       printf("\n\nchoose any one:");
       scanf("%d",&opation);

    switch(opation)
    {
    case 1	:
        result=add(num1,num2);
        printf("Addition = %d",result);
        break;
    case 2	:
        result=sub(num1,num2);
        printf("subtraction = %d",result);
        break;
    case 3	:
        result=mul(num1,num2);
        printf("Multiplication = %d",result);
        break;
    case 4	:
        result = div(num1,num2);
        printf("Division =%d",result);
        break;
    default	:
        printf("invalid chlice");
        break;
    }
    return 0;
}
