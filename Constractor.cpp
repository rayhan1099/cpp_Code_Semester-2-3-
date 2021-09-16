# include <iostream >
using namespace std ;
class myclass
{
int a, b;
public :
myclass ( int x, int y);
void show ();
};
myclass :: myclass ( int x=0, int y=0)
{
cout << "In constructor \n";
a = x;
b = y;}
void myclass :: show ()
{
cout << a<< " "<<"\n"<< b << "\n";
}
int main ()
{
myclass ob (2,8);
ob. show ();
return 0;
}
