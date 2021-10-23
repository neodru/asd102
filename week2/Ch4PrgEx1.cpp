/*
Write a program that prompts the user to input a number. 
The program should then output the number and a message saying
whether the number is positive, negative, or zero.
*/

#include <iostream>

using namespace std;

int main ()
{
    int number;

    cout << "Input a number: ";
    cin >>  number;
    cout << "This number " ;

    if (number > 0)
        cout << number << " is a positive number." << endl;
    else if (number < 0 )
        cout << " this is a negative number." << endl;
    else 
        cout << " is a zero." << endl;

        

    return 0;
        

}

