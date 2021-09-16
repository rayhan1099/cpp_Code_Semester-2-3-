#include<bits/stdc++.h>
#define    f(x)    x*x*x - 2*x - 5
#define ep 0.001
using namespace std;
int main()
{
	 float x0, x1, x2, f0, f1, f2 ;
	 int step = 1;
   cout<< setprecision(6)<< fixed;
	 cout<<"Enter first guess: ";
	 cin>>x0;
	 cout<<"Enter second guess: ";
	 cin>>x1;

	 do
	 {
	     f0 = f(x0);
		  f1 = f(x1);
          x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);

		  cout<<"Iteration-"<< step<<":\t x2 = "<< setw(10)<< x2<<" and f(x2) = "<< setw(10)<< f(x2)<< endl;
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;

		  step = step + 1;


	 }while(fabs(f2)>ep);

	 cout<< endl<<"Root is: "<< x2;

	 return 0;
}