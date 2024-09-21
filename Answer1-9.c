#include <stdio.h>

int main (){

 float a,b,c,circumference;

 printf("Enter length of side a:");
 scanf("%f",&a);

 printf("Enter length of side b:");
 scanf("%f",&b);

 printf("Enter length of side c:");
 scanf("%f",&c);

 circumference = a+b+c;
 printf("\ncircumference of Triangle is %f",circumference);

 return 0;
}


