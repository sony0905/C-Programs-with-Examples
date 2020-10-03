#include<stdio.h>
main()
{
    int n,*p,n1,s=0;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter elements\n");
     for(int i=0;i<n;i++)
            scanf("%d",p+i);
            printf("enter n1\n");
            scanf("%d",&n1);
            p=realloc(p,n1*sizeof(int));
            printf("enter further elements\n");
            for(int k=0;k<n1;k++)
                scanf("%d",p+n+k);
                printf("displaying all elements\n");
            for(int x=0;x<n1+n;x++)
            {
                s=s+*(p+x);
                printf("%d\n",*(p+x));
            }
            printf("sum is %d",s);
            free(p);
}
