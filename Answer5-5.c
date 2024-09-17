#include <stdio.h>
int main() {

    char str1[100], str2[100];
    int i;


    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);


    for(i=0; str1[i] == str2[i] && str1[i]=='\0';i++);


    if(str1[i]< str2[i])
    {
         printf("The string1 are equal.\n");

    }

    else if(str1[i]> str2[i])
    {
        printf("The string2 are not equal.\n");
    }

   return 0;
}
