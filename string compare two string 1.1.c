#include<stdio.h>
#include<string.h>
main()
{
    int i,flag;
    char s1[30],s2[30];
    printf("enter string 1");
    gets(s1);
    printf("enter string 2");
    gets(s2);
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
            flag=1;
        break;
    }
    if(flag==0)
        printf("same");
    else
        printf("not same");
}
