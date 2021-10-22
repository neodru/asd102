/*
Write a program that prompts the user to input an integer
 and then outputs both the individual digits of the number 
 and the sum of the digits. For example, it should output 
 the individual digits of 3456 as 3 4 5 6, 
 output the individual digits of 8030 as 8 0 3 0,
 output the individual digits of 2345526 as 2 3 4 5 5 2 6, 
 output the individual digits of 4000 as 4 0 0 0, 
 and output the individual digits of -2345 as 2 3 4 5.
*/

 #include<iostream>

using namespace std;
int main() 
{
   int num, digit = 0;
   
   cout << "Enter the number : ";
   cin >> num; // i.e. 742
   
   while (num != 0) 
   {
      digit = digit + num % 10; // digit = 0 + 742 % 10
                      // digit =    0  +    2
                      // digit = 2
      num = num / 10;     // num = 742 /10
                    // num = 74
    cout << "Here is one of your digits: " << num %  10 << endl;              
   }
   // digit = 2 + 74 % 10;  
   // digit = 2 + 4
   // digit = 6
    // num = 74  / 10
    // num = 7

// digit = 6 + 7 % 10
// digit = 6 + 7
// digit = 13

// num = 7/10
// num = .70

// s = 13 + .70 % 10
// s = 13 + 0
// x = .70 / 10
// x = .070





   cout << "\nThe sum of the digits is "<< digit;
}
