#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int );
void reverse(int [],int );
void display(int [],int );

void main()
{
    int ary[MAX],n;
    printf("Number of elements in the array:");
    scanf("%d",&n);

    read(ary,n);
    reverse(ary,n);
}

void read(int ary[],int n)
{
    printf("Enter the number:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);

      }

}

void reverse(int ary[],int n)
{
    int swap;
    for(int i=0;i<n/2;i++)
    {
        swap=ary[n-1-i];
        ary[n-1-i]=ary[i];
        ary[i]=swap;
    }
   display(ary,n);
}

void display(int ary[],int n)
{
    printf("\nThe reversed array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ary[i]);
    }
}
