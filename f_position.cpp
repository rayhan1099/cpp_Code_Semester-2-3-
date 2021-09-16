#include<iostream>
using namespace std;
#define EP 0.001
double func(double x)
{
    return x*x*x+2*x+2;
}
void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;

    while((b-a)>=EP)
    {
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));

        if (func(c)==0.0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : "<< c;
}

int main()
{
    double a,b;
     cout<<"Enter first guess: ";
     cin>>a;
     cout<<"Enter second guess: ";
     cin>>b;
    regulaFalsi(a,b);
    return 0;
}
