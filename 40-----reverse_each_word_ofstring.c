#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],s1[50],s3[200]="";
    int i;
    printf("enter any string ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {

            strrev(s1);
            puts(s1);
            s1[50]="\0";

         }
         else
         s1[i]=s[i];
    }
    printf("reverse words of sentence is ");
    puts(s1);
    return 0;
}
