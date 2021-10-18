/*Tom and Jerry opened a new lawn service. They provide three types of services: 
mowing, fertilizing, and planting trees. The cost of mowing is $35.00 per 5,000 square yards, 
fertilizing is $30.00 per application, and planting a tree is $50.00. 
Write an algorithm that prompts the user to enter the area of the lawn, 
the number of fertilizing applications, and the number of trees to be planted. 
The algorithm then determines the billing amount. Assume that the user orders all three services. */
#include <iostream>

using namespace std;

int main ()
{
double mowingYards;
double numberOfFertilizer;
double numberOfTrees;
double receiptTotal;

 cout << "Enter mowing services in square yards ($35.00 per 5,000 square yards): " << mowingYards << endl; 
 
 cout << "Enter number of fertilizer application ($30.00 per): " << numberOfFertilizer << endl;

 cout << "Enter number of tress planted ($50.00 per): " << numberOfTrees << endl;
 
 receiptTotal= ((mowingYards / 5000) * 35.00) + (numberOfFertilizer * 30.00)+ (numberOfTrees * 50.00);

 return 0;

}