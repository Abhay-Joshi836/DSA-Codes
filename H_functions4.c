
/*
4) In the 14th century, the earliest examples of the use of Taylor series and closely related methods were given by Madhava of Sangamagrama.Later Indian mathematicians suggest that he found a number of special cases of the Taylor series, including those for the trigonometric functions of sine, cosine, tangent, and arctangent. HELP other mathematicians to explore sine series
Input Format
first line indicates the x value 'X'
Second line indicates the n value **'n'
Constraints
1<=x<=100
1<=n<=100
Output Format
first line indicates the answer of sine series with only 2 precession. i.e if the answer is 0.98999 then print 0.98 only.
Sample Input 0
2
3
Sample Output 0
0.93
*/

#include <stdio.h>
#include <math.h>

int fac(int x)
{
    int i,fac=1;
    for(i=1;i<=x;i++)
        fac=fac*i;
    return fac;
}

int main()
{
    float x,sum=0;
    int i,j,limit;

    scanf("%f",&x);

    scanf("%d",&limit);



    for(i=1,j=1;i<=limit;i++,j=j+2)
    {
        if(i%2!=0)
        {
            sum=sum+pow(x,j)/fac(j);
        }
        else
            sum=sum-pow(x,j)/fac(j);
    }

    printf("%.2f",sum);
    return 0;
}
