#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int main()
 {

 //Create vector, declare
     vector<int>v;
     vector<int>v1(10,1);
//size and capacity
     cout<<"Size of v: "<<v.size()<<endl;
     cout<<"Capacity of v: "<<v.capacity()
     <<endl;
     v.push_back(2);
     v.push_back(1);
     v.push_back(4);
     v.push_back(9);
     v.push_back(3);
     v.clear();
     cout<<"Size of v: "<<v.size()<<endl;
     cout<<"Capacity of v: "<<v.capacity()
     <<endl;

//update value
     v[3]=10;

     cout<<"Size of v1: "<<v1.size()<<endl;
     cout<<"Capacity of v1: "<<v1.capacity()
     <<endl;
     v1.push_back(12);
     
     v1.clear();
     cout<<"Size of v1: "<<v1.size()<<endl;
     cout<<"Capacity of v1: "<<v1.capacity()
     <<endl;
//Delete value from vector
      vector<int>vnew;
      vnew.push_back(1);
      vnew.push_back(2);
      vnew.push_back(3);
      vnew.push_back(4);
      vnew.push_back(5);
      vnew.pop_back();
      vnew.erase(vnew.begin()+1);
      vnew.push_back(66);
      
      vnew[3]=20;
      
      cout<<"size od vnew: "<<vnew.size()<<endl;
      cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

//vnew ka print
    for(int i=0; i<vnew.size(); i++)
    cout<<vnew[i]<<" ";

//insert value
    vnew.insert(vnew.begin()+2,55);
    cout<<endl;
    for(int i=0; i<vnew.size(); i++)
    cout<<vnew[i]<<" ";
      cout<<endl;
 //front and back remove
      vector<int>arr;
      arr.push_back(11);
      arr.push_back(22);
      arr.push_back(33);
      arr.push_back(44);
      arr.push_back(55);
//front print
      cout<<arr[0]<<endl;
      cout<<arr.front()<<endl;
 //last print
      cout<<arr[arr.size()-1]<<endl;
      cout<<arr.back()<<endl;
      
//copy value of one vector to another vector
      // vector<int>a;
      // a=arr;
      // cout<<a.size();
      // cout<<endl;
      //  for(auto it=arr.begin(); it!=arr.end(); it++){
      //   cout<<*it<<" "<<endl;
      //  }
      //  cout<<endl;
      //  for(auto i: arr)
      //  cout<< i <<" ";


//sort in increasing order
      vector<int>ans;
      ans.push_back(91);
      ans.push_back(26);
      ans.push_back(33);
      ans.push_back(15);
      ans.push_back(12);
      ans.push_back(3);
      sort(ans.begin(), ans.end());
      for(auto i: ans)
      cout<<i<<" ";
      cout<<endl;

//type-2
      vector<int>ans22;
      ans22.push_back(91);
      ans22.push_back(26);
      ans22.push_back(33);
      ans22.push_back(15);
      ans22.push_back(12);
      ans22.push_back(3);
      sort(ans22.rbegin(), ans22.rend(),greater<int>());
      for(auto i: ans22)
      cout<<i<<" ";
      cout<<endl;
      
//sort for decreasing order
      vector<int>ans2;
      ans2.push_back(91);
      ans2.push_back(26);
      ans2.push_back(33);
      ans2.push_back(15);
      ans2.push_back(12);
      ans2.push_back(3);
      sort(ans2.begin(), ans2.end(),greater<int>());
      for(auto i: ans2)
      cout<<i<<" ";
      cout<<endl;
//type-2
      vector<int>ans3;
      ans3.push_back(91);
      ans3.push_back(26);
      ans3.push_back(33);
      ans3.push_back(15);
      ans3.push_back(12);
      ans3.push_back(3);
      sort(ans3.rbegin(), ans3.rend());
      for(auto i: ans3)
      cout<<i<<" ";
      cout<<endl;


//search in binary search

      vector<int>ans6;
      ans6.push_back(91);
      ans6.push_back(26);
      ans6.push_back(33);
      ans6.push_back(15);
      ans6.push_back(12);
      ans6.push_back(3);
      sort(ans6.begin(), ans6.end());
      for(auto i: ans6)
      cout<<i<<" ";
      cout<<endl;

      cout<<binary_search(ans6.begin(), ans6.end(),15);
      //index searching
      cout<<find(ans6.begin(), ans6.end(),15)-ans6.begin()<<endl;

      cout<<endl;

      cout<<binary_search(ans6.begin(), ans6.end(),14)<<endl;

//max or min search
    int maximum = *max_element(ans6.begin(), ans6.end());             
    cout << "The maximum element is : " << maximum << endl;

    int minimum = *min_element(ans6.begin(), ans6.end());
    cout << "The minimum element is : " << minimum << endl;


  return 0;
 }

  