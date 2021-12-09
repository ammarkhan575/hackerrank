/* https://www.hackerrank.com/contests/value-added-8th-dec-21/challenges */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isPrime(int T)
{
    for(int i=2;i<T;i++)
    {
        if(T%i==0)
            return 0;
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    while(N--)
    {
        int T;
        cin>>T;
        int sum=0;
        for(int i=2;i<=T;i++)
        {
            if(isPrime(i))
            {
                if(isPrime(i*2+1))
                {
                    sum=sum+i;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
