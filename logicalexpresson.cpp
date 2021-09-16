#include <iostream>
    using namespace std;
    int main()
    {
     int a,b,c,d;
     cout<<"Enter Three Number a b c For Big: "<<endl;
     cin>>a;
     cin>>b;
     cin>>c;
     if(a>b&&a>c)
         {cout<<"a is a Big Number"<<endl;}
        else if(a<b&&b>c)
        {cout<<"b is a Big Number"<<endl;}
     else
        {cout<<"c is a Big Number"<<endl;}
        cout<<"Enput One Value for Assignment Expression for a b :"<<endl;
        cin>>d;
      a=b=d;//assignment expression
    std::cout <<"Values of 'a' and 'b' are : " <<a<<","<<b<< std::endl;
    return 0;
    }

