#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
  vector<int> v;
  vector<int>  v1;
  cout<<"Enter vector element:";
  int i,n;
  for(i=0;i<4;i++)
  {
      cin>>n;
      v.push_back(n);
  }

  cout<<"Enter second vector:";
  for(i=0;i<4;i++)
  {
      cin>>n;
      v1.push_back(n);
  }
  vector<int>::iterator it=v1.insert(v1.begin(),v.begin(),v.end());
  for(auto it=v1.begin();
  it!=v1.end();
  it++)
  {

    cout<<*it<<"\t";

  }

return 0;

}
