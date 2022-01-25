#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<pair<int, pair<int,int>> v;
    int i;
    
    
    for(auto i=0;i<v.size();i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back(make_pair(y,make_pair(x,z)));
    }
    
    for(auto i=0;i<v.size();i++)
    {
        sort(v.begin(),v.end());
    }
    for(auto i=0;i<v.size();i++)
    {
        cout<<v.first<<" "<<v.second.first<<" "<<v.second.second<<endl;
    }
    
    
    return 0;
}
