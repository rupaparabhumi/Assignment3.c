#include <stdio.h>

int main() {

  int n1,n2,n;

  printf("Enter number:");
  scanf("%d",&n);

  while(n!=0)
  {
      n2 = n % 10;
      n1 = n1 * 10 +n2;
      n/=10;
  }
  printf("Reversed number = %d",n1);
}
