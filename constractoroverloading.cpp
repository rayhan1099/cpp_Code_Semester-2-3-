#include<bits/stdc++.h>
using namespace std;
 
class Numbersystem
{
private:
int i,j;
int decimal, binary;
int decimal1, binary1;
int decimal2, binary2;
public :
Numbersystem(int n)
{
decimal=n;
i=1;j=n,binary=0;
for(j=n;j>0;j=j/2)
{
binary=binary+(n%2)*i;
i=i*10;
n=n/2;
}
cout<<"binary number:"<<binary<<endl;
}
Numbersystem(int n1,int n2)
{
decimal1=n1;
decimal2=n2;
i=1;j=n1,binary=0;
for(j=n1;j>0;j=j/2)
{
binary1=binary+(n1%2)*i;
i=i*10;
n1=n1/2;}
cout<<"binary number:"<<binary1<<endl;
i=1;
for(j=n2;j>0;j=j/2)
{
binary2=binary+(n2%2)*i;
i=i*10;
n2=n2/2;
}
cout<<"binary number:"<<binary2<<endl;
}
};
int main()
{
int option;
cout<<"Enter 1 FOR Single parameter Constructor"<<endl;
cout<<"Enter 2 FOR Multiple Paramter construcor"<<endl;
cin>>option;
if(option==1)
{
cout<<"You Have Slected Single Paramater  Constructor."<<endl<<endl;
int n;
cout<<"Enter a Decimal Number to convert into BINARY Number : "<<endl;
cin>>n;
Numbersystem a(n);
}
else if(option==2)
{
cout<<"You Have slected Multiple Paramater Constructor"<<endl;
int n1,n2;
cout<<"Enter First Decimal No to convert into BINARY No: "<<endl;
cin>>n1;
cout<<"Enter Second Decimal No to convert into BINARY No: "<<endl;
cin>>n2;
Numbersystem a(n1, n2);
}
else
cout<<"invalid Input "<<endl;
}