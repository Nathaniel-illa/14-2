#include <iostream>
#include "student.hpp"
using namespace std;

// Constants for the number of students and courses
const int N = 5;
const int NUM_COURSES = 3;

int main()
{
    // Array of student names for initializing objects
    string names[N] = {"John", "Greg", "Bill", "Amy", "Kurt"};
    
    // Array to hold Student objects
    Student s[N];
    
    // Vector to temporarily store scores for each student
    vector<double> sc(NUM_COURSES);

    // Initialize each Student object with unique ID, name, and scores
    for (int i = 0; i < N; i++)
    {
        // Assign scores for the student based on the loop index
        sc.assign(NUM_COURSES, i * 100.0);
        
        // Create a Student object with ID, name, and scores
        s[i] = Student((i + 1) * 10, names[i], sc);
    }

    // Print details of each Student object using printStudent friend function
    for (int i = 0; i < N; i++)
        printStudent(s[i]);

    // Compare the scores of two specific students and print the result
    if (greaterScore(s[4], s[0]))
    {
        cout << "s[4] has a greater score than s[0]." << endl;
    }
    return 0;
}