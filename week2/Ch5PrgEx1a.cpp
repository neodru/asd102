#include<iostream>

using namespace std;

int main()
{
     int num, digit;

    cout << "Please enter a number";
    cin >> num;

        while((num > 0) && (num != 0) )
             {
                 cout << num%10 << endl;     // Output the last digit
                  num /= 10;                      // Divides the number by 10 i.e. removes the last digit
           digit = digit + num % 10; // digit = 0 + 742 % 10
                      // digit =    0  +    2
                      // digit = 2
            num = num / 10; 
             }
          cin.get(); 
     cout << "\nThe sum of the digits is "<< endl;
        cout << num << endl;
     return 0;
}
