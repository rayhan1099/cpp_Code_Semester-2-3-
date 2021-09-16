#include<bits/stdc++.h>
using namespace std;
void move(int n,char A,char B,char C)
{
    static int c=1;
    if(n>1)
    move(n-1,A,C,B);
    cout<<c<<" "<<A<<"->"<<C<<endl;
    c++;
    if(n>1)
    move(n-1,B,A,C);
}
void move(int n)
{
    move(n,'A','B','C');
}
int main()
{
    int n;
    cin>>n;
    move(n);
    return 0;
}
