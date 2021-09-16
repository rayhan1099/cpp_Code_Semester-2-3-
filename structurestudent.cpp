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
    
    cout << "Enter Name: ";
    cin.get(a.name, 50);
    cout << "Enter ID: ";
    cin >> a.Id;
    cout << "Enter Phone: ";
    cin >> a.phone;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << a.name << endl;
    cout <<"ID: " << a.Id << endl;
    cout << "Phone: " << a.phone;

    return 0;
}
