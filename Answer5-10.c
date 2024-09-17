#include <stdio.h>

int main() {

    char str[100],substr[100];
    int positive,length,counter;

    printf("enter your string:");
    scanf("%s",positive,length,counter);

    printf("enter the positive substring:");
    scanf("%d",&start);
    printf("enter the length substring:");
    scanf("%d",&end);

    if(start < 0 || end >= strlen(str) || start > end)
    {
        printf("invalid indices.\n");
        return 1;
    }

    int j = 0;
    for(int i= start; i<= end;i++)
    {
        substr[j++]=str[i];
    }
    substr[j] = '\0';

    printf("\nSubstring: %s\n",substr);

    return 0;
}

