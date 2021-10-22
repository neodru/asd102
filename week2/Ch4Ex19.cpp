/*
Suppose that sale and bonus are double variables. Write an if...else 
statement that assigns a value to bonus as follows: If sale is greater
than $20,000, the value assigned to bonus is 0.10, that is 10%; If sale
is greater than $10,000 and less than or equal to $20,000, the value
assigned to bonus is 0.05, that is 5%; otherwise the value assigned to
bonus is 0, that is 0%. (3)
*/

//reference 6:30pm in video
#include <iostream>


using namespace std;
int main()
{
    double bonus, sales;

    cout << "Enter sales: " << endl;
    cin >> sales;
    
    if (sales > 20000)
    {
        bonus = 0.10;
        cout << "Your bonus is " << (sales / bonus) << endl;

    }
    
    else if (sales > 10000 && sales <= 20000)
    {
        bonus = 0.05;
        cout << "Your bonus is " << (sales / bonus) << endl;
    }
    else
    {
         bonus = 0.0;
        cout << "Your bonus is " << (sales / bonus) << endl;
    }
       

}
      