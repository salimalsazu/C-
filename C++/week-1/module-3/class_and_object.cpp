#include<bits/stdc++.h>

using namespace std;



class Student

{
  public:
  char name[100];
  int roll;
  double gpa;  
  
  
  
};



// int main(){
   
//   Student a;
  
//   a.roll = 10;
//   a.gpa = 3.5;
//   char temp[100] = "Salim";
//   strcpy(a.name,temp);
  
//   cout << "Name: " << a.name << "  " <<  "Roll " << a.roll << " " << "Gpa " << a.gpa  << endl;    
   
//   return 0;
// }



// int main(){
   
//   Student a, b;
//   cin >> a.name >> a.roll >> a.gpa;
  
//   cin >> b.name >> b.roll >> b.gpa;

  
//   cout << "Name: " << a.name << "  " <<  "Roll " << a.roll << " " << "Gpa " << a.gpa  << endl;   
   
//   cout << "Name: " << b.name << "  " <<  "Roll " << b.roll << " " << "Gpa " << b.gpa  << endl;    
   
//   return 0;
// }


int main(){
   
  Student a, b;
  cin.getline(a.name,100);
  cin >> a.roll >> a.gpa;
  
  //Ignore Line I
  cin.ignore();
  
  //For Enter
  cin.getline(b.name,100);
  cin >> b.roll >> b.gpa;
  
  cout << "Name: " << a.name << "  " <<  "Roll " << a.roll << " " << "Gpa " << a.gpa  << endl;  
   
  cout << "Name: " << b.name << "  " <<  "Roll " << b.roll << " " << "Gpa " << b.gpa  << endl;   
   
  return 0;
}