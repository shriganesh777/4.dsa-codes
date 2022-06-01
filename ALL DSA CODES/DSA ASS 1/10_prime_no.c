#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter the numbers\n");
        scanf("%d",&a[i]);
    }
    prime(a,n);
}

prime(int a[],int n)
{
    int i,m,j,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        m=a[i];
        for(j=1;j<=m;j++)
        {
            if(m%j==0)
            {
                flag++;
            }
        }
        if(flag==2)
        {
            printf("%d\n",a[i]);
        }
    }
}

