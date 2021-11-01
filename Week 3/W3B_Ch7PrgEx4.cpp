//Write a program that prompts the user to input a string. 
//The program then uses the function substr to remove all the vowels from the string. For example, if str = "There", then after removing all the vowels, str = "Thr". After removing all the vowels, output the string. Your program must contain a function to remove all the vowels and a function to determine whether a character is a vowel.
#include <iostream>
#include <string>

using namespace std;

int main ()
{ 
    char str[100];//stoe up to 100 celements of type char
    int i, j, len=0;
    
    cout << "Input a string: ";
    cin >> str; 
    len=strlen(str);

  cout << "After removing all of the vowels, "<< str <<  " is ";
 
 for ( i = 0; i < len; i++)//for i equals zero; when i is less than len; add i
 {
     if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
     {
       for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
    i--;
    len--;
     }
    
     
 }
 
    cout << str << endl; 
    return 0;
  
}