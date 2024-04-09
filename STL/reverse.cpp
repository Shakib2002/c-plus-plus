#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>v={0,9,8,7,6,5};
    reverse(v.begin(),v.end());
    for(auto u:v) cout<<u<<" ";
    cout<<endl; 
  return 0;
 }