//Write a value-returning function, isVowel, that returns the value true if a given character is a vowel and otherwise returns false.
#include <iostream>
using namespace std;

bool isVowel(char letter);//define function type (bool), function name (isVowel), and function parameters (char letter).

int main()
{
    char letter; //initiate the variables
    
    cout << "CIAT Vowel Checker.\nEnter a Letter: "; //ask the question
    cin >> letter; // have user enter the answer
    //compile
    cout << "0 means false (this is not a vowel).\n1 means true (this is a vowel).";
    cout << "\nLetter entered: " << letter;
    cout << "\nEvaluation: " << isVowel(letter) <<endl;
    return 0;
    
}

bool isVowel(char letter)
{
    switch (letter)//A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each case.
    {
        case 'A'://single quotes ' to refer to single characters and double quotes for strings
        case 'a':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            return true; //If condition evaluates to the value that is equal to the value of one of constant-expressions, then control is transferred to the statement that is labeled with that constant-expression.
        default: //If condition evaluates to the value that doesn't match any of the case: labels, and the default: label is present, control is transferred to the statement labeled with the default: label.
        return false;
    }
}

