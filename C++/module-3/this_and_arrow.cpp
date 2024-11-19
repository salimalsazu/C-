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



int main(){
   
   Student rahim(45, 10, 3.5);
   
   Student karim( 46, 11, 3.6);

   
    cout << "Roll: " << rahim.roll << "  " <<  "Class " << rahim.cls << " " << "Gpa " << rahim.gpa  << endl;
    
    // cout << "Roll: " << karim.roll << "  " <<  "Class " << karim.cls << " " << "Gpa " << karim.gpa  << endl;
   
  return 0;
}