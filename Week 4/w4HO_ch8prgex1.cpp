#include <iostream>
using namespace std;
int main ()
{
    double alpha[50];
    
    int i;

    for(i= 0; i < 25; i++)
        alpha[i] = (i*i);
        
    for(i= 0; i < sizeof(alpha); i++)
        alpha[i] = (i*3);



    for (i = 0; i < 10; i++)

        cout << alpha[i] << " ";

        cout << endl;



    for (i = 10; i < 20; i++)

        cout << alpha[i] << " ";

        cout << endl;

    
    for (i = 20; i < 30; i++)

        cout << alpha[i] << " ";

        cout << endl;


    for (i = 30; i < 40; i++)

        cout << alpha[i] << " ";

        cout << endl;



    for (i = 40; i < 50; i++)

        cout << alpha[i] << " ";

        cout << endl; 

}