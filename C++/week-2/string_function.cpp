#include<bits/stdc++.h>

using namespace std;


class Student{
  
  public:
    string name;
    int roll;
    int math;
    int english;
    
    
    Student(string name, int roll, int math, int english){
      this->name = name;
      this->roll = roll;
      this->math = math;
      this->english = english;
      
    }
    
    void hello(){
      cout << "Hello from " << name << endl;
    }
    
    void total(){
      cout << "Total marks: " << math + english << endl;
    }  
      
};


int main(){
   
   Student salim("Salim Al Sazu", 101, 90, 90);
    
    // salim.hello();
  
    //  cout << salim.name << " " << salim.roll << endl;
     
     Student rahim("Rahim", 102, 80, 90);
     
    //  cout << rahim.name << " " << rahim.roll << endl;
     
    //  rahim.hello();
     
     
     
     salim.total();
      rahim.total();
      
   
  return 0;
}