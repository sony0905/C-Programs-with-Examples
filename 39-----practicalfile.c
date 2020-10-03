#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int m1,m2,m3;

};
int main()
{
    int i,p;
    struct student s[3];
    printf("enter the information of students\n");
    for(i=0;i<3;i++)
    {
    scanf("%s%d%d%d%d",&s[i].name,&s[i].roll,&s[i].m1,&s[i].m2,&s[i].m3);
    }
    printf("name\troll number\tmarks in 3 subjects\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t\t%d\t%d\t%d\n",s[i].name,s[i].roll,s[i].m1,s[i].m2,s[i].m3);

    }
    return 0;
}
