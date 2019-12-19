#include <iostream>
 using namespace std;
 int main(){
 int a = 0;
 while ( a <= 12 ) {
 cout << ( a % 3 ? "--->" : "######" ) << endl;
 ++a;
 }
}

