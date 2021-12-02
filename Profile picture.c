#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int L;
    scanf("%d",&L);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int W,H;
        scanf("%d %d",&W,&H);
        if(W<L || H<L)
            printf("UPLOAD ANOTHER\n");
        else
        {
            if(W==H)
                printf("ACCEPTED\n");
            else
            printf("CROP IT\n");
        }
        
    }
    return 0;
}
