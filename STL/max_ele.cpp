#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int> v={1,2,2,3,4,5,5,5,6,1} ;
    vector<int>::iterator it=max_element(v.begin()+1,v.begin()+4);
    it=min_element(v.begin()+1,v.begin()+4);
    cout << *it << endl;
  return 0;
 }