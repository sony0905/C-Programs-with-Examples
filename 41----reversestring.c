#include<stdio.h>
main()
{
    char s[100],temp[100];
    int flag=0,i,j,p;
    printf("enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    i--;
    for(j=0;j<=i;j++)
    {
        temp[i-j]=s[j];
    }
    temp[i+1]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=temp[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("palindrome");
    else
        printf("not palindrome");

}
