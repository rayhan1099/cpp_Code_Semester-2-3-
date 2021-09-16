#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Digit;
    cout<<"Enter 1 for First Insertion into program"<<endl;
    cout<<"Enter 2 for Last Insertion into program"<<endl;
    cout<<"Enter 3 for Any Insertion into program"<<endl;
    cout<<"Enter 4 for First Deletion into program"<<endl;
    cout<<"Enter 5 for Last Deletion into program"<<endl;
    cout<<"Enter 6 for Deletion any element into program"<<endl;
    cout<<"Enter 7 for Traversing"<<endl;
    cout<<"Enter 8 for Update any element into program"<<endl;
    cout<<"Enter 9 for Search any element into program"<<endl;
    cout<<"Enter your choice : "<<endl;

    cin>>Digit;
    int i,pos,n,k,a[50],elem,num;
    cout<<"Enter how many data elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter your desired elements :" <<endl;
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    printf("You entered : ");
    for(i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    switch(Digit)
    {
    case 1 :
    {
        pos=1;
        cout<<"Enter the data element you want to insert :"<<endl;
        cin>>k;
        for(i=n-1; i>=pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=k;
        cout<<"Your new sequensce of elements is :"<<endl;
        for(i=0; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 2 :
    {
        pos=n+1;
        cout<<"Enter the data element you want to insert :"<<endl;
        cin>>k;
        for(i=n-1; i>=pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=k;
        cout<<"Your new sequensce of elements is :"<<endl;
        for(i=0; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 3 :
    {

        cout<<"Enter the postion where you want to insert the new element :"<<endl;
        cin>>pos;
        cout<<"Enter the data element you want to insert :"<<endl;
        cin>>k;
        for(i=n-1; i>=pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=k;
        cout<<"Your new sequensce of elements is :"<<endl;
        for(i=0; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 4:
    {
        pos=0;
        for(i=pos-1; i<=n-1; i++)
        {
            a[i]=a[i+1];
        }
        cout<<"Your new sequence of elements is :"<<endl;
        for(i=0; i<=n-2; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 5:
    {
        pos='/0';
        for(i=pos-1; i<=n-1; i++)
        {
            a[i]=a[i+1];
        }
        cout<<"Your new sequence of elements is :"<<endl;
        for(i=0; i<=n-2; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 6:
    {
        cout<<"Enter the postion of element you want to delete :"<<endl;
        cin>>pos;
        for(i=pos-1; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        cout<<"Your new sequence of elements is :"<<endl;
        for(i=0; i<=n-2; i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }

    case 7:
    {

        for(i=0; i<=n-1; i++)
        {
            cout<<a[i]<<" ";
        }

        break;
    }

    case 8:
    {

        cout<<"Enter the postion where you want to update the new element :"<<endl;
        cin>>pos;
        cout<<"Enter the data element you want to update :"<<endl;
        cin>>k;
        a[i]=k;
        for(i=n; i>pos; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=k;
        cout<<"Your new sequensce of elements is :"<<endl;
        for(i=0; i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        break;
    }
    case 9:
    {
        int t=0;

        cout<<"Enter Element to be Searched : ";
        cin>>num;
        for(i=0; i<n; i++)
        {
            if(a[i]==num)
            {
                t=1;
                pos=i+1;
                break;
            }
        }
        if(t==0)
        {
            cout<<"\n Element Not Found..!!";
        }
        else
        {
            cout<<"Element "<<num<<" Found At Position "<<pos;
        }
        break;
    }
    default:
       {cout<<"You insert a wrong number"<<endl;
       break;}

    }
    return 0;
}
