#include "student.hpp"

// Friend function to print a student's private data
void printStudent(Student s)
{
    // Print student ID
    cout << "ID: " << s.sid << endl;
    
    // Print student name
    cout << "Name: " << s.sname << endl;
    
    // Print each score in the scores vector
    cout << "Scores: ";
    for (double score : s.scores)
        cout << score << " ";
    cout << endl;
}

// Friend function to compare total scores of two students
int greaterScore(Student s1, Student s2)
{
    double sum1 = 0, sum2 = 0;  // Variables to hold the total scores of each student
    
    // Calculate the total score for the first student
    for (double score : s1.scores)
        sum1 += score;
    
    // Calculate the total score for the second student
    for (double score : s2.scores)
        sum2 += score;
    
    // Return 1 if the first student has a higher total score, otherwise 0
    return sum1 > sum2 ? 1 : 0;
}