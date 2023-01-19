#include<stdio.h>
#include<string.h>
main()
{
    char name[30];
    printf("enter name\n");
    scanf("%s",name);
    printf("%s",&name[2]);
}
