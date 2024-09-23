#include <stdio.h>

int main()
{

 char names[5][50];

 for (int i=0; i<5;i++)
 {
     printf("Enter name %d:",i+1);
     scanf("%s",names[i]);
     printf("%s\n", names[i]);
 }
  return 0;
}
