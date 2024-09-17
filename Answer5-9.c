#include <stdio.h>

int main(){
    char str[100],result;
    int i,max_len=0,current_len=0;

    printf("\n please Enter and string:");
    gets(str);

for(i=0; str[i] != '\0';i++)
    {
      if(str[i] != ' ')
      {
          current_len++;
      }
    else
    {
      if(current_len > max_len)
      {
          max_len = current_len;
      }

         current_len = 0;
     }
    }

      if(current_len>max_len)
      {
         max_len=current_len;
     }

    printf("The Maximum character in a given string= %d\n",max_len);

   return (0);

}
