#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int Digit;
   string s;
   cout<<"Enter 1 for Stack Operation in String: "<<endl;
   cout<<"Enter 2 for Queue Operation in String: "<<endl;
   cout<<"Enter 3 for Stack & Queue Operation in String: "<<endl;
   cout<<"Enter your choice : "<<endl;
   cin>>Digit;
   cout<<"Enter A String: "<<endl;
   cin>>s;
   switch(Digit)
   {
   case 1:
   {
   stack<char>a;
   string r;
   for(int i=0;i<s.length();i++)
   a.push(s[i]);
   cout<<"Your Entered  String: "<<endl;
   cout<<s<<endl;
   cout<<"After Using Push Pop Operation Using Stack Operation String is:"<<endl;
   for(int i=0;i<s.length();i++){
   r=r+a.top();
   cout<<r<<endl;   
   a.pop();
   }
   break;
}
   case 2:{
   queue<char>a;
   string r;
   for(int i=0;i<s.length();i++)
   a.push(s[i]);
   cout<<"After Using Push Pop Operation Using Queue Operation String is:"<<endl;    
   for(int i=0;i<s.length();i++){
   cout<< a.front()<<endl;
   a.pop();
    }
   break;
}
   case 3:
{  
   stack<char>a;
   string r;
   for(int i=0;i<s.length();i++)
   a.push(s[i]);
   cout<<"Your Entered  String: "<<endl;
   cout<<s<<endl;
   cout<<"Stack is:"<<endl;
   for(int i=0;i<s.length();i++){
   r=r+a.top(); 
   a.pop();
     }
   cout<<r<<endl;  
   {
   queue<char>a;
   string r;
   for(int i=0;i<s.length();i++)
   a.push(s[i]);
   cout<<"Queue is:"<<endl;    
   for(int i=0;i<s.length();i++){
   cout<<a.front();
   a.pop();
    }
    } 
   break;
  }
   default:
{
   cout<<"You insert a wrong number"<<endl;
   break;
}
}
}