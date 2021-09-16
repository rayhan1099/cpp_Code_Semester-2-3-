#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string temp;
        cin>>temp;
        temp+=')';
        string a="";
        stack<char>am;
        am.push('(');
        int i=0;
        int j=0;
        for(i=0;i<temp.length();i++)
        {
            if((temp[i]>='A' and temp[i]<'Z') or (temp[i]>='a' and temp[i]<='z') or (temp[i]>='0' and temp[i]<='9'))
            {
                a+=temp[i];
            }
            else if(temp[i]=='(')
                am.push(temp[i]);
            else if(temp[i]=='+' or temp[i]=='-' or temp[i]=='*' or temp[i]=='/' or temp[i]=='^')
            {
                while(!am.empty())
                {
                     if(am.top()=='^')
                    {
                        a+=am.top();
                        am.pop();
                    }
                    else if((am.top()=='*' or am.top()=='/') and temp[i]!='^')
                    {
                        a+=am.top();
                        am.pop();
                    }
                    else if((am.top()=='+' or am.top()=='-') and temp[i]!='^' and temp[i]!='*' and temp[i]!='/')
                    {
                        a+=am.top();
                        am.pop();
                    }
                    else
                    {
                        am.push(temp[i]);
                        break;
                    }
                }
            }
            else if(temp[i]==')')
            {
                while(!am.empty() and am.top()!='(')
                {
                    a+=am.top();
                    am.pop();
                }
                am.pop();
            }
        }
       std::cout<<a<<endl;
    }
    return 0;
}