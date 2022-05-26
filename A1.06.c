#include<stdio.h>
#define MAX 30
void read(int [],int );
void sort(int [],int );
void display(int [],int );
void main()
{
    int stu[MAX],n;
    printf("Number of students who got admission:");
    scanf("%d",&n);
    read(stu,n);
    sort(stu,n);

}

void read(int stu[],int n)
{
    printf("Enter the ranks of the students:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&stu[i]);
    }
}

void sort(int stu[],int n)
{
    int rep;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(stu[j]>stu[j+1])
            {
                rep=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=rep;
            }

        }
    }
    display(stu,n);
}

void display(int stu[],int k)
{
    int max,min;
    printf("ranks of students:");
    for(int j=0;j<k;j++)
    {

        printf("%d ",stu[j]);
    }
    printf("\n");

    printf("Maximum and Minimum ranks are:%d %d",stu[0],stu[k-1]);

}
