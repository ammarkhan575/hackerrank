#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void TOH(int n, char A, char B, char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Moving ring %d from %c to %c\n\n",n,A,C);
        TOH(n-1,B,A,C);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    char source ='A', auxilary='B' , destination='C';
    TOH(n,source,auxilary,destination);
    return 0;
}
