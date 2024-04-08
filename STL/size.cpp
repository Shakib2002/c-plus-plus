#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>v(10);
    cout << v.size() << endl; 

    for(int i=0; i<v.size(); i++)
    cout<< v[i] << " ";
    cout<< endl;

    v[4]=111;
    v[3]=122;
    cout << v[4] << endl;
    cout << v[3] << endl;

  return 0;
 }