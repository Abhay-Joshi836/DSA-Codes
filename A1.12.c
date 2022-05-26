#include<stdio.h>
#include<stdlib.h>
#define MAX 30

#include<stdlib.h>
#define MAX 30

void read(int [],int );
void cal_sum(int [],int );
void main()
{
    int ary[MAX],n;
    printf("Number of elements in the array:");
    scanf("%d",&n);

    read(ary,n);
    cal_sum(ary,n);
}

void read(int ary[],int n)
{
    printf("Enter the number:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);

      }

}

void cal_sum(int ary[],int n)
{
    int k,num[MAX],sum=0,l=0;
    for(int i=0;i<n;i++)
    {
      l=0;
      do
      {
        num[l]=ary[i]%10;
        l++;
        ary[i]=ary[i]/10;

      }while(ary[i]!=0);


      for(int j=0;j<l;j++)
      {
          k=num[0];
          for(int i=1;i<l;i++)
          {
              if(k<num[j])
                k=num[j];
          }

      }

      sum=sum+k;
      printf("\n%d",sum);
    }

   printf("\n sum=%d",sum);
}
