#include <iostream>
  using namespace std;
  int main()
 {int n,a[100],i;
  cout<<"Enter Array Size: "<<endl;
  cin>>n;
  cout<<"Enter Array Element: "<<endl;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
   int  *ptr;
    ptr=a;
    ptr=ptr+1;
   std::cout <<"value of second element of an array : "  << *ptr<<std::endl;
  return 0;
 }

