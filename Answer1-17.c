#include <stdio.h>


int main()
{
   float salary,rate,premium;

	printf("Calculate person's insurance premium on salary\n");

	printf("Enter annual salary:");
	scanf("%f",&salary);

   printf("Enter your rate:");
    scanf("%f",&rate);

  premium =(salary*rate)/100;

    printf("\nInsurance premium: %.f\n",premium);
	return (0);
}
