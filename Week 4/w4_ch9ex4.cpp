/*
Write a program to help a local restaurant automate its breakfast billing system. The program should do the following:

a. Show the customer the different breakfast items offered by the restaurant.

b. Allow the customer to select more than one item from the menu. 

c. Calculate and print the bill. 

Assume that the restaurant offers the following breakfast items
(the price of each item is shown to the right of the item):
Plain Egg        $1.45
Bacon and Egg    $2.45
Muffin           $0.99
French Toast     $1.99
Fruit Basket     $2.49
Cereal           $0.69
Coffee           $0.50
Tea              $0.75

Use an array menuList of type menuItemType, as defined in Programming Exercise 3. 
Your program must contain at least the following functions:
- Function getData: This function loads the data into the array menuList. 

- Function showMenu: This function shows the different items offered by the restaurant and tells the user how to select the items. 

- Function printCheck: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.) 


A sample output is:
Welcome to Johnny's Restaurant
Bacon and Egg    $2.45
Muffin           $0.99
Coffee           $0.50
Tax              $0.20
Amount Due       $4.14

Format your output with two decimal places. The name of each item in
the output must be left justified. You may assume that the user selects
only one item of a particular type.
*/

    
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NO_OF_ITEMS = 8;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize, 
                int cList[], int cListLength);
void makeSelection(int listSize, 
                   int cList[], int& cListLength);
bool isItemSelected(int cList[], int cListLength, int itemNo);

int main()
{
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS];
    int choiceListLength;

    ifstream inFile;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("Ch9_Ex4Data.txt");

    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
        return 1;
    }

    getData(inFile, menuList, NO_OF_ITEMS);
    showMenu(menuList, NO_OF_ITEMS);
    makeSelection(NO_OF_ITEMS, 
                  choiceList, choiceListLength);
    printCheck(menuList, NO_OF_ITEMS, 
               choiceList, choiceListLength);

    return 0;
}

void getData(ifstream& inFile, menuItemType mList[], int listSize)
{
    char ch;
	for (int i = 0; i < listSize; i++)
    {
        getline(inFile, mList[i].menuItem);
        inFile >> mList[i].menuPrice;
        inFile.get(ch);
    }
}

void showMenu(menuItemType mList[], int listSize)
{
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << "----Today's Menu----" << endl;

    for (int i = 0; i < listSize; i++)
        cout << i+1 << ": " << left << setw(15) << mList[i].menuItem
             << right << " $" << mList[i].menuPrice << endl;
    cout << endl;
}

void printCheck(menuItemType mList[], int listSize, 
				int cList[], int cListLength)
{
    int i;
    double salesTax;
    double amountDue = 0;

    cout << "Welcome to Johnny's Resturant" << endl;
    for (i = 0; i < cListLength; i++)
    {
        cout << left << setw(15) << mList[cList[i]].menuItem
             << right << " $" << setw(4) << mList[cList[i]].menuPrice << endl;
    amountDue += mList[cList[i]].menuPrice;
    }

    salesTax = amountDue * .05;
    cout << left << setw(15) << "Tax " << right << " $" 
         << salesTax << endl;
    amountDue = amountDue + salesTax;
    cout << left << setw(15) << "Amount Due " << right 
         << " $" << amountDue << endl;
}

void makeSelection(int listSize, 
                   int cList[], int& cListLength)
{
    int itemNo;

    char response;

    cListLength = 0;

    cout << "You can make up to " << listSize
         << " single order selections" << endl;

    cout << "Do you want to make selection Y/y (Yes), N/n (No): ";
    cin >> response;
    cout << endl;

    while ((response == 'Y' || response == 'y') &&
            cListLength < 8)
    {
        cout << "Enter item number: ";
        cin >> itemNo;
        cout << endl;

        if (!isItemSelected(cList,cListLength,itemNo))
            cList[cListLength++] = itemNo - 1;
        else
            cout << "Item already selected" << endl;

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> response;
        cout << endl;
    }
}

bool isItemSelected(int cList[], int cListLength, int itemNo)
{
    bool found = false;

    for (int i = 0; i < cListLength; i++)
        if (cList[i] == itemNo)
        {
            found = true;
            break;
        }

    return found;
}
