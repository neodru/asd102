/*Consider the declaration of the struct houseType given in this chapter. 
Suppose firstHouse and secondHouse are variables of houseType. Write C11 
statement(s) to compare the style and price of firstHouse and secondHouse. 
Output true if the corresponding values are the same; false otherwise. (2, 3)
*/
#include <iostream>

using namespace std;
//reference page 614
int main()
{
     /*- Structures definition 1: are containers of heterogeneous data members. 
     This means that you can group integers, strings, and other objects in one 
     structure that contains them. Structures are useful for implementing simple 
     models that only need to have data members. 
    Definition 2: A collection of a fixed number of components in which the 
    components are accessed by name. The components may be of different types.*/

    struct houseType{
        string style;
        int numOfBedrooms;
        int numOfBathrooms;
        int numOfGarages;
        int yearBuilt;
        int finishedSquareFootage;
        double price;
        double tax;
    }; /*use, a semicolon (after the right brace) is essential to end the struct statement. 
    A semicolon at the end of the struct is, therefore, a part of the syntax.*/
    houseType firstHouse; 
    houseType secondHouse;
    if (firstHouse.style == secondHouse.style && 
	   firstHouse.price == secondHouse.price)
	    cout << "true";
	else
      cout << "false";

}