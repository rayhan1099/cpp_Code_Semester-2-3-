#include<bits/stdc++.h>
using namespace std;  
int main ()  
{  
    int a[100],n,i,j,temp;   
    cout<<"Enter how many data elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter your desired elements :"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i = 0; i<n; i++)  
    {  
        for(j = i+1; j<n; j++)  
        {  
            if(a[j] < a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   
        }   
    }   
    cout <<"Sorted Element: "<<endl;  
    for(i = 0; i<n; i++)  
    {  
        cout <<a[i]<<endl;  
    }  
    return 0;  
}  