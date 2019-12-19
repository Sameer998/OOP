#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e,f;
	cout<<"Enter 5 numbers: ";
	cin>>a;
	
    f = a % 10;
    e = (a % 100)/10;
    d = (a % 1000)/100;
    c = (a % 10000)/1000;
    b = (a % 100000)/10000;
    
    if(f==b && e==c){
    	cout<<"Number in palidrome: "<<endl;
	}
	else{
		cout<<"Number in palidrome: "<<endl;
	}
}
