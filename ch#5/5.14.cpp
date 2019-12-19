#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;
 int main() {
 cout << fixed << setprecision(2);
 double principal{1000.00}; 
 double rate1{0.05}; 
 double rate2{0.06};
 double rate3{0.07};
 double rate4{0.08};
 double rate5{0.09};
 double rate6{0.10};

 cout << "Initial principal: " << principal << endl;
 cout << " Interest rate is: " << rate1 << endl;
 cout << " Interest rate is: " << rate2 << endl;
 cout << " Interest rate is: " << rate3 << endl;
 cout << " Interest rate is: " << rate4 << endl;
 cout << " Interest rate is: " << rate5 << endl;
 cout << " Interest rate is: " << rate6 << endl;


 cout << "\nYear" << "\tAmount on deposit 5%" <<  "\tAmount on deposit 6%" <<  "\tAmount on deposit 7%" << "\tAmount on deposit 8%" << "\tAmount on deposit 9%" << "\tAmount on deposit 10%" <<endl;
 
for (unsigned int year{1}; year <= 10; year++) {

double amount1 = principal * pow(1.0 + rate1, year);
double amount2 = principal * pow(1.0 + rate2, year);
double amount3 = principal * pow(1.0 + rate3, year);
double amount4 = principal * pow(1.0 + rate4, year);
double amount5 = principal * pow(1.0 + rate5, year);
double amount6 = principal * pow(1.0 + rate6, year);
 
cout << year <<"\t\t" << amount1 <<"\t\t" << amount2 <<"\t\t" << amount3 <<"\t\t" << amount4 <<"\t\t" << amount5 <<"\t\t" << amount6 << endl; 
}
 }

