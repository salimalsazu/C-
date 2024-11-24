#include<bits/stdc++.h>

using namespace std;


class Cricketer {
    public:
    int jersey;
    string country;
    
    //constructor
    Cricketer(int jersey, string country){
      this->jersey = jersey;
      this->country = country;
    }
    
    
};




int main(){
   
  Cricketer * dhoni =  new Cricketer(10, "India");
   
   
    Cricketer * kohli = new Cricketer(18, "India");
 
 //keep with dereference 
 *kohli = *dhoni;

 
 delete dhoni;
 
 cout << kohli->jersey << " " << kohli->country << endl;   
 
   
   
   
   
   
   
  return 0;
}