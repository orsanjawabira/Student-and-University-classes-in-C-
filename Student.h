#pragma once
#include <iostream>

using namespace std;

class Student {
public:
    void set_SID(int x) { SID = x; }     // Sets the student ID
    void prt_SID() { cout << SID; }      // Prints the student ID
    void set_GPA(float y) { GPA = y; }   // Sets the student GPA
    void prt_GPA() { cout << GPA; }      // Prints the student GPA
    void reset() { SID = -1; GPA = -1; } // Resets the student ID and GPA to -1
    float get_GPA() { return GPA; }      // Returns the student GPA
    Student() : SID(-1), GPA(-1) {}      // Constructor initializing SID and GPA to -1

private:
    int SID;   // Student ID
    float GPA; // Student GPA
};
