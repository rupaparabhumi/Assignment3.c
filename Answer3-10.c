#include <stdio.h>
int main()
{
    int number,firstDigit, lastDigit,sum;

    printf("Enter number:");
    scanf("%d", &number);

    lastDigit = number % 10;
    firstDigit = number;

    while(number >=10)
    {
        number = number/10;
    }

      firstDigit = number;

      sum = firstDigit + lastDigit;

      printf(" The sum of first and last digit:%d\n",sum);

    return 0;

}
