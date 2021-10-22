/*
Write a for statement to add all the numbers 
divisible by 3 or 5 between 1 and 1000. (4)
*/

#include <iostream>

using namespace std;

int main ()
{
   int num;
   int sum = 0;

   for
    (num = 0; 
    num <=1000;
    num++)
if (num % 3 == 0 || num % 5 == 0)
    {
    sum = sum + num;
    }
cout << sum << endl;
    return 0;

}

   
  