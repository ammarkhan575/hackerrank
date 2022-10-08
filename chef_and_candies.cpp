#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int z=n-x;
        if(z<=0)
        {
            cout<<0<<endl;
        }
        else if(z>0)
        {
        int rem=z%4;
        int ans=z/4;
        if(rem<=0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans+1<<endl;
        }
        }
    }
}
