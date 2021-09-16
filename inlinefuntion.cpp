#include<bits/stdc++.h>
#include<string>
using namespace std;
  
class Student 
{    
    private:    
        int hight;    
    public:    
        Student() { 
            hight=0;//inline funtion
          }    
        friend int hight(Student); //friend function    
};    
int hight(Student b)    
{    
   b.hight += 20;    
    return b.hight; 
      
}    
int main()    
{    
    Student b;    
    cout<<"Hight of A student: "<< hight(b)<<endl;    
    return 0;    
}    