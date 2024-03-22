#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int a;
    int b;
    cin>>a;
    cin>>b;

    if((a%b==0)||(b%a==0))
    {
        cout<<"MULTIPLE";
    } 
    else 
    {
        cout<<"NOT MULTIPLE";
    }
  return 0;
 }