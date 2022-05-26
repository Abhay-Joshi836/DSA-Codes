#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int );
void check(int [],int );

void main()
{
    int ary[MAX],n;
    printf("Number of elements in the array:");
    scanf("%d",&n);

    read(ary,n);
    check(ary,n);
}

void read(int ary[],int n)
{
    printf("Enter the number:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);

      }

}

void check(int ary[],int n)
{
    int k,l=0;

    for(int j=0;j<n;j++)
    {
        k=0;
        for(int i=2;i<ary[j];i++)
        {
            if(ary[j]%i==0)
                k++;

            if(k==0)
                l++;
        }

        if(l==1)
        {
            printf("\nThe prime numbers are:");
        }
        if(k==0)
        {
            printf("%d ",ary[j]);
        }
    }
    if(l==0)
    {
        printf("No Prime numbers\n");
    }
}
