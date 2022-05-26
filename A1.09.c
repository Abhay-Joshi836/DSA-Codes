#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int );
void check(int [],int );
void display(int [],int );
void main()
{
    int ary[MAX],n;
    printf("Number of students int the class:");
    scanf("%d",&n);

    read(ary,n);
    check(ary,n);
}

void read(int ary[],int n)
{
    printf("Enter the marks of each student:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);

        if(ary[i]>10)
        {
            printf("Invalid input:");
            ary[i]=0;
        }
    }
}

void check(int ary[],int n)
{
    int k=0,even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(ary[i]==10)
        {
            k++;
        }

        if(ary[i]%2==0)
            even++;

        if(ary[i]%2!=0)
            odd++
    }
    printf("Number of students with even marks:%d\n",even);
    printf("Number of students with odd marks:%d\n",odd);
    printf("%d students have got full marks\n",k);
    display(ary,n);
}

void display(int ary[],int n)
{

    printf("The list of students who have got full marks\n:");
    printf("|Roll number|  |marks|\n");
    for(int i=0;i<n;i++)
    {
        if(ary[i]==10)
        {
            printf("  %d              %d\n",i,ary[i]);
        }
    }
}
