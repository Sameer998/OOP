#include <iostream>// header
using namespace std;
int main (){// main function
	int n;//     body(Reverse order digits)
int a,b,c,d;
cout<<"Enter four digits";
cin>>n;
a=n/10000;
n=n%10000;
b=n/1000;
n=n%1000;
c=n/100;
n=n%100;
d=n/10;
n=n%10;
cout<<"number in reverse order"<<n<<d<<c<<b<<a;

			
	return 0;
}
