#include<iostream>
using namespace std;
int main() {
   int pass,fail,result;

   for(int i=0;i<=10;i++) {

      cout << "Enter result (1 = pass, 2 = fail): ";
      cin >> result;
      
      if ( result == 1 ) {
         pass++;
      }
      else if ( result == 2 ) {
         fail++;
      }
      else
         cout << "Invalid result!\n";
   }
   cout<<"Passed: " << pass <<endl; 
   cout<<"Failed: " << fail << endl;

   if ( pass > 8 )
      cout << "Bonus to instructor!" << endl;
}
