#include<iostream>
using namespace std;

int main()
{
 
int day;
cin >> day;

switch(day){
  case 1:
    cout << "Monday" << endl;
    break;
  case 2:
    cout << "Tuesday" << endl;
    break;
  case 3:
    cout << "Wednesday" << endl;
    break;
  default:
    cout << "Invalid day" << endl;
    break;
}
 

    return 0;
}