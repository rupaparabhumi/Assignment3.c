#include <stdio.h>

int main() {
    char str[50],n_str[50];
    int i, j =0;

   printf("Input the string : ");
   scanf("%s",&str);

    for (i = 0; str[i] != '\0'; i++)
        {
         if(isalpha(str[i]))
         {
             n_str[j] = str[i];
             j++;
         }
        }
        n_str[j]='\0';

    printf("After removing the Output String : %s\n", n_str);

	return 0;
}
