#include <stdio.h>
int main()
{
    int num,sum, firstDigit, lastDigit;

    printf("Enter number:");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num;

    while(firstDigit >=10)
    {
        firstDigit /=10;
    }

      sum = firstDigit + lastDigit;

      printf("sum of first and last digit:%d\n",sum);

}
