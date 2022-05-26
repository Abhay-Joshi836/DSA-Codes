

/*
1) You are given a stack of N integers. In one operation, you can either pop an element from the stack or push any popped element into the stack. You need to maximize the top element of the stack after performing exactly K operations. If the stack becomes empty after performing K operations and there is no other way for the stack to be non-empty, print -1.
Input Format
The first line of input consists of two space-separated integers N and K. The second line of input consists N space-separated integers denoting the elements of the stack. The first element represents the top of the stack and the last element represents the bottom of the stack.
Constraints
1<=N<=10*6 1<=Ai<=10 18 1<=k<=10 9
Output Format
Print the maximum possible top element of the stack after performing exactly K operations.
Sample Input 0
6 4
1 2 4 3 3 5
Sample Output 0
4
Explanation 0
In 3 operations, we remove 1,2,4 and in the fourth operation, we push 4 back into the stack. Hence, 4 is the answer.

*/


#include<stdio.h>
#include<stdlib.h>

struct node{
int num;
struct node* next;
};
typedef struct node* Node;
Node head=NULL,tail,nn;

Node getnode()
{
    nn=(Node)malloc(sizeof(struct node));
    nn->next = NULL;

    return nn;
}

Node PUSH(int n){
  nn=getnode();
  nn->num = n;

  if(head == NULL){
    head = tail = nn;
  }
  else{
    tail->next = nn;
    tail = nn;
  }
  return head;
}

Node POP()
{
    Node temp;
    temp = head;

    head = head->next;
    temp->next = NULL;

    return head;
}

Node cal(int k){
  int i;
  Node cur;
  i=k;

  while(i!=0){
    cur = head->next;
    if(head->num <= cur->num){
        POP();
        i=i-1;
    }
  else
        i=i-2;
  }

  return head;
}

int main()
{
    int N,k,n;

    scanf("%d%d", &N, &k);

    for(int i=0;i<N;i++){
        scanf("%d", &n);
        PUSH(n);
    }
    head = cal(k);
    printf("%d", head->num);

    return 0;
}


