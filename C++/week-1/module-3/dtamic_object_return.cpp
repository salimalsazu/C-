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

Student* fun(){
  Student* karim =  new Student( 40, 11, 3.6);
 
  return karim;
}



int main(){
   
   Student* p = fun();
    
    
    // We can write (*p).roll as p->roll
    
    cout << "Roll: " << (*p).roll << "  " <<  "Class " << (*p).cls << " " << "Gpa " << (*p).gpa  << endl;
   
  return 0;
}