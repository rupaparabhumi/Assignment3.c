#include <stdio.h>
int main()
{
    char str[50];
    int i, vowels =0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

   for(i = 0; str[i] != '\0'; i++)
   {
        if((str[i]>='a' && str[i]<='z')|| (str[i]>='A'&& str[i]<='Z'))
       {
           if((str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i]=='u'||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] == 'O' ||str[i]=='U'))
     {
        vowels++;
   }
   else
   {
       consonants++;
   }

    }

   }

    printf("vowel : %d\n", vowels);
    printf("consonant: %d\n", consonants);

    return 0;
}
