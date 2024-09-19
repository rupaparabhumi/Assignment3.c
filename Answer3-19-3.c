#include <stdio.h>

int main()
{
    int rows = 5,k,i,j;

    // first loop to print all rows
    for ( i = 0; i <=5; i++)
    {
      for (j = 0; j <=k;++j)
      {
          printf(" ");
        }
        k--;

        for (j = 0; j <= 2 * i -1; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
