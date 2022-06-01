#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of tax payers\n");
    scanf("%d",&n);
    taxpayer(n);
}

void taxpayer(int n)
{
    int a[n],i,tax,count=0,count1=0,sum=0;
    float average;
    for(i=0;i<n;i++)
    {
        printf("enter the tax to be paid\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>250000)
        {
            count++;
        }
        else if(a[i]>=50000 && a[i]<=150000)
        {
            count1++;
        }
        sum=sum+a[i];
    }
    average=sum/n;
    printf("\ntax paid more than 25 lakhs %d\n",count);
    printf("\ntax paid between 50k and 1 lakh 50k %d\n",count1);
        printf("average tax collected is %f:\n",average);
}
