#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int total_sandwich=n,crust=0;
        while(n>0)
        {
            crust=crust+n%k;
            n=n/k;
            total_sandwich=total_sandwich+n;
            if(crust>=k)
        {
            total_sandwich=total_sandwich+crust/k;
            crust=crust/k;
            
        }
        }
        
        
         cout<<total_sandwich<<endl;
    }
   
    return 0;
}
