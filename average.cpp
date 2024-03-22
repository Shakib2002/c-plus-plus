#include<iostream>
using namespace std;
 int main()
 {
    //data
    cout<<"Enter the marks physics,chemistry,math";
    int physics,chem,math;
    cin>>physics;
    cin>>chem;
    cin>>math;


    // int Physics=90;
    // int math=75;
    // int chem=68;

    //processing
    float avg=(physics+chem+math)/3.0;
    //output
    cout<<"Average Marks = "<< avg;

  return 0;
 }