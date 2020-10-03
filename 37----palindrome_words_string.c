#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],s1[50],s2[50];
    int i,c=0,p=0;
    printf("enter any string ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '||s[i+1]=='\0')
        {
            if(s[i+1]=='\0')
                s1[p]=s[i];

            strcpy(s2,s1);
            strrev(s2);
            if(strcmp(s1,s2)==0)
                c=c+1;
                s1[50]="";
                p=0;
                s2[50]="";
        }
        else
            {
                s1[p]=s[i];
                 p++;
            }
    }
    printf("%d",c);
}

