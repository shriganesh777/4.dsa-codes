
#include<stdio.h>
void main()
{
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,temp=0;
    printf("Enter the Element of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ele;
    printf("\nEnter the search element:");
    scanf("%d",&ele);
    printf("\nArray elements are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    int index;
    for(i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            temp=1;
            index=i;
        }
    }
    if(temp==1)
        printf("\nIndex of Search Element %d is %d",ele,index);
    else
        printf("\nElement is not found....");
}
