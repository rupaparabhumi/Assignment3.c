#include <stdio.h>
int main() {

  char name[50];

  printf("Enter The School name:");
  scanf("%s %s %s",&name,&name,&name);

  printf("Abbreviated Name:");
  printf("%c.%c.%s\n",name[0],name[0],name);

  return 0;

}

