
#include<bits/stdc++.h>
using namespace std;


int main(void) 
{
	int a[5];//Uninitialized Arrays 
	int b[5] = {1};
	int c[5] = {1,2,3,4,5};
    int i;  
    cout<<"Array a:"<<endl;
	for( i=0; i<5; i++ )
		cout<<"Arr["<<i<<"]: "<<a[i]<<endl;
	cout<<"Array b: "<<endl;
	for( i=0; i<5; i++)
    cout<<"Arr["<<i<<"]: "<<b[i]<<endl;
	cout<<"Array c: "<<endl;
	for( i=0; i<5; i++)
		cout<<"Arr["<<i<<"]: "<<c[i]<<endl;
   return 0;
}