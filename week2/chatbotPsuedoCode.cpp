#include <iostream>
#include <iomanip>
#include <ifstream>

using namespace std;

int main()
{
    string fname, lname, phoneNum, customerQuery, query, queryAnswer
    ifstream inputfile;
    inputfile.open (Query.text); 
    cout << "Hello there, thank for reaching chat support, I'm Dru from San Diego, 
    \n to get started  may I have your first and last name on the account 
    \n followed by the phone number on file?" << endl; 
    
    cout << "First Name: " << endl;
    cin >> fname;

    cout << "Last Name: " << endl;
    cin >> lname;

    cout << "Phone Number: " << endl;
    cin >> phoneNum;

    cout << "Thank you for that information" << fname << endl;

    cout << "How may I assist you today?" << endl;
    cin >> customerQuery; //customer inputs their queryg

   bool check(string input) // checks to see if customerQuery matches a previously asked question.
   {
       list<question>::iterator it;
	it = questionList.begin();

	for (it; it != questionList.end(); it++)
	{
		if (input == it->m_getQuery())
		{
			return true; // if true providre answer 
		}
	}
	return false; // if false place novel question in query list and transfer to actual customer service rept. and place
   }

   


    



}