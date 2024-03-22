//write a function that returns factorial of a number! 5!=1*2*3*4*5=120
//this is the simplest version, you can make it more complex by adding error checking and handling for non-integer or negative numbers.
//if the input is not a non-negative integer, return -1.

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans=ans*i;
    }
    return ans;
}

 int main()
 {
     int n;
     cin>>n;
     cout<<factorial(n)<<endl;
  return 0;
 }