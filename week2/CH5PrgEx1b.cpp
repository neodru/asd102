#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    
    int n,r, pwr =0, sum = 0;

    cout<<"Enter Your Number:";
    cin>>n;

    cout << "The digits of " << n << " are: ";
    cin.get();
    
    if (n < 0)
		n = -n;
    while (n / static_cast<int>(pow(10.0, pwr)) >= 10)
		pwr++;
        while (n > 0)
	{
		r = n / static_cast<int>(pow(10.0, pwr));
		cout << r << " ";
		sum = sum + r;
		n = n % static_cast<int>(pow(10.0, pwr));
		pwr--;
	}
    
    if (pwr != -1)
    while (n != -1) 
  {
      cout << 0 << " ";
			pwr--; 
  }

    cout << "\nThe sum of the digits is "<< sum<<endl;
    
  
    return 0;
}