/* For each used car a salesperson sells, the commission is paid as follows: 
$20 plus 30% of the selling price in excess of the cost of the car. 
Typically, the minimum selling price of the car is the cost of the car 
plus $200 and the maximum selling price is the cost of the car and $2,000. 
Write a program that prompts the user to enter the salesperson’s fixed commission, 
the percentage of the commission, the purchasing cost of the car, 
the minimum and maximum amount to be added to the purchasing cost to determine 
the minimum and maximum selling price, and outputs minimum and maximum selling price 
of the car and the salesperson’s commission range. */
#include <iostream>

using namespace std;

int main ()
{
    double fixedCommission;
    double percentageOfCommission;
    double purchasingCost;
    double minAddedPrice;
    double maxAddedPrice;
    double minSellingPrice;
    double maxSellingPrice;
    double minSalesComission;
    double maxSalesComission;
    
    cout << "Enter the purchasing cost of the car: "; cin >> purchasingCost; 
    
    cout << "Enter the minimum added price to the purchasing cost of the car: "; cin >> minAddedPrice;  
    
    cout << "Enter the maximum added price to the purchasing cost of the car: "; cin >> maxAddedPrice; 
    
    cout << "Enter fixed comission "; cin >> fixedCommission;
    
    cout << "Enter percentage of comission: "; cin >> percentageOfCommission; 
    
    minSalesComission = (percentageOfCommission *minAddedPrice + fixedCommission) / 100;
    
    maxSalesComission = (percentageOfCommission *maxAddedPrice + fixedCommission) / 100;
    
    cout << "Car's max price: $" << purchasingCost + minAddedPrice << endl;
    
    cout << "Car's min price: $" << purchasingCost + maxAddedPrice << endl;
    
    cout << "Comission Range: $" << minSalesComission <<  " to $" << maxSalesComission << endl;
    return 0;
}