#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
 

int a, b;
cin >> a >> b;

// min and max are functions from algorithm library
 cout << min(a,b) << " " << max(a,b) << endl;
 
 // min and max are functions from algorithm library
 cout << min({ 10, 20 ,545,12,5,4,41,21}) << " " << max({ 10, 20 ,545,12,5,4,41,21}) << endl;
 

//swap function from algorithm library

swap(a,b);
 
cout << a << " " << b << endl; 

    return 0;
}