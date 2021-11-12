/*
Chapter 9 defined the struct studentType to implement 
the basic properties of a student. Define the class studentType
with the same components as the struct studentType, 
and add member functions to manipulate the data members. 
(Note that the data members of the class studentType must be private.) 
Write a program to illustrate how to use the class studentType.
*/

\
#include <iostream> 
#include <string>
#include <iomanip>
#include "studentType.h"

using namespace std;

void studentType::setData(string fn, string ln, char grade, 
                          int tScore, int prgScore, double gp)
{
    firstName = fn;
    lastName = ln;
    testScore = tScore;
    programmingScore = prgScore;
    setGrade();
    GPA = gp;
}

void studentType::setFirstName(string fn)
{
    firstName = fn;
}

void studentType::setLastName(string ln)
{
    lastName = ln;
}
void studentType::setGrade()
{
    int score = (testScore + programmingScore) / 2;

    if (score >= 90)
        courseGrade = 'A';
    else if (score >= 80)
        courseGrade = 'B';
    else if (score >= 70)
        courseGrade = 'C';
    else if (score >= 60)
        courseGrade = 'D';
    else
        courseGrade = 'F';
}

void studentType::setTestScore(int tScore)
{
    testScore = tScore;
}

void studentType::setProgScore(int prgScore)
{
    programmingScore = prgScore;
}

void studentType::setGPA(double gp)
{
    GPA = gp;
}


string studentType::getFirstName() const
{
    return firstName;
}

string studentType::getLastName() const
{
    return lastName;
}

char studentType::getGrade() const
{
    return courseGrade;
}

int studentType::getTestScore() const
{
    return testScore;
}

int studentType::getProgScore() const
{
    return programmingScore;
}

double studentType::getGPA() const
{
    return GPA;
}

void studentType::print() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Grade: " << courseGrade << endl;
    cout << "Test score: " << testScore << endl;
    cout << "Programming score: " << programmingScore << endl;
    cout << "GPA: " << GPA << endl;
}


studentType::studentType(string fn, string ln, char grade, 
                         int tScore, int prgScore, double gp)
{
    firstName = fn;
    lastName = ln;
    testScore = tScore;
    programmingScore = prgScore;
    setGrade();
    GPA = gp;
}