
/*
5) Round Robin is a popular CPU scheduling algorithm in operating systems where each process is assigned a fixed time slot for execution in a cyclic way. CPU is assigned to the process on the basis of FCFS for a fixed amount of time. This fixed amount of time is called as time quantum or time slice. After the time quantum expires, the process is removed and sent to the ready queue. Then, the CPU is assigned to the next arrived process. Apply problem solving framework to simulate round robin algorithm and display the queue of processes and ready queue after M number of cycles.
Input Format
The first line indicates the number of processes N in the queue.
The next N lines indicate the Process Number and the CPU time required by that process.
The next two lines indicate the time quantum T and its value and number of cycles M and its value.
Constraints
1
Time is in seconds.
Output Format
Displays remaining processes in queue and the remaining time.
Sample Input 0
4
1 10
2 8
3 4
4 6
T
2
M
2
Sample Output 0
1 6
2 4
4 2
Ready Queue
3 0
Sample Input 1
5
1 18
2 14
3 16
4 18
5 19
T
4
M
3
Sample Output 1
1 6
2 2
3 4
4 6
5 7
Ready Queue
Queue Empty
Sample Input 2
3
1 12
2 8
3 4
T
4
M
3
Sample Output 2
Queue Empty
Ready Queue
3 0
2 0
1 0
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct process {
    int name;
    int time;
    struct process * next;
} * e;

e f=NULL;
e r=NULL;

void read()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    e temp = (e)malloc(sizeof(struct process));

        scanf("%d%d",&temp->name,&temp->time);
        if(f==NULL){
            f=r=temp;
        }
        else{
            r->next = temp;
            r=temp;
        }
    }

}

void display(){
    int t,m;
    char T[5],M[5];
    scanf("%s%d%s%d",T,&t,M,&m);
    t=t*m;
    e cur=f;
    while(cur!=r->next){
        cur->time-=t;
        cur=cur->next;
    }

    int flag=0;
    cur=f;
    while(cur!=r->next)
    {
        if(cur->time>0){
            printf("%d %d\n",cur->name,cur->time);
            flag=1;
        }
        cur=cur->next;

    }
    if(flag==0)
        printf("Queue Empty\n");
    cur=f;
    flag=0;
    printf("Ready Queue\n");
    int a[50];
    int l=0;
    int cnt=0;
    while(cur!=r->next)
    {
        if(cur->time<=0){
            a[l]=cur->name;
            cnt++;
            l++;
            flag=1;
        }
        cur=cur->next;

    }
    if(flag==0)
        printf("Queue Empty");

    for(l=cnt-1;l>=0;l--){
        printf("%d 0\n",a[l]);
    }
}

int main(){
    read();
    display();
    return 0;
}
