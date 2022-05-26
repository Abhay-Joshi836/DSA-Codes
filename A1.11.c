#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int );
void check(int [],int );
void display(float [],int );
void main()
{
    int ary[MAX],n;
    printf("Number of flats in the apartment:");
    scanf("%d",&n);

    read(ary,n);
    check(ary,n);
}

void read(int ary[],int n)
{
    printf("Enter the units consumed in each flat:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);

      }

}

void check(int ary[],int n)
{
    float bill[MAX],k;
    for(int i=0;i<n;i++)
    {
        if(ary[i]>0 && ary[i]<100)
        {
            k=1.5;
            bill[i]=ary[i]*k;
        }

        if(ary[i]>100 && ary[i]<251)
        {
            k=2.3;
            bill[i]=ary[i]*k;
        }

        if(ary[i]>250 && ary[i]<600)
        {
            k=4.0;
            bill[i]=ary[i]*k;
        }

        if(ary[i]>600)
        {
            k=5.5;
            bill[i]=ary[i]*k;
        }
    }

    display(bill,n);
}

void display(float bill[],int n)
{
    float total=0;
    printf("The bill of each flat is:\n");
    printf("Flat No.      Bill\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d            %f\n",i,bill[i]);
        total=total+bill[i];
    }

    printf("\nThe total bill is:%f",total);
}
