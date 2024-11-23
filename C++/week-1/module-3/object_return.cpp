#include<bits/stdc++.h>

using namespace std;

class Student
{
  
  public:
  int roll;
  int cls;
  double gpa;
  
  //Constructor This can be used as a default parameter
  
  Student (int roll, int cls, double gpa){
    (*this).roll = roll;
    (*this).cls = cls;
    (*this).gpa = gpa;
  }
  
};

Student fun(){
  Student karim( 46, 11, 3.6);
  
  return karim;
}



int main(){
   
   Student rahim(45, 10, 3.5);
 
   Student obj = fun();
    
    cout << "Roll: " << obj.roll << "  " <<  "Class " << obj.cls << " " << "Gpa " << obj.gpa  << endl;
   
  return 0;
}