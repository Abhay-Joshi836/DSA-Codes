#include<stdio.h>
#include<stdlib.h>
#define MAX 30


void read(int [],int );
void sort(int [],int );
void display(int [],int );
void main()
{
   int ary[MAX],n;
   printf("Enter the number of elements to be entered:");
   scanf("%d",&n);
   read(ary,n);
   sort(ary,n);

}
 void read(int ary[],int n)
 {

     printf("Enter the elements:\n");

     for(int i=0;i<n;i++)
     {
         scanf("%d",&ary[i]);
     }
 }

 void sort(int ary[],int n)
 {
     int swap;

     for(int j=0;j<(n-1);j++)
     {
         for(int i=0;i<(n-1);i++)
         {
             if(ary[i]>ary[i+1])
            {
               swap=ary[i];
               ary[i]=ary[i+1];
               ary[i+1]=swap;
            }
         }
    }

    display(ary,n);
 }

 void display(int ary [],int n)
 {

     printf("The sorted list is:\n");
     for(int i=0;i<n;i++)
     {
         printf("%d ",ary[i]);
     }
}

