#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int x;
    cin>>x;
    cout<<"Enter the number: "<<x<<endl;

    x % 2 == 0 ? cout <<"Even" : cout <<"Odd"<<endl;//shorthand for if-else

    //another example
    string weather = x>20 ? "Hot" : "Cool";
    cout<<weather<<endl;
    
  return 0;
 }