//Write a program that prompts the user to input a sequence of characters and outputs the number of vowels. (Use the function isVowel written in Programming Exercise 2.)
//1. Prompt user to enter a sentence. 
//2. Complier counts number of vowels.
//3. Complier returns numnber of vowels.
#include <iostream>

using namespace std;

bool isVowel(char letter);//define function type (bool), function name (isVowel), and function parameters (char letter).

int main()
{
    char letter; //initiate the variables
    int vowelCount = 0; //vowelCount begins a 0
    
    cout << "CIAT Vowel Counter.\nType a word or setence:\n "; //ask the question
    
    cin.get(letter);//
    while (letter != '\n') // we use the \n because it will read, while the next character in letter does not equal a new line count, else stop. If we use another variable in place of \n it will never get to the else
	{
		if (isVowel(letter))
			vowelCount++;//adds 1 to the vowelCount 

		cin.get(letter);
	}

    //compile
    cout << "\nThe number of vowels is " << vowelCount <<endl;
    return 0;// does not return a bool because we do not call the function.

    
}

 bool isVowel(char letter)
{
    switch (letter)//A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each case.
    {
        case 'A'://single quotes ' to refer to single characters and double quotes for strings
        case 'a':
        case 'E':
        case 'e':
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

/*

*/