//The Programming Example: Pig Latin Strings converts a string into the pig Latin form, but it processes only one word. Rewrite the program so that it can be used to process a text of an unspecified length. If a word ends with a punctuation mark, in the pig Latin form, put the punctuation at the end of the string. For example, the pig Latin form of Hello! is ello-Hay!. Assume that the text con- tains the following punctuation marks: , (comma), . (period), ? (question mark), ; (semicolon), and : (colon). (Your program may store the output in a file.)
//Example probem is on page 505
/*
1. Get str.
2. Find the pig Latin form of str by using the function pigLatinString.
3. Output the pig Latin form of str.
*/

#include <iostream> 
#include <string>
#include <fstream>

using namespace std;
// reference page 509
//list out the functions you'l be using 
bool isVowel(char ch); 
string rotate(string pStr);
string pigLatinString(string pStr);

int main() 
{
    string str;
    
    cout << "Enter a string: ";
    cin >> str;
    cout << endl;
    cout << "The pig Latin form of " << str << " is: "
         << pigLatinString(str) << endl;
    return 0; 
}
//Place the definitions of the functions isVowel, rotate, and
//pigLatinString and as described previously here.

bool isVowel(char ch)// page 506 
{
    switch (ch)// checks to see if character  is a vowel. 
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}
//Ref page 507 This function takes a string as a parameter, removes the first character of the string, and places it at the end of the string. This is done by extracting the substring, start- ing at position 1 (which is the second character) until the end of the string, and then adding the first character of the string. The new string is returned as the value of this function. Essentially, the definition of the function rotate is:
string rotate(string pStr)
{
    string::size_type len = pStr.length();
    string rStr;
    
    rStr = pStr.substr(1, len - 1) + pStr[0];
    return rStr;
}
/*Ref 507 This function takes a string, pStr, as a parameter and returns the pig Latin form of pStr. Suppose pStr denotes the string to be converted to its pig Latin form. There are three possible cases: pStr[0] is a vowel, pStr contains a vowel and the first character of pStr is not a vowel, or pStr contains no vowels. Suppose that pStr[0] is not a vowel. Move the first character of pStr to the end of pStr. This process is repeated until either the first character of pStr has become a vowel or all the characters of pStr are checked, in which case pStr does not contain any vowels. This discussion translates into the following algorithm:
string pigLatinString(string pStr)
1. If pStr[0] is a vowel, add "-way" at the end of pStr.
2. Suppose pStr[0] is not a vowel.
3. Move the first character of pStr to the end of pStr. The second character of pStr becomes the first character of pStr. Now pStr may or may not contain a vowel. We use a bool variable, foundVowel, which is set to true if pStr contains a vowel and false otherwise.
a. Suppose that len denotes the length of pStr.
b. Initialize foundVowel to false.
c. If pStr[0] is not a vowel, move pStr[0] to the end of pStr by calling the function rotate.
d. Repeat Step b until either the first character of pStr becomes a vowel or all the characters of pStr have been checked.
4. Convert pStr into the pig Latin form.
5. Return pStr.
*/

string pigLatinString(string pStr)
{
    string::size_type len;
    
    bool foundVowel;
    
    string::size_type counter;
    
    if (isVowel(pStr[0]))
        pStr = pStr + "-way";// If pStr[0] is a vowel, add "-way" at the end of pStr.
    else
            {
                pStr = pStr + '-';// Suppose pStr[0] is not a vowel.
                pStr = rotate(pStr); //Move the first character of pStr to the end of pStr.
                len = pStr.length();
                foundVowel = false;
                for (counter = 1; counter < len - 1; counter++)//The second character of pStr becomes the first character of pStr.
                    if (isVowel(pStr[0]))// Now pStr may or may not contain a vowel. 
                    {
                        foundVowel = true;//We use a bool variable, foundVowel, which is set to true if pStr contains a vowel and false otherwise.
                        break;
                    }
                    else
                        pStr = rotate(pStr);
        
                if (!foundVowel)
                    pStr = pStr.substr(1, len) + "-way";
                else
                    pStr = pStr + "ay";
            }
    return pStr;
}
