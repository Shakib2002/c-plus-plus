#include<bits/stdc++.h>
using namespace std;
//1st Function
int factorial(int n)
{
    int ans=1;
    for (int i = 1; i<=n ; i++) 
    {
        ans=ans*i;
        }
        return ans;
}
//2nd Function
 int binCoff(int N,int R)
 {
    int ans= factorial(N)/(factorial(N-R)*factorial(R));
    return ans;
 }
 

     int main()
     {
        int N,R;
        cin>>N>>R;
        cout<<N<<R;
        cout<<binCoff(N,R)<<endl;
   
 }