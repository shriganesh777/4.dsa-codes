/*You are given a stack of N integers. You need to replace first element by last element and vice versa and continue the same for rest of the elements of stack. One thing you need to follow is, you should reverse the integer and then replace it. And also pop the integers after replacing.

Input Format

First line indicates the number of elements in stack. N.

Second line indicates N number of elements of stack.

Third line indicates number of elements to be popped from the stack.

Constraints

Use only integers.

Output Format

Single line indicating final status of the stack after performing all the operations.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,arr[100];
    scanf("%d ",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }

    int p;
    scanf("%d ",&p);

    for(int j=p;j<N;j++)
    {
        int rem,reverse=0;
        while(arr[j]!=0)
        {
            rem = arr[j]%10;
            reverse = reverse *10 +rem;
            arr[j] = arr[j]/10;
        }
        printf("%d ",reverse);
    }
    return 0;
}

