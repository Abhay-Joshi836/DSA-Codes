
/*
A new game is introduced in the World Wrestling Event, wherein the competition is conducted across Countries. King is 1st player representing country Oman and Sultan 2nd player representing country India. In the game, there is a circle with N points, 1 dumble of weight W is placed at each point. The mind game here is that now the player has to pick a chit which represents K. If the weight is a modulus of K and is greater than the next dumble, only then he has to lift the dumble and that particular weight is added to the dumble score. Then the crew boy removes the lifted dumble from the circle. Once the player reaches last dumble, weight of last dumble is compared with first dumble. Also if there is only one dumble, the players stop the process of lifting. Apply Problem Solving and find out whose dumble score is highest.
Input Format
Number of points in the circle N.
The number of players M.
The number got by picking a chit K1 for King.
The number got by picking a chit K2 for Sultan.
Constraints
Minimum number of players is 2.
Output Format
Display Dumble score of King.
Display Dumble score of Sultan.
Display Name of the winner.
Sample Input 0
5
2
2
3
50 55 63 80 10
Sample Output 0
80
0
The winner is King
Sample Input 1
6
1
3
4
34 56 67 23 24 76
Sample Output 1
Minimum number of players should be 2
Sample Input 2
7
2
3
5
125 195 142 630 500 321 465
Sample Output 2
1290
1790
The winner is Sultan
1
*/


#include<stdio.h>
2
#include<stdlib.h>
3
#define MAX 20
4
typedef struct Q
5
{
6
int rear;
7
int front;
8
int elements[MAX];
9
}Queue;
10
int full(Queue *m)
11
{
12
if((m->rear+1)%MAX==m->front)
13
return(1);
14
return(0);
15
}
16
void enqueue(Queue *m)
17
{
18
int x;
19
scanf("%d",&x);
20
if(m->rear==-1)
21
m->rear=m->front=0;
22
else
23
m->rear=(m->rear+1)%MAX;
24

25
m->elements[m->rear]=x;
26
}
27
void count(Queue *m,int k1,int k2)
28
{
29
int i,count1=0,count2=0;
30

31
for(i=m->front;i!=m->rear;i=(i+1)%MAX)
32
{
33
  if(m->elements[i]%k1==0 && m->elements[i]>m->elements[i+1])
34
  count1=count1+m->elements[i];
35
  if(m->elements[i]%k2==0 && m->elements[i]>m->elements[i+1])
36
  count2=count2+m->elements[i];
37
}
38
  if((m->elements[i]%k1==0) && (m->elements[i]>m->elements[m->front]))
39
  count1=count1+m->elements[i];
40
  if(m->elements[i]%k2==0 && m->elements[i]>m->elements[m->front])
41
  count2=count2+m->elements[i];
42
printf("%d\n%d",count1,count2);
43
if(count1>count2)
44
printf("\nThe winner is King");
45
if(count1<count2)
46
printf("\nThe winner is Sultan");
47
}
48

49
int main()
50
{
51
Queue q;
52
q.front=-1;
53
q.rear=-1;
54
int N,M,k1,k2,i;
55
scanf("%d%d",&N,&M);
56
if(M<=1)
57
{
58
printf("Minimum number of players should be 2");
59
exit(0);
60
}
61
scanf("%d%d",&k1,&k2);
62
for(i=0;i<N;i++)
63
{
64
if(full(&q))
65
printf("queue is full");
66
else
67
enqueue(&q);
68
}
69
count(&q,k1,k2);
70
    return 0;
71
}
