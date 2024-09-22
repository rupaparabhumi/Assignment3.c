#include <stdio.h>

void main()
{
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping (with third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

// without using 3rd variable

    printf("\n---without variable---");
    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping (without third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}



    

  
