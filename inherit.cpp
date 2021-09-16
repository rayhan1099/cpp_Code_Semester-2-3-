# include <iostream >
using namespace std ;
class base
{
int x;
public :
void setx ( int n) { x = n; }
void showx () { cout << x<<endl; }
};

class derived : public base
{
int y;
public :
void sety ( int n) { y = n; }
void showy () { cout << y<<endl; }
};
int main ()
{
derived ob;
ob. setx (50) ; 
ob. sety (100) ; 
ob. showx (); 
ob. showy ();
return 0;
}