#include <stdio.h>

int main()
{
    float basic_salary, gross,da,hra;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic_salary);


    //Calculate D.A and H.R.A according to specified conditions
    if(basic_salary <= 10000)
    {
        da  = basic_salary * 0.8;
        hra = basic_salary * 0.2;
    }
    else if(basic_salary <= 20000)
    {
        da  = basic_salary * 0.9;
        hra = basic_salary * 0.25;
    }
    else
    {
        da  = basic_salary * 0.95;
        hra = basic_salary * 0.3;
    }

    //Calculate gross salary
    gross = basic_salary + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
