/* Discussion Prompt:
As we learn in Chapter 4 on page 224, pseudocode or just pseudo, 
is an informal mixture of C++ and ordinary language. We use pseudo as a first step to outlining and refining a program we want to write.

For your initial discussion this week, describe a program you are 
interested in writing with C++. After providing your description, 
provide the pseudo code for the main part of your program.



The Psuedo Code could look somethign like this: 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string input;
    string name;

    cout << "Hello, this is Dru." << endl ;
    cout << "May I get your name?";
    cin >> name;
    cout << "Hello " + name + "!" << endl;

    return 0;



}



