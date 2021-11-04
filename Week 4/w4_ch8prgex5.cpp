//Write a program that prompts the user to input a string and outputs the string in uppercase letters. (Use a character array to store the string.)


#include <iostream>
#include <cstring> 
#include <cctype> 
  
using namespace std;

int main()
{
    char strname[100];

    int len;

    int i;

    cout << "Enter a string: ";
    cin.get(strname, 100);
    cout << endl;
    cout << "String in upper case letters is:" << endl;

    len = strlen(strname);
    for (i = 0; i < len; i++)
        cout << static_cast<char>(toupper(strname[i]));
    cout << endl;

    return 0;
}