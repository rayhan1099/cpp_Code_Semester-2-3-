#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string main_string,R;
    char delete_char;
    int p;
    int Digit;
    cout<<"Enter 1 for Traversal into program"<<endl;
    cout<<"Enter 2 for String Length into program"<<endl;
    cout<<"Enter 3 for Insert Any position into program"<<endl;
    cout<<"Enter 4 for Insert First position into program"<<endl;
    cout<<"Enter 5 for Insert Last position into program"<<endl;
    cout<<"Enter 6 for Enter a Character From Your Entered String  to be deleted into program"<<endl;
    cout<<"Enter 7 for Update Any Position for A  Character From Your Entered String"<<endl;
    cout<<"Enter 8 Search Any Charecter From Your Enterd String"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>Digit;
    cout << "Enter the string : "<<endl;
    cin >> main_string;
    cout<<"You entered : "<<endl;
    cout<<main_string<<endl;
      int i=0, count=0;  
    while(main_string[i]!='\0') 
    {
        count++;       
        i++;            
    }
    switch(Digit){
        case 1:{
            cout<<"After Traversal New String Is: "<<endl;
        
    for (i = 0; i < count; i++) {
  
        cout<< main_string[i]<< " "<<endl;}
        break;
    }
    case 2:{
    cout<<"Length is:"<<count<<endl;
    break;
    }
    case 3:{
    cout<<"Enter Insert in a Position: "<<endl;
    cin>>p;
    cout<<"Enter A String That You want to Insert: "<<endl;
    cin>>R;
    cout<<"After insertion, String value is :"<<main_string.insert(p,R)<<endl;
    break;
    }
    case 4:{
    
     cout<<"First Insert : "<<endl;
     cout<<"Enter A String That You want to Insert: "<<endl;
     cin>>R;
     cout<<"After insertion, String value is :"<<main_string.insert(0,R)<<endl;
    break;
    }
    case 5:{ 
     cout<<"Last Insert "<<endl;
     cout<<"Enter A String That You want to Insert: "<<endl;
    cin>>R;
    main_string += R;
    cout<<"After insertion, String value is :"<<main_string<<endl;
    break;
    }
    case 6:
    {
        cout << "Enter the character to be deleted : "<<endl;
    cin >> delete_char;
    main_string.erase( remove(main_string.begin(), main_string.end(), delete_char) , main_string.end() );
    cout << "String after deleting the character (" << delete_char << ") : "<<endl << main_string <<endl;
    break;
}
case 7:{ string m;
       int k;
   cout<<"Enter A Position That You Want To Update: "<<endl;
    cin>>k;
    cout<<"Enter A Charecter That You Want To Update: "<<endl;
    cin>>m;
    main_string.replace(k,1,m);   
cout << "After Updated The New String is :"<<main_string<<endl;
break;
}
case 8:
{ string j;
cout<<"Enter A Charecter That is You Want Search From Your Entered String"<<endl;
 
 cin>>j;

  cout<< "position of the charecter is :" << main_string.find(j);
  break;
}
default:
       {cout<<"You insert a wrong number"<<endl;
       break;
       }

    }
    
    return 0;

}
