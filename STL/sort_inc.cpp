#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int> v={4,6,3,9,2,0,3};
//small to big sorting
    // sort(v.begin(), v.end());


    // sort(v.begin(), v.begin()+3);

//Big to small sorting
  sort(v.rbegin(), v.rend());


    for(auto u:v)
    cout<<u<<" "; 
cout<<endl;
  return 0;
 }