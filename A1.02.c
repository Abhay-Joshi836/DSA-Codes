#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void read(int [],int );
void count(int [], int );
void main()
{
    int ary[MAX],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    read(ary,n);
    count(ary,n);

}

void read(int ary[], int n)
{

    printf("Enter the elements:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
}

void count(int ary[], int n)
{
    int num,f=0;
    printf("Enter the number to be found:");
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(num==ary[j])
            printf("%d ",j);
            f++;
    }
    printf("frequency of the number %d is:%d",num,f);
}
