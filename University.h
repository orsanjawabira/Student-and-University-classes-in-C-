#pragma once

// University class definition

class University {
public:
    void set_Stu(Student x[]) {          // Sets the student array
        for (int i = 0; i < 5; ++i) {
            Sooner[i] = x[i];
        }
    }
    float GPA_Mean() {                   // Calculates the mean GPA
        float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += Sooner[i].get_GPA();
        }
        return total / 5;
    }
    float GPA_Max() {                    // Finds the max GPA
        float maxGPA = Sooner[0].get_GPA();
        for (int i = 1; i < 5; ++i) {
            if (Sooner[i].get_GPA() > maxGPA) {
                maxGPA = Sooner[i].get_GPA();
            }
        }
        return maxGPA;
    }
    float GPA_Min() {                    // Finds the min GPA
        float minGPA = Sooner[0].get_GPA();
        for (int i = 1; i < 5; ++i) {
            if (Sooner[i].get_GPA() < minGPA) {
                minGPA = Sooner[i].get_GPA();
            }
        }
        return minGPA;
    }
    University() {                       // Constructor initializing all students
        for (int i = 0; i < 5; ++i) {
            Sooner[i].reset();
        }
    }

private:
    Student Sooner[5]; // Array of 5 Student objects
};
