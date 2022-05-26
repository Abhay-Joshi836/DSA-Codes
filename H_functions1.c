
/*
1) Task:
determine the sum of even and odd numbers.
display the result of even numbers sum and odd numbers sum
Input Format
total numbers "n" should be positive.
each number to input can be positive or negative.
Constraints
Validate n such that it should be positive.if n is negative display error message as Invalid input.
Read each number upto n.Deatermine whether number is even.if so, add it as even sum.otherwise add it as odd sum.
Output Format
Display the sum of all even numbers.
Display the sum of all odd numbers.
Sample Input 0
3
55
43
10
Sample Output 0
Sum of even numbers=10
Sum of odd numbers=98
Sample Input 1
4
34
23
22
55
Sample Output 1
Sum of even numbers=56
Sum of odd numbers=78

*/
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

int n,a,sum1=0,sum2=0,i;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d",&n);



    for(i=1;i<=n;i++)



    {

        scanf("%d",&a);

        if (a%2==0)

        {

            sum1=sum1+a;

        }

        else{

            sum2=sum2+a;

        }



    }

    printf("Sum of even numbers=%d\n",sum1);

    printf("Sum of odd numbers=%d",sum2);

    return 0;

}



