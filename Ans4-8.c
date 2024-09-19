#include <stdio.h>

int main()
{
  char str[100],rev[100];
  int i,j,len,ispalindrome = 1;

  printf("Enter a string:");
  scanf("%s",str);

  len = strlen(str);

  for(i=0,j=len-1;i<len;i++,j--)
  {
    rev[i]=str[j];
  }
  rev[len] = '\0';


  for(i=0;i<len;i++)
  {
   if(str[i] != rev[i])
   {
     ispalindrome=0;
     break;
   }
}

if(ispalindrome)
{
  printf("%s is a palindrome.\n",str);
}
else
{
  printf("%s is not a palindrome.\n",str);
}

return 0;
}
