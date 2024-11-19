#include<bits/stdc++.h>

using namespace std;

class Student
{
  
  public:
  int roll;
  int cls;
  double gpa;
  
  Student (int r, int c, double g){
    roll = r;
    cls = c;
    gpa = g;
  }
  
};


// int main(){
   
//    Student rahim(45, 10, 3.5);
   
//    Student karim( 46, 11, 3.6);

   
//     cout << "Roll: " << rahim.roll << "  " <<  "Class " << rahim.cls << " " << "Gpa " << rahim.gpa  << endl;
    
//     cout << "Roll: " << karim.roll << "  " <<  "Class " << karim.cls << " " << "Gpa " << karim.gpa  << endl;
   
//   return 0;
// }



int main(){
   
  int r, c;
  double g;
  
  cin >> r >> c >> g;
   
   
   Student rahim(r, c, g);
   
  //  Student karim( );

   
    cout << "Roll: " << rahim.roll << "  " <<  "Class " << rahim.cls << " " << "Gpa " << rahim.gpa  << endl;
    
    // cout << "Roll: " << karim.roll << "  " <<  "Class " << karim.cls << " " << "Gpa " << karim.gpa  << endl;
   
  return 0;
}