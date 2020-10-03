#include<stdio.h>
int main()
{
    char s[100],s1[100],*p,*q;
    int i=0,j=0,flag=0;
    printf("enter two strings\t");
    gets(s);
    gets(s1);
    p=&s;
    q=&s1;
    for(;*p!='\0';p++)
        i++;
    for(;*q!='\0';q++)
        j++;
    p=&s[0];
    q=&s1[0];
    if(i==j)
    {
    for(;*p!='\0';p++,q++)
    {
        if(*p!=*q)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("identical");
    else
        printf("not identical");
}
else
    printf("length of strings is not same ");
}
