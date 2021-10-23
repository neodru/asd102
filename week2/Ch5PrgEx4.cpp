/*
To make telephone numbers easier to remember, some companies use letters 
to show their telephone number. For example, using letters, the telephone 
number 438-5626 can be shown as GET LOAN. In some cases, to make a 
telephone number meaningful, companies might use more than seven letters.
 For example, 225-5466 can be displayed as CALL HOME,
 which usesm eight,letters. Write a program that prompts.the 
 user to enter a telephone number expressed in letters and
 outputs the corresponding telephone number in digits. If the user enters more than seven letters, 
 then process only the first seven letters. Also output the - (hyphen)
  after the third digit. Allow the user to use both uppercase and lowercase letters 
  as well as spaces between words. Moreover, your program should process as many 
  telephone numbers as the user wants.
*/

#include std
// #include <iostream>
// #include <string>

// using namespace std;
 
int main()
{
	char letter;
    int noOfLetters;
    char response;

    cout << "Enter Y/y to convert a telephone number " 
         << "form letters to digits.\n"
         << "Enter any other letter to terminate the program." << endl;

    cin >> response;
 while (response == 'Y' || response == 'y')
    {

        cout << "Enter a telephone number using letters: ";
        cin >> letter;
        cout << endl;

        noOfLetters = 0;//

		cout << "The corresponding telephone number is: \n";

        while (noOfLetters < 7)
        {
            noOfLetters++;

            switch (letter) //reference page 227 switch strucutres- gives the computer the power to choose from amomg the many alternatives
            {
            case '0':
            cout << '0'; 
                break;
            case '1':
            cout << '1'; 
                break;
            case 'a': //When the value of the expression is matched against a case value (also called a label), the statements execute until either a break statement is found or the end of the switch structure is reached. page 228
            case 'b': 
            case 'c':
	        case 'A': //If the value of the expression does not match any of the case values, the statements following the default label execute. If the switch structure has no default label and if the value of the expression does not match any of the case values, the action of the switch statement is null.
            case 'B':
	        case 'C':
            case '2': 
                cout << '2'; 
                break;//  A break statement causes an immediate exit from the switch structure.
            case 'd': 
            case 'e': 
            case 'f':
            case 'D': 
            case 'E':
            case 'F': 
            case '3':
                cout << '3';
                break;
            case 'g': 
            case 'h': 
            case 'i':
            case 'G': 
            case 'H':
            case 'I': 
            case '4':
                cout << '4';
                break;
            case 'j': 
            case 'k': 
            case 'l':
            case 'J': 
            case 'K':
            case 'L':
            case '5': 
                cout << '5';
                break;
            case 'm': 
            case 'n': 
            case 'o':
            case 'M': 
            case 'N':
            case 'O': 
            case '6':
                cout << '6';
                break;
            case 'p': 
            case 'q': 
            case 'r': 
            case 's':
            case 'P': 
            case 'Q': 
            case 'R':
            case 'S':
            case '7': 
                cout << '7';
                break;
            case 't': 
            case 'u': 
            case 'v':
            case 'T': 
            case 'U':
            case 'V':
            case '8': 
                cout << '8';
                break;
            case 'w': 
            case 'x': 
            case 'y': 
            case 'z':
            case 'W': 
            case 'X': 
            case 'Y':
            case 'Z':
            case '9': 
                cout << '9';
            }
            if (noOfLetters == 3)//when the number of letter hits 3 digits, add the dash '-'
                cout << '-';
            cin >> letter;
        }

        cin.ignore(100, '\n');

        cout << "\nTo process another telephone number, enter Y/y \n"
             << "Enter any other letter to terminate the program." << endl;
	    cin >> response;
        cout << endl;
	   }//end while
}