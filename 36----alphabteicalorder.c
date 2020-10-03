#include<stdio.h>
#include<string.h>
main()
{
    int i,p,j,n;
    printf("enter no. of string");
    scanf("%d",&n);
    char s[n][100],temp[100];
    for(p=0;p<n;p++)
    scanf("%s",s[p]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);

            }
        }
    }

    printf("order\n");
    for(int k=0;k<n;k++)
        puts(s[k]);
}
