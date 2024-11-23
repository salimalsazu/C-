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

   Student* karim =   new Student (10, 5, 3.5);
    
    // We can write (*p).roll as p->roll
    
    cout << "Roll: " << (*karim).roll << "  " <<  "Class " << (*karim).cls << " " << "Gpa " << (*karim).gpa  << endl;
   
    
    
   
  return 0;
}