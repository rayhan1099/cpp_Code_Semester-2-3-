# include <iostream >
using namespace std ;
class samp
{
int i, j;
public :
samp ( int a, int b);
int divisible ();
};
samp :: samp ( int a, int b)
{
i = a;
j = b;
}
inline int samp :: divisible ()
{
return !(i%j);
}
int main (){
samp ob1 ( 20, 2) , ob2 (45 , 3);
if( ob1 . divisible ())
cout << "20 divisible by 2\n";
if( ob2 . divisible ())
cout << "45 divisible by 3\n";
return 0;
}
