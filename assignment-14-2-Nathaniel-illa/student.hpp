#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
private:
    int sid;                     // Student ID
    string sname;                // Student name
    vector<double> scores;       // Vector to store student scores

public:
    // Default constructor
    Student() : sid(0), sname(""), scores(3, 0.0) {}

    // Parameterized constructor
    Student(int id, string name, vector<double>& sc) : sid(id), sname(name), scores(sc) {}

    // Getter functions
    int getID() const { return sid; }                       // Get the student's ID
    string getName() const { return sname; }                // Get the student's name
    vector<double> getScores() const { return scores; }     // Get the student's scores

    // Setter functions
    void setID(int id) { sid = id; }                        // Set the student's ID
    void setName(string name) { sname = name; }             // Set the student's name
    void setScores(vector<double>& sc) { scores = sc; }     // Set the student's scores

    // Friend functions
    friend void printStudent(Student s);                    // Friend function to print Student's private data
    friend int greaterScore(Student s1, Student s2);        // Friend function to compare scores of two students
};

#endif