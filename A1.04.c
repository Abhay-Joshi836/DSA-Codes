#include<stdio.h>
#define MAX 10

void read(int [] );
int avg(int [] );
void cal(int [],float );
void main()
{

    int marks[MAX],m;

    read(marks);
    m=avg(marks);
    cal(marks,m);
}


void read(int marks[])
{
    int m;
    printf("Enter the marks of all 10 students:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
    }

}

int avg(int marks[])
{
    float average=0;

    for(int i=0;i<10;i++)
    {
        average=average+marks[i];
    }
    average=average/10;
    printf("class average is:%f",average);

    return average;
}

void cal(int marks[],float av)
{

    int above=0,below=0;

    for(int i=0;i<10;i++)
    {
        if(marks[i]>=av)
            above++;
        else
            below++;
    }

    printf("\nThe number of students above and below the average are:%d %d\n",above,below);
}
