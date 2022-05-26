#include<stdio.h>
#define MAX 30

void read(int [],int );
void cal_plty(int [],int );
void avg(int [],int );
void max_min(int [],int );
void total_avg(int [],int );
void main()
{
    int ptly[MAX],n,w,x,y,z;
    printf("Enter the number of students who have returned the books:");
    scanf("%d",&n);
    read(ptly,n);
    cal_ptly(ptly,n);

}

void read(int ptly[],int n)
{

    printf("Enter the number of days after which book was returned:\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&ptly[i]);
    }
}

int cal_ptly(int ptly[],int n)
{
    int pt[n],k=0;
    for(int j=0;j<n;j++)
    {
        if(ptly[j]>15)
        {
            pt[j]=2*(ptly[j]-15);

           }
        else
        {
            pt[j]=0;
        }
   }
    total_avg(pt,n);
    max_min(pt,n);
}

void total_avg(int pt[],int n)
{
    int total=0;
    float avg=0;
    for(int j=0;j<n;j++)
    {
        total=total+pt[j];
        avg=avg+pt[j];
    }
    avg=avg/n;
    printf("Total penalty collected:%d\n",total);
    printf("Average penalty collected:%f\n",avg);

}


void max_min(int pt[],int n)
{
    int maximum=pt[0],minimum=pt[0];
    for(int i=1;i<n;i++)
    {
        if(maximum<pt[i])
           maximum=pt[i];

        if(minimum>pt[i])
            minimum=pt[i];
    }
    printf("The maximum penalty is:%d\n",maximum);
    printf("The minimum penalty is:%d\n",minimum);
}


