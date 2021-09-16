#include<bits/stdc++.h>
using namespace std;

class  student{ 
public: 
  int x; 
 
  student(int i);  // constructor 
  ~student();      // destructor 
};   
 
// Implement a parameterized constructor. 
student::student(int i) { 
    x = i; 
   
}   
 
// Implement MyClass destructor. 
student::~student() {
     
  cout << "Destructing object whose x value is " << x  <<" \n"; 
} 
   
int main() {   
    int a,b;
    
    cout<<"Enter two Students Id: "<<endl;
    cin>>a;
    cin>>b;
student id_1(a); 
 student id_2(b); 
 
  cout<<"Before Implement Id: "<<endl<< id_1.x << " " << id_2.x << "\n"; 
 cout<<"After Implementation: "<<endl;
  return 0; 
}