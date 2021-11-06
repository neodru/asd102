//Consider the declaration of the struct houseType given in this chapter. Suppose firstHouse and secondHouse are variables of houseType. Write C11 statement(s) to compare the style and price of firstHouse and secondHouse. Output true if the corresponding values are the same; false otherwise. (2, 3)
#include <iostream>

using namespace std;

int main()
{

    struct houseType{
        string style;
        int numOfBedrooms;
        int numOfBathrooms;
        int numOfGarages;
        int yearBuilt;
        int finishedSquareFootage;
        double price;
        double tax;
    };
    
    houseType firstHouse; 
    houseType secondHouse;

    if (firstHouse.style == secondHouse.style && 
	   firstHouse.price == secondHouse.price)
	    cout << "true" << endl;
	else
      cout << "false" << endl;



}