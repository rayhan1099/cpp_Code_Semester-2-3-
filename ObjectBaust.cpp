#include <iostream>

using namespace std;

class Number{
int a;
int b;
public:
Number(int n1, int n2) { a=n1; b=n2;}
};
void main()
{
Number num1(10,20), num2(30,50);
Number num3 = num1+num2;
if(num1>num2)
{
cout<<”You are a proud BAUSTian”;
}
}
