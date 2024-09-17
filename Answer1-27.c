#include <stdio.h>

int main()
{
    int days, month;

    days = 365;

    month = days*365;
    month = days/30;

   printf("month: %d\n", month);
    printf("days: %d\n",days);

    //print day into year
    printf("\nday: %d\n",days);
    printf("month: %d\n",month);


    return 0;
}
