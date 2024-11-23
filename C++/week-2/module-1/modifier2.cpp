#include<bits/stdc++.h>

using namespace std;

int main(){
   
   string s = "Hello";
   
  //  string s2 = s;
   
   s.assign("Hi How are you ?");
   s.erase(0, 3);
  
  // s.replace(0, 3, "hey"); 
  // s.replace(4, 0, "salim"); 
  s.insert(0, "Hey");
  
   
    cout << s << endl;
   
   
   
   
  return 0;
}