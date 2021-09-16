#include <iostream>
#include <string>
using namespace std;

struct student
{
   string name;
    int id;
    string roll;
void set_studentdataInfo();
void show_BasicInfo();
void show_Result();
};

int main()
{
    student s;
    cout << "Enter information," << endl;
    cout << "Type name: ";
    getline (cin, s.name);
    cout << "Enter Student Id: ";
    cin >> s.id;
    cout << "Enter roll: ";
     getline(cin,s.roll);

   cout << "\n Student Information," << endl;
    cout << "Name: " << s.name<< endl;
    cout << "Id: " << s.id << endl;
    cout << "Roll" <<s.roll<<endl;
    return 0;
}
