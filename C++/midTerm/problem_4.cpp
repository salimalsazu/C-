// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
// Constraints

// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100
// Output Format

// Ouptut the information as asked in the question.
// Sample Input 0

// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40
// Sample Output 0

// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50






//answer


#include<bits/stdc++.h>

using namespace std;


class Student{
    public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        Student s[3];
        
        for (int i = 0; i < 3; i++) {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].total_marks;
        }
        
        int max_marks = 0;
        int max_id = 0;
        
        for (int i = 0; i < 3; i++) {
            if (s[i].total_marks > max_marks) {
                max_marks = s[i].total_marks;
                max_id = i;
            } else if (s[i].total_marks == max_marks) {
                if (s[i].id < s[max_id].id) {
                    max_id = i;
                }
            }
        }
        
        cout << s[max_id].id << " " << s[max_id].name << " " << s[max_id].section << " " << s[max_id].total_marks << endl;
    }
    
    return 0;
}


