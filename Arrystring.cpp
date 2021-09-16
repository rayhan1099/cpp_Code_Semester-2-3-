#include <iostream>
using namespace std;
struct Student
{
    char name[50];
    int Id;
    int phone;
};

int main()
{
    Student a;
    
    cout << "Enter Name: "<<endl;
    cin.get(a.name, 50);
    cout << "Enter ID: "<<endl;
    cin >> a.Id;
    cout << "Enter Phone: "<<endl;
    cin >> a.phone;

    cout << "Displaying Information." << endl;
    cout << "Name: " << a.name << endl;
    cout <<"ID: " << a.Id << endl;
    cout << "Phone: " << a.phone;

    return 0;
}
