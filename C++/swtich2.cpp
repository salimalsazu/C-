#include<iostream>
using namespace std;

int main()
{
 
int x;
cin >> x;

//Check if the number is even or odd

switch(x %2 ){
    case 0:
      cout << "Even" << endl;
      break;
    
    case 1:
      cout << "Odd" << endl;
      break;
}
 

    return 0;
}