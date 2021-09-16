#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,num,first,last,mid;
    cout<<"Enter how many data elements you want to enter :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter your Sorted desired elements :" <<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Search Element: "<<endl;
    cin>>num;
    first=0;
    last=n;
    mid = (first+last)/2;
    while(first<=last)
    {
        if(a[mid]<num) 
            first = mid+1;
        else if(a[mid]==num)
        {
            cout<<"Number found at Position: "<<mid+1<<endl;
            break;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
        cout<<"Number is not found in the Array"<<endl;
    return 0;
}