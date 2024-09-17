#include <stdio.h>

int main()
{
    char str[50],word[]="is";
    int i,j,count=0,len = strlen(word);

    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] == word[0])
        {
            for(j=1;j<len && str[i + j]== word[j];j++)
            {
            }
            if(j == len)
            {
                count++;
                i += j-1;
            }
        }
      }

    printf("Frequency of the word 'is' %d\n", count);

    return 0;
}
