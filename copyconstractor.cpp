#include<bits/stdc++.h>
using namespace std;

class A
{
private:
int a, b;
public:
A( );
A(int x);
A(int x, int y);
A(A &p); 
void get ( );
void display ( );
};
A::A( )
{
a=b=0;
}
A::A(int x)
{a=b=x;
}
A::A(int x, int y)
{
a=x;
b=y;
}
A::A (A &p)
{
a=p.a;
b=p.b;
}
void A:: display ( )
{
cout<< "a= "<< a<<" "<<"b= "<< b<< endl;
}
int main( )
{
A b1, b2(200), b3(300.0,800), b4(b3);
cout<< "Use of default constructor" << endl;
b1.display( );
cout<< "Use of one argumented constructor" << endl;
b2.display( );
cout<< "Use of two argumented constructor" << endl;
b3.display( );
cout<< "Use of copy constructor object b1 is copied in the object b4" << endl;
b4.display( );
return 0;
}