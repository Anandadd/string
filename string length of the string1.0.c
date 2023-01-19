#include<stdio.h>
#include<string.h>
main()
{
    char name[30];
    int count=0;
    printf("enter name\n");
    gets(name);
    count=strlen(name);
    printf("length of the string %d",count);
}
