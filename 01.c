#include<stdio.h>
#include<stdlib.h>

void read(int [],int );
void count(int [],int );
int main()
{
    signed int ary[20],n;
    read(ary,n);
    return 0;
}

void read(int ary[],int n)
{
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("Hello\n");
    count(ary,n);
}

void count(int ary[],int n)
{
    printf("Hello");
    int p=0,ne=0,i;
    for(i=0;i<n;i++)
    {
        if(ary[i]>=0)
            p++;
        else
            ne++;
    }


    printf("The number of +ve and -ve numbers are:%d",p);

}
