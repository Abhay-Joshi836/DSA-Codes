#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int [],int );
void reverse(int [],int [],int );
void display(int [],int [],int );

void main()
{
    int ary1[MAX],ary2[MAX],n;
    printf("Number of elements in the array:");
    scanf("%d",&n);

    read(ary1,ary2,n);
    reverse(ary1,ary2,n);
}

void read(int ary1[],int ary2[],int n)
{
    printf("Enter the number for 1st array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary1[i]);

      }

    printf("Enter the number for 2nd array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary2[i]);

      }
}

void reverse(int ary1[],int ary2[],int n)
{
    int swap;
    for(int i=0;i<n/2;i++)
    {
        swap=ary2[i];
        ary2[i]=ary1[i];
        ary1[i]=swap;
    }
   display(ary1,ary2,n);
}

void display(int ary1[],int ary2[],int n)
{
    printf("\nThe exchanged arrays:\n");

    printf("\nArray1:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ary1[i]);
    }

     printf("\nArray2:");
        for(int i=0;i<n;i++)
    {
        printf("%d ",ary2[i]);
    }
}
