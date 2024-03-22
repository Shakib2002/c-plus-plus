#include<bits/stdc++.h>
using namespace std;

void playMusic()
{
    cout<<"Playing music"<<endl;
}

void sayHi(string name)
{
    cout<<"Hi "+name<<endl;
}

string sayHello(string name)
{
    return " Hello " + name;
}

int areaOfCircle(int radius)
{
    return 3.1416*radius*radius;
}
 int main()
 {
     playMusic();
     playMusic();
     sayHi("John");
     sayHi("Shakib");
     cout<<sayHello("Coding Panda")<<endl;
     cout<<sayHello("Coding LEARNERS")<<endl;

     int area= areaOfCircle(5);
     
     if(area>10)
     {
        cout<<"The circle is big"<<endl;
     }
  return 0;
 }