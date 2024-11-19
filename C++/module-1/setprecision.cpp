#include<iostream>
#include<iomanip>  // for setprecision
using namespace std;

int main()
{

  double d = 23.45676 ;

  // after decimal point 2 digits using setprecision(2)
  cout << fixed << setprecision(2) << d << endl;


    return 0;
}

