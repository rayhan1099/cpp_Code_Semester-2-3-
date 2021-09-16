#include<bits/stdc++.h>
using namespace std;

class calculator
{
public:
void sum (int x, int y);
void sum (float x, float y);
void subtraction (int x, int y);
void subtraction (float x, float y);
};
void calculator:: sum (int x, int y)
{
cout<<"Result : "<< (x+y)<< endl;
}
void calculator:: sum (float x, float y)
{
cout<< "Result : "<< (x+y)<< endl;
}
void calculator:: subtraction (int x, int y)
{
cout<< "Result : "<< (x-y)<< endl;
}
void calculator:: subtraction (float x, float y)
{
cout<< "Result : "<< (x-y)<< endl;
}
int main( )
{
calculator object;
int a, b;
float c, d;
cout<< "Enter two integers : ";
cin>>a>>b;
cout<< "Enter two floats : ";
cin>>c>>d;
cout<<"Two integer's summation : "<< endl;
object.sum(a, b);
cout<<endl<<"Two float's summation : "<<endl;
object.sum(c, d);
cout<<endl<<"Two integer subtraction : "<< endl;
object.subtraction(a, b);
cout<<endl<<"Two float's subtraction : "<<endl;
object.subtraction(c, d);
return 0;
}