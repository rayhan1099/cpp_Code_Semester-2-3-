# include <iostream >
# include <cstring >
using namespace std ;
struct student
{
student( double b, char *n);
void show ();
private :
double balance ;
char name [40];
};
student:: student( double b, char *n)
{
balance = b;
strcpy (name , n);
}
void student :: show ()
{
cout << " Name : " << name ;
cout << ": $ " << balance ;if( balance <0.0)
cout << "**";
cout << "\n";
}
int main ()
{
student acc1 (500.12 , "Rayhan");
student acc2 ( -50.34 , "Programmer");
acc1 . show ();
acc2 . show ();
return 0;
}
