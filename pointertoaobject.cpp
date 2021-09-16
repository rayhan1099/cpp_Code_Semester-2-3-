#include<bits/stdc++.h>
using namespace std;

class Data
{
    public:
    int a;
    void print() 
    { 
        cout << "a is "<< a <<endl; 
    }
};

int main()
{
    Data d, *dp;
    dp = &d;     // pointer to object
 
    int Data::*ptr=&Data::a;   // pointer to data member 'a'

    d.*ptr=20;
    d.print();

    dp->*ptr=50;
    dp->print();
}