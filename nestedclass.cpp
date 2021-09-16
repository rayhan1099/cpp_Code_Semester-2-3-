#include<bits/stdc++.h>
using namespace std;
class student { 
        private: char name[100];
        int roll;
        public: void student_info();
        void display();
        class date { 
                private: int date, month, year;
                public: void getdate();
                void displaydate();
        }; 
};
 
void student::student_info() {
      cout<<"Enter A Student Information With Date Of Birth:"<<endl;
        cout << "Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Roll number: "<<endl;
        cin>>roll;
}
void student::display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
}
void student::date::getdate() {
        cout<<"Enter Birth Details: "<<endl;
        cout << "Enter Date: "<<endl;
        cin>>date;
        cout<<"Enter Month: "<<endl;
        cin>>month;
        cout<<"Enter Year: "<<endl;
        cin>>year;
}
void student::date::displaydate() {
        cout<<"Date: "<<date<<endl;
        cout<<"Month: "<<month<<endl;
        cout<<"Year: "<<year<<endl;
}
 
int main() {
        student x; 
        student::date y; 
        x.student_info();
        y.getdate();
        x.display();
        y.displaydate();
}