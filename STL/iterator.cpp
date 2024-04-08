#include<bits/stdc++.h>
using namespace std;
 int main()
 {
//Type-1
    vector<int>v={2,4,6,8,9};
    vector<int>::iterator name;

    for(name=v.begin(); name != v.end(); name++){
        cout<< *name<<" ";
    }
    cout<< endl;

//Type-2
 for(int u:v)
        cout << u << " ";
    cout<< endl;

//Type-3
 for(auto u:v)
        cout << u << " ";
    cout<< endl;
  return 0;
 }

