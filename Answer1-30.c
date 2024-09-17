#include <stdio.h>

int main()
{
    float days, years;

 printf("Enter your days:");
 scanf("%f",&days);

    // Converts days to years, years and days
    years = (float)days/365;
    days  = (float)years*365;

   printf("Years: %.2f\n", years);
    printf("days: %.2f\n",days);

    //print day into year
    printf("\nday: %.2f\n",days);
    printf("years: %.2f\n",years);


    return 0;
}
