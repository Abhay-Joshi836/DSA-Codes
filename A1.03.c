#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void read(int [],int );
void display(int [],int );
int main()
{

    int exp[MAX],n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    read(exp,n);
    display(exp,n);
    return 0;
}

void read(int exp[],int n)
{

    printf("Enter the experience of each employee:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&exp[i]);
    }

}

void display(int exp[],int n)
{

    int bonous;

    for(int j=0;j<n;j++)
    {
        if(exp[j]>=5 && exp[j]<=7)
          printf("Bonous of employee %d:1060\n",(j+1));

        else if(exp[j]>=8 && exp[j]<=9)
           printf("Bonous of employee %d:4260\n",(j+1));

        else if(exp[j]>=10)
           printf("Bonous of employee %d:9630\n",(j+1));
        else
            printf("No bonous for employe %d\n",j+1);
    }

}
