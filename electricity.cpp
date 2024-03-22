#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int unit;
    cin>>unit;
    int costs;

    if(unit<=100)
    {
        costs=0;
    } 
    else if(unit<=200)
    {
        costs=0+(unit-100)*5;
    }
    else if(unit<=300)
    {
        costs=0+100*5+(unit-200)*10;
    }
    else
    {
        costs=0+100*5+200*10+(unit-300)*12;
    }
    cout<<costs<<endl;
  return 0;
 }