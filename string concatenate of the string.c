#include<stdio.h>
#include<string.h>
main()
{
    char s1[30]="jenny";
    char s2[]="khatri";
    strcat(s1,s2);
    printf("string after concatenation is %s\n",s1);
    puts(s2);
}
