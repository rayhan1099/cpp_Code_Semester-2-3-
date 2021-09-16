
#include<bits/stdc++.h>
using namespace std;
class Student {
   public:
    float age;
    Student(float a) {
        age = a;
    }
};

void calculateAverage(Student s1, Student s2) {
	cout<<"Student1 Age: "<<endl;
	cout<<s1.age<<endl;
	cout<<"Student2 Age: "<<endl;
	cout<<s2.age<<endl;
    float average = (s1.age + s2.age) / 2;

   cout << "Average Age = " << average << endl;

}
int main() {
	float a,b;
	cout<<"Enter Student1 Age: "<<endl;
	cin>>a;
	cout<<"Enter Student2 Age: "<<endl;
	cin>>b;
    Student student1(a), student2(b);
     calculateAverage(student1, student2);
    return 0;
}