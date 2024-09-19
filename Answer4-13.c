#include <stdio.h>
void main()
{
    int number[5];


    printf("Enter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }

    //Print all the even numbers
    printf("Even numbers:");
    for(int i=0;i<5;i++)
    {
        if(number[i]%2 ==0)
        {
            printf("%d ", number[i]);
    }
    }

    printf("\nOdd number:\n ");
    for(int i=0;i<5;i++)
    {
        if(number[i]%2!=0)
        {
            printf("%d ", number[i]);
    }
}
printf("\n");

return 0;

}
