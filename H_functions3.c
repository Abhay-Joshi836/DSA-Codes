/*
3) Task
C Program To Generate First N Terms of Lucas sequence using Function
A Lucas series is a sequence of numbers which the next number is calculated by adding the immediate preceding two consecutive numbers.
To generate N terms in a Lucas series, the first digit in the sequence should be 2 and the next digit should be 1, which is basically hard-coded. The next digit, which is called as Lucas number, is derived by
The next digit, which is called as Lucas number, is derived from the sum of the preceding two digits in the sequence. This addition and generation of Lucas sequence go till the limit.
Example 2 1 3 4 7 11 18 29 47 76 123 199 322 521 843
Input Format
"N" value
Constraints
Validate N such a way that N should be positive.if Negative value entered by the user display "N is a negative value" a error message.
0<=N>=40
If N value is not in the above range print a error message saying that Invalid input.
Output Format
Display Lucas Series
Sample Input 0
1
Sample Output 0
2
Sample Input 1
-7
Sample Output 1
Invalid input
Sample Input 2
5
Sample Output 2
2 1 3 4 7


*/
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

void lucas(int N);

int main ()



{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */



    int N;

    scanf("%d",&N);

    if (0<=N && N<=40)

    {



    lucas(N);

    }



        else

            printf("Invalid input");

    return 0;

}

    void lucas(int N)

    {

        int i,d1=2,d2=1,d3;

        if (N==1)

            printf("%d",d1);

        else

        {

            printf("%d %d ",d1,d2);

    for(i=3;i<=N;i++)

    {

        d3=d1+d2;

        printf("%d ",d3);

        d1=d2;

        d2=d3;

    }

        }

    }



