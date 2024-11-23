#include<bits/stdc++.h>

using namespace std;

int main(){
   
  //  string s = "Hello";
   
  //  s.size();
   
  //   cout << s.size() << endl;
   
   
    string s = "Hello";
    
    cout << s << endl;
    
    s.resize(3);
    // resize the string and fill with 'a'
    s.resize(10, 'a');
    
    cout << s << endl;
    
    s.clear();
    cout << s.size() << endl;
    
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
   
   
   
  return 0;
}