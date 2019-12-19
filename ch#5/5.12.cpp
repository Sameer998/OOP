#include<iostream>
using namespace std;

int main(){
	int a,b=1;
	for(int i=3;i<=50;i++){
		a=i%3;
		if(a==0){
			b=b*i;
		
			cout<<b<<"\n";
		}
	}
	cout<<b<<"\n";
}
