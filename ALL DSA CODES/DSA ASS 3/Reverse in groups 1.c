/*Reverse in Groups (100 Marks) You will be provided with N Numbers and an Integer K. You have to create a doubly linked list and then insert the given numbers into it. After Insertion, You have to reverse the newly formed Doubly Linked List in the Groups of Size 'K'. N will always be an Integral Multiple of K. Explanation First Group = (10, 20) -> (20, 10)

Second Group = (30, 40) -> (40, 30) Third Group = (50, 60) -> (60, 50)

Input Format

Input Format The First line will contain two Integers N and K. The Next line will contain N Integers separated by whitespaces.

Constraints

Constraints Print the Final content of the Doubly Linked List separated by space after performing above opertaion.

Output Format

Output Format 1 <= N <= 10^3 1 <= K <= 10^3 N % K == 0*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*NODE;

NODE getNode(int d)
{
    NODE n = (NODE)malloc(sizeof(struct node));
    if(n==NULL)
        exit(0);
    n->data = d;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

NODE insert_end(NODE head, int d)
{
    NODE temp = getNode(d);
    if(head==NULL)
        return temp;
    NODE cur = head;
    while(cur->next!=NULL)
        cur = cur->next;
    cur->next = temp;
    temp->prev = cur;
    return head;
}

NODE reverse_in_groups(NODE head, int k)
{
    if(head==NULL)
        return head;
    int c = 0;
    NODE cur = head, nxt = NULL, p = NULL;
    while(cur!=NULL && c<k)
    {
        nxt  = cur->next;
        cur->next = p;
        p = cur;
        cur = nxt;
        c++;
    }
    if (nxt !=  NULL)
       head->next = reverse_in_groups(nxt, k);
    return p;
}

void display(NODE head)
{
    if(head==NULL)
        printf("Linked list is empty.\n");
    else
    {
        NODE cur = head;
        while(cur!=NULL)
        {
            printf("%d ", cur->data);
            cur = cur->next;
        }
    }
}



int main()
{
    NODE head = NULL;
    int n, k, d;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &d);
        head = insert_end(head, d);
    }
    head = reverse_in_groups(head, k);
    display(head);
    return 0;
}
