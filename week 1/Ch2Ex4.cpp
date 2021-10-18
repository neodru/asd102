/*
Consider the following program segment: //include statement(s)
    //using namespace statement
int main() {
        //variable declaration
        //executable statements
        //return statement
}
a. Write a C11 statement that includes the header file iostream.
b. Write a C11 statement that allows you to use cin, cout, and endl
without the prefix std::.
c. Write C11 statement(s) that declare the following variables: num1,
num2, num3, and average of type int.
d. Write C11 statements that store 125 into num1, 28 into num2, and
-25 into num3.
e. Write a C11 statement that stores the average of num1, num2, and
num3 into average.
f. Write C11 statement(s) that output the values of num1, num2,
num3, and average.
g. Compile and run your program.*/


#include <iostream>

using namespace std; // a

int main()
{
// Variable Delarations 
	double num1; // c 
    double num2;  // c 
    double num3; // c
    double average; // c 
// Executable Statements 
    num1 = 75.35;  //d 
	num2 = -35.56;  //d 
	num3 = 15.76;  //d */
   // cout << (num1 + num2 + num3) / 3; average; //e
//Return Statements

    cout << "The Average of Three Numbers" << endl; //b
    cout << "Enter num1: "; cin >> num1; // f 
    cout << "Enter num2: "; cin >> num2; // f 
    cout << "Enter num3: "; cin >> num3; // f 
    average = (num1 + num2 + num3) / 3; //e
    cout << "The average is " << average << endl; 
	return 0; /* g */
}