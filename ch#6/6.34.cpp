#include<iostream>
using namespace std;
num(int a){
	int b=9;
	if(a<b){
		cout<<"too low";
	}else if(a>b){
		cout<<"too high";

	}
}

main(){
		cout<<"I have a number between 1 and 20\nCan you guess my number?\ntype your first guess.\n";
	int a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
		
	while(a!=5){
		num(a);
	cout<<"Enter a number:"<<endl;
	cin>>a;
	}
		cout<<" Excellent! You guessed the number!";

}
