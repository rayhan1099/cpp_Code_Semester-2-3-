#include<bits/stdc++.h>
#include<string>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n Enter String:   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  //Concatenating String
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};