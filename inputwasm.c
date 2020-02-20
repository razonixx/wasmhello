#include<stdio.h>
#include<stdlib.h>

int main()
{
    char* name = calloc(30, sizeof(char));
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}