#include<iostream>
using namespace std;
pwr(int a, int b){
	int result=1;
	while(b!=0){
		cout<<a<<" * "<<a<<"  --  ";
		result *=a;
		--b;
	}
	cout<<"\n Result is: "<<result;
}
int main(){
	int c,d;
	cout<<"Enter a integer(base): "<<endl;
	cin>>c;
	cout<<"Enter power of integer(exponent): "<<endl;
	cin>>d;
	pwr(c,d);
}
