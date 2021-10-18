/*
a. Write a statement that includes the header files fstream, string, and iomanip in this program.
b. Write statements that declare inFile to be an ifstream variable and outFile to be an ofstream variable.
c. The program will read data from the file inData.txt and write output to the file outData.txt. Write statements to open both of these files, associate inFile with inData.txt, and associate outFile with outData.txt.
d. Suppose that the file inData.txt contains the following data:
         Giselle Robinson Accounting
         5600 5 30
         450 9
         75 1.5
The first line contains a person’s first name, last name, and the department the person works in. In the second line, the first number represents the monthly gross salary, the bonus (as a percent), and the taxes (as a percent). The third line contains the distance traveled and the traveling time. The fourth line contains the number of coffee cups sold and the cost of each coffee cup. Write statements so that after the program executes, the contents of the file outData.txt are as shown below. If necessary, declare additional variables. Your statements should be general enough so that if the content of the input file changes and the program is run again (with- out editing and recompiling), it outputs the appropriate results.
Name: Giselle Robinson, Department: Accounting
Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00% Paycheck: $4116.00
Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours Average Speed: 50.00 miles per hour
         Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
         Sales Amount = $112.50
e. Write statements that close the input and output files.
f. Write a C++ program that tests the statements in parts a through e.
*/
#include <iostream>
#include <fstream> //a
#include <string>  //a
#include <iomanip> //a

using namespace std; 

int main ()
{
    /* b. Write statements that declare inFile to be an ifstream variable and outFile to be an ofstream variable.
    (pg163) */
    ifstream inFile;
    ofstream outFile;

    string name; // Name: Giselle Robinson, 
    string department; //Department: Accounting

    double monthlyGrossSalary; //Monthly Gross Salary: $5600.00,
    double monthlyBonusPercent; // Monthly Bonus: 5.00%,
    double taxRate; // Taxes: 30.00% 
    double payCheck; //Paycheck: $4116.00

    double distanceTraveled; //Distance Traveled: 450.00 miles,
    double travelTime; // Traveling Time: 9.00 hours
    double averageSpeed; //Average Speed: 50.00 miles per hour

    int coffeeCupsSold; //Number of Coffee Cups Sold: 75, 
    double coffeeCost; //Cost: $1.50 per cup
    
    double salesAmount; //Cost: $1.50 per cup

    //open the files 
    // c. The program will read data from the file inData.txt and write output to the file outData.txt.
    inFile.open("inData.txt");  //  associate inFile with inData.txt, and 
    outFile.open("outData.txt"); // associate outFile with outData.txt.
    
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    // d. Code for data manipulation - Exampe Problem Page 164-165
    // reference page 172
    //Name: Giselle Robinson, Department: Accounting
    inFile >> name >> department;
    outFile << "Full name:" << name << ", " << "Department: " << department << endl;

    //Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00% Paycheck: $4116.00
    inFile >> monthlyGrossSalary >> monthlyBonusPercent >> taxRate;
    outFile << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus Percent: " << monthlyBonusPercent << "%, Tax Rate: " << taxRate << endl;

    //Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours Average Speed: 50.00 miles per hour
    inFile >> distanceTraveled >> travelTime >> averageSpeed;
    outFile << "Distance Traveled: " << distanceTraveled << "Time Traveled: " << travelTime << "Average Speed: " << averageSpeed << endl;

    //Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
    inFile >> coffeeCupsSold >> coffeeCost;
    outFile << "Amount of Coffee Sold: " << coffeeCupsSold << " " << "Price per cup: " << coffeeCost<< endl;

    //Sales Amount = $112.50
    inFile >> salesAmount;
    outFile << "Total Sales: " << salesAmount << endl;

    //e.  Close Files
    inFile.close();
    outFile. close();

    return 0;



}