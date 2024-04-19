#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int> v={7,5,4,3,7,5,5,9,0} ;
    sort(v.begin(), v.end());
    // unique(v.begin(), v.end());

    int Sz= unique(v.begin(), v.end())-v.begin();
    cout << Sz << endl;

    for(int i=0; i<Sz; i++)
    cout<< v[i] << " ";
    cout<< endl;
  return 0;
 }
 