#include<stdio.h>
#define MAX 30

void read(int [],int  );
void avg(int [],int  );
void cal(int [],int );
void main()
{

    int tax[MAX],m;
    printf("Enter the number of tax payers:");
    scanf("%d",&m);
    read(tax,m);
    avg(tax,m);
    cal(tax,m);
}


void read(int tax[],int m)
{

    printf("Enter the tax paid by all:\n");

    for(int i=0;i<m;i++)
    {
        scanf("%d",&tax[i]);
    }

}

void avg(int tax[],int m)
{
    float average=0;

    for(int i=0;i<m;i++)
    {
        average=average+tax[i];
    }
    average=average/10;
    printf("average tax is:%f\n",average);


}

void cal(int tax[],int m)
{

    int above=0,range=0;

    for(int i=0;i<m;i++)
    {
        if(tax[i]>=2500000)
            above++;
        else if(tax[i]>50000 && tax[i]<150000)
            range++;
    }

    printf("Number of Tax payers in the range:%d",range);
    printf("Number of Tax payers above the mark:%d",above);
}
