#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int bill,units;
    cin>>units;
    cout<<"Enter the bill: "<< units<<endl; 

    if(units<=50)
    {
        bill=0.50*units;
    }
    else if(units<=150)
    {
        bill= 0.50*50+(units-50)*0.75;
    }
    else if(units<=250)  
    {
        bill= 0.50*50+100*0.75+((units-150)*1.20);
    }
    else
    {
        bill= 0.50*50+100*0.75+100*1.25+((units-250)*1.50);
    }
    bill=bill+(0.20*bill);
    cout<<"Your Final cost: "<<bill<<endl;
  return 0;
 }