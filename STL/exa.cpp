 #include<bits/stdc++.h>
 using namespace std;
  int main()
  {
     vector <int> marks;
     marks.push_back(10);
     marks.push_back(45);
     marks.push_back(89);
     marks.push_back(99);
     marks[3]=20;
     cout<<marks[3]<<endl;

     cout<< marks.size()<<endl;

     for(int i=0; i<marks.size(); i++)
     cout << marks[i]<<endl;
    //  cout<<"Vector size is :" marks.size()<<endl;
    //  cout<<"Elements of the vector are as follows:"<<endl;

   return 0;
  }