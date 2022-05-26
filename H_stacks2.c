
/*
2) Bheem is having two boxes of cookies. He likes to share it with his best friends Chutki and Raju. He gives few cookies from first box to Chutki and few cookies from second box to Raju. As Bheem and Kalia are rivals, he doesn’t like to share cookies with Kalia. Therefore, Kalia decides to exchange the cookies from one box to another without worrying about the order of cookies. Bheem being not aware of this, can you help Kalia in exchanging the cookies?
Here cookies are integers.
Input Format
First line indicates n1, number of cookies present in box 1.
Second line indicates n2, number of cookies present in box 2.
Third line indicates n1 cookies present in box1.
Fourth line indicates n2 cookies present in box 2.
Fifth line indicates number of cookies to be given to Chutki.
Sixth line indicates number of cookies to be given to Raju.
Constraints
Use only integers.
Output Format
First line indicates the cookies present in box 1 after exchange.
Second line indicates the cookies present in box 2 after exchange.
Sample Input 0
5
5
1 2 3 4 5
9 8 7 6 1
2
1
Sample Output 0
9 8 7 6
1 2 3

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} *NODE;

NODE getNODE(int item)
{
    NODE n = (NODE)malloc(sizeof(struct stack));
    if(n==NULL)
    {
        printf("Node is not created.\n");
        exit(0);
    }
    n->data = item;
    n->next = NULL;
    return n;
}

NODE push(NODE top, int item)
{
    NODE temp = getNODE(item);
    if(top==NULL)
        return temp;
    NODE cur = top;
    while(cur->next != NULL)
        cur = cur->next;
    cur->next = temp;
    return top;
}

NODE pop(NODE top)
{
    if(top==NULL)
    {
        printf("Shelf is empty.\n");
    }
    else
    {
        NODE temp = top, prev = NULL;
        while(temp->next!=NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    return top;
}

void display_stack(NODE top)
{
    if(top==NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        NODE cur = top;
        while(cur != NULL)
        {
            printf("%d ", cur->data);
            cur = cur->next;
        }
        printf("\n");
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    NODE top1 = NULL;
    NODE top2 = NULL;
    int n1, n2, d;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &d);
        top1 = push(top1, d);
    }
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &d);
        top2 = push(top2, d);
    }
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i=0; i<n1; i++)
        top1 = pop(top1);
    for(int i=0; i<n2; i++)
        top2 = pop(top2);
    display_stack(top2);
    display_stack(top1);
    return 0;
    }
