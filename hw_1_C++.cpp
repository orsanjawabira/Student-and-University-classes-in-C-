//Orsan Jawabira
//CS 2413
//Data Structures

#include "Student.h"
#include "University.h"
#include <iostream>

using namespace std;

int main() {
    Student x[5]; //array of 5 student onject
    University OU; 
    int sid; //student ID variable
    float gpa; // GPA variable 

    // test 1 constructor function
    //print function and header files
    for (int i = 0; i < 5; i++) {
        x[i].prt_SID(); cout << ' ';
        x[i].prt_GPA(); cout << endl;
    }

    // task 3 input
    //takes student ID and GPA of 5 students as input
    //assigns them to x[5]
    for (int i = 0; i < 5; i++) {
        cin >> sid >> gpa;
        x[i].set_SID(sid);
        x[i].set_GPA(gpa);
    }

    // test 2 
    //tests set function
    for (int i = 0; i < 5; i++) {
        x[i].prt_SID(); cout << ' ';
        x[i].prt_GPA(); cout << endl;
    }

    // test 3 
    //tests university class
    OU.set_Stu(x);
    OU.GPA_Mean(); cout << ' ';
    OU.GPA_Max(); cout << ' ';
    OU.GPA_Min(); cout << endl;

   

    // test 4
    //tests reset function
    for (int i = 0; i < 5; i++) {
        x[i].reset();
        x[i].prt_SID(); cout << ' ';
        x[i].prt_GPA(); cout << endl;
    }

    return 0;
}

