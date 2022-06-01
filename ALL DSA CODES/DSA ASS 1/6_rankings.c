#include<stdio.h>
void student(int n);
void main()
{
    int n;
    printf("number of students are\n");
    scanf("%d",&n);
    student(n);
}

void student(int n)
{
    int a[n],rank,i,j,temp=0;
    for(i=0;i<n;i++)
    {
        printf("\n enter the rank of %d student\n",i);
        scanf("%d",&a[i]);
    }
     for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}
printf("Printing the ranks in ascending order:\n");
  for (i = 0; i < n; i++){
     printf("%d\n", a[i]);}
printf("\nhighest rank is %d\n",a[n-1]);
    printf("\nlowest rank is %d\n",a[0]);
}
