#include<iostream>
using namespace std;
namespace myspace
{
    class myclass
    {
        int x;
        public:

        myclass(int y)
        {
            x=y;
        }

        void setx(int y)
        {
            x=y;
        }
        void showx()
        {
            cout<<"X="<<x<<endl;
        }
    };
}

int main()
{
    myspace::myclass obj(10);
    myspace::myclass::showx;
    cout<<"ok"<<endl;
    return 0;
