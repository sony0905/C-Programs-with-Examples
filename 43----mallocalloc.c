#include<stdio.h>
main()
{
    int n,*p,sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
        printf("memory not allocated");
    else
    {
        printf("enter array elemets\n");
        for(int i=0;i<n;i++)
            scanf("%d",p+i);
        for(int j=0;j<n;j++)
        sum=sum+*(p+j);
        printf("%d",sum);
        free(p);
    }

}
