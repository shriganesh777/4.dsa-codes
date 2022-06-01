#include<stdio.h>
void bonus_1(int,int);
void main()
{
    int n,salary;
    printf("number of employees\n");
    scanf("%d",&n);
    bonus_1(n,salary);
}

void bonus_1(int n,int salary)
{
    int bonus,totalsalary;
    int exp;
    for(int i=1;i<=n;i++)
    {
        printf("\nenter the experience\n");
        scanf("%d",&exp);
        printf("\nenter the basic salary\n");
        scanf("%d",&salary);
        if(exp>=5 && exp<=7)
        {
            bonus=0.1*salary;
            totalsalary=bonus+salary;
            printf("salary of %d employe is %d",i,totalsalary);
        }
        else if(exp>=8&&exp<=10)
        {
            bonus=0.2*salary;
            totalsalary=bonus+salary;
            printf("salary of %d employe is %d",i,totalsalary);
        }
        else if(exp>10)
        {
            bonus=0.3*salary;
            totalsalary=bonus+salary;
            printf("salary of %d employe is %d",i,totalsalary);
        }
        else
        {
            printf("input is not in the range");
        }
    }
}
