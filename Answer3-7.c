#include <stdio.h>

int main() {

  int number,reverse=0;

  printf("Enter number:");
  scanf("%d",&number);

  while(number !=0)
  {
      number = number % 10;
      reverse = reverse * 10 + number;
      number/=10;
  }
  printf("Reversed number = %d\n",reverse);
}
