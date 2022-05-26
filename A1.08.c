#include<stdio.h>
#define MAX 12
void read(int []);
void sort(int []);
void display(int []);
void main()
{
    int exp[MAX];
    read(exp);
    sort(exp);

}

void read(int exp[])
{
    printf("Enter the expenditure of each month:");
    for(int i=0;i<12;i++)
    {
        scanf("%d",&exp[i]);
    }
}

void sort(int exp[])
{
    int rep;
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<(11);j++)
        {
            if(exp[j]>exp[j+1])
            {
                rep=exp[j];
                exp[j]=exp[j+1];
                exp[j+1]=rep;
            }

        }
    }
    display(exp);
}

void display(int exp[])
{
    int max,min,range=0;
    float avg=0;
    for(int j=0;j<12;j++)
    {
        avg=avg+exp[j];

        if(exp[j]>35000)
          range++;

    }
    avg= avg/12;
    printf("\n");

    printf("Maximum and Minimum ranks are:%d %d\n",exp[0],exp[11]);
    printf("Average expenditure of the year:%f\n",avg);
    printf("The number of whose expenditure is more than 35000:%d\n",range);
}
