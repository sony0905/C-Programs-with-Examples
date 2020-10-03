#include<stdio.h>
main()
{
    int n,*p,sum=0;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter elements\n");
     for(int i=0;i<n;i++)
            scanf("%d",p+i);
        for(int j=0;j<n;j++)
        sum=sum+*(p+j);
        printf("sum=%d",sum);
        free(p);
}
