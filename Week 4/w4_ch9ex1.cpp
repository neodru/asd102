//Assume the definition of Exercise 2, which defines the struct computerType. Write a program that declares a variable of type computerType, prompts the user to input data about a computer, and outputs computer,s data.
  
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct computerType
{
    string manufacturer;
    string model;
    string processor;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
} ;


int main()
{
    cout << fixed << showpoint << setprecision(2);

    computerType comp;

    cout << "Enter the name of the manufacturer: ";
    getline(cin, comp.manufacturer);
    cout << endl;

    cout << "Enter the model of the computer: ";
    getline(cin, comp.model);
    cout << endl;

    cout << "Enter processor type: ";
    getline(cin, comp.processor);
    cout << endl;
    
     cout << "Enter the size of RAM (in GB): ";
    cin >> comp.ram;
    cout << endl;

    cout << "Enter the size of hard drive (in GB): ";
    cin >> comp.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> comp.yearBuilt;
    cout << endl;

    cout << "Enter the price: ";
    cin >> comp.price;
    cout << endl;

    


    cout << "Manufacturer: " << comp.manufacturer << endl;
    cout << "Model: " << comp.model << endl;
    cout << "Processor: " << comp.processor<< endl;
    cout << "Ram: " << comp.ram << endl;
    cout << "Hard Drive Size: " << comp.hardDriveSize << endl;
    cout << "Year Built: " << comp.yearBuilt << endl;
    cout << "Price: $" << comp.price << endl;

    return 0;
}
