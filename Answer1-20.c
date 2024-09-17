#include <stdio.h>

int main(){
float loan;
float insurance;
float salary;
float rs;

printf("Enter the salary:");
scanf("%f",&salary);

insurance = 0.1*salary;
loan = 0.1*salary;
rs = salary-insurance-loan;

printf("insurance:%f\n",insurance);
printf("loan:%f\n",loan);
printf("rs:%f\n",rs);

return 0;
}


