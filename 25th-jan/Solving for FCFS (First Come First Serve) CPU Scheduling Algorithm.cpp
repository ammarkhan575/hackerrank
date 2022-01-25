#include<bits/stdc++.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<pair<string,int>> v = {{"P1", 0},
                                  {"P2", 0},
                                  {"P3", 0},
                                  {"P4", 0}};
    
    int a[4],i ;
    for(int i=0;i<4;i++)
    {
         cin>>a[i];
    }
    int sum =0;
    for(auto i=1; i<v.size(); i++)
    {
        
            sum = sum + a[i-1];
            v[i].second = sum;
        
    }
    for(auto i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<"("<<"WT="<<v[i].second<<")";
        if(i<v.size()-1)
        {
            cout<<", ";
        }
    }
    
    return 0;
}
