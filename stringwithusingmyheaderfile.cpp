#include<bits/stdc++.h>
#include<string>
#include"Rayhan.h"
using namespace std;
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display_string();   //Displaying First String

        cout<<"\n\n Second String is          :  ";
        str2.display_string();  //Displaying Second String

        cout<<"\n ----------------------------------------------";
        str3=str1+str2;        
        cout<<"\n\n Concatenated String is :  ";
        str3.display_string();

        return 0;
}