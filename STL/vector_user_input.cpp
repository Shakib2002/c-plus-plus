#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int>name;
    for(int =0; i<n; i++){
        int a;
        cin>>a;
        name.push_back(a);
    }
    cout<<name.size()>>endl;
    for(int i=0; i<name.size(); i++){
        cout<<name[i]<<" ";
        cout<<endl;
    }


  return 0;
 }