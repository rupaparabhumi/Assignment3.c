#include <stdio.h>

int main() {
    int a[5],r;

    for(r=0;r<5;r++)
    {
        printf("enter name:");
        scanf("%s",&a[r]);

    }
    for(r=0;r<5;r++)
    {
        printf("%s\n",a[r]);
    }
    return 0;
}
