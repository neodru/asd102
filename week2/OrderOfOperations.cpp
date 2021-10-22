/*

Arithmatic Operators 

Parenthesis                 ()
Exponents & Square Roots    n()
Multipicaltion & Division   *  /  %
Addition & Subtraction      + - 

*modulo % is based on division

Boolean Opeators

Eqaual to                   ==
Not eaual to                !=
less than                   <
less than or equal to       <=
greater than                >
greater than or equal to    >=
And                         &&      Compares two boolean expressions. 
                                    Both must be true for the whole to 
                                    be true. Everything else is false.
Or                          ||      Compares two boolean expressions. 
                                    Both must be false for the whole 
                                    to be false. Everything else is true.
Not                         !       Returns the opposite result of an 
                                    evaluated boolean expression.   
*Note that arithmetic operators are performed before boolean operators.*

Returns True:
cout << boolalpha << ((5 > 7) && (2 > 5 || 1 < 9) || 4 != 5 && ! (2 >= 3)) << endl;

Returns False:
cout << boolalpha << !((5 > 7) && (2 > 4 || 1 < 9) || 4 != 5 && ! (2 >= 3)) << endl;

returns False: 
cout << boolalpha << ( 5 == 4 ) << endl;
cout << boolalpha << ( ! (5 < 8 && 6 >= 2) ) << endl;
cout << boolalpha << ( 5 > 8 || 6 < 2 );

*/