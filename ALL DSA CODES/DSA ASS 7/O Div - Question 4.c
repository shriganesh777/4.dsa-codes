/*Lucky draw bot randomly picks the winners. It posts an announcement message listing all the winners in the channel immediately after the activity is closed. Everyone in the channel can see all the people joined the draw. Tryle team is conducting lucky draw contest, N number of users registered to the contest and all users will be provided with unique user id. Tryle team makes use of Stack to store all the N user id’s. It’s very difficult for the team to select the lucky winners among N users. So the team come-up with a solution to select the lucky winners.

Solution :

Every time the Team pick the Top most user id, if it is completely divisible by the Magic Number K then that user is announced as a Winner and output will be W, if not output will be L. Team removes the user id that was picked from the stack. This process repeates until all the user id's are exhausted.

Input Format

First line indicates the Number of users joined the contest N and Magic Number K separated by space.

Second line indicates N unique user id’s separated by space.

Constraints

1 <= N <= 100

Output Format

First line indicates the Status of the N users (W – Winner and L - Loser) separated by space.

Second line indicates Count of all the Lucky winners.

Third line indicates Count of all the Losers.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K;
    scanf("%d %d",&N,&K);

    int arr[100];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    int w=0,l=0;

    for(int j=N-1;j>=0;j--)
    {
        if(arr[j] % K==0)
        {
            printf("W ");
            w++;
        }
        else{
            printf("L ");
            l++;
        }
    }
    printf("\n");
    printf("%d\n",w);
    printf("%d\n",l);
    return 0;

}

