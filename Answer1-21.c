#include <stdio.h>
int main(){
    printf("Accept '2' numbers from user and swap 2 numbers with using '3'rd variable and without using 3rd variable");
    printf("\n");
    printf("without using 3rd variable");
    printf("\n");

    int a,b;
    printf("Enter a:");
    scanf("%d ",&a);

    printf("Enter b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping a=%d b=%d",a,b);

    int c,d,e;
    printf("\n");
    printf("with 3rd variable\n");

    printf("Enter c:");
    scanf("%d",&c);

   printf("Enter d:");
    scanf("%d",&d);

    e = c;
    c = d;
    d = e;

    printf("After swapping c =%d d=%d",c,d);
    }
