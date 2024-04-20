#include<bits/stdc++.h>
using namespace std;
 int main()
 {
//Declaration and initialization

    /*string name;
    string s; 
    string s1= "Hello world";
    cout<<s1<<endl;
    cout<<s1[0]<<" "<<s1[1]<<endl;
    s1[0]='A';
    s1[1]='B';
    cout<<s1<<endl;*/

//String Append/Concatenation

    /*string s="Shakibul ";
    string s1="Hasan";
    string s3=s.append(s1);
    cout<<s3<<endl;*/

     //size()/length()

    /* string s="Hello";
     for(int i=0;i<s.size();i++)
     {
         cout<<s[i]<<" ";
     }

     for(auto it:s)cout<<it<<" ";*/

//clear()

    /*string name="Hello coders";
    name.clear();
    cout<<name.size()<<endl; 
    cout<<name<<endl; */

//reverse() 

    /*string s="SHAKIB";
     reverse(s.begin(), s.end());
     cout<<s<<endl;*/

//empty()

    /* string s= "HSTU";
     cout<<s.empty()<<endl;

     s.clear();
     cout<<s.empty()<<endl;*/

 //find()    
     
     /*string s="Hello World";
     cout<<s.find("ello")<<endl;
     if(s.find("Hello")!=string::npos)
     cout<<"Found"<<endl;
     else
     cout<<"Not Found"<<endl;*/

//compare of two string  

   /* string s1,s2;
    s1="shakib";
    s2="shaki";
    if(s1.compare(s2))
    cout<<"Not Equal"<<endl;
    else
    cout<<"Equal"<<endl;*/

//Transform()
   
  /* string s1="Shakib";
   string s2= "Hasan";
   transform(s1.begin(), s1.end(),s1.begin(), ::tolower);
   cout<<s1<<endl;

   transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
   cout<<s2<<endl;*/

//User input of string
   
  /*string s;
   cin>>s;
   cout<<s<<endl;

   //line input
   string s1;
   getline(cin, s1);
   cout<<s1<<endl;
   
   int n;
   string s;
   cin>>n;
   cin.ignore();
   getline(cin,s);
   cout<<s<<endl;*/ 

//erase()
  /*  string s="Shakibul Hasan";
     //s.erase();
     //s.erase(2);
    //  s.erase(2,4);
    // s.erase(s.begin()+5);
    // s.erase(s.begin(), s.begin()+5);
    //  s.erase(remove(s.begin(),s.end(),'b'),s.end());

     cout<<s<<endl;  */ 

 //Sorting of string   

    //Sort by ascending order 
    string s="Shakib";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    //sort by descending order
    string s1="Shakib";
    sort(s1.rbegin(),s1.rend());
    cout<<s1<<endl;
  
  return 0;
 }
