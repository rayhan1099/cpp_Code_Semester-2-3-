#include<iostream>
using namespace std;
double func(double x)
{
    return x*x*x - 2*x -5;
}
void Bisection(double a, double b,double EP)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;



    for(int i=0;i<=EP;i++)
    {
        c = (a+b)/2;

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
    double a, b,EP;
     cout<<"Enter first guess: ";
     cin>>a;
     cout<<"Enter second guess: ";
     cin>>b;
     cout<<"Enter tolerable error: ";
     cin>>EP;
    Bisection(a,b,EP);
    return 0;
}