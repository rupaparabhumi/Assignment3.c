#include <stdio.h>

int main () {

float radius,area,circumference;

printf("Enter the Radius of the Circle:");
scanf("%f",&radius);

area=3.14*radius*radius;
circumference= 2*3.14*radius;

printf("\nThe Area of the Circle:%.2f\n",area);
printf("\ncircumference of Circle:%.2f\n",circumference);


return(0);

}








