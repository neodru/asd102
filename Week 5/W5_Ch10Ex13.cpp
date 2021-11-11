/*
Consider the following statements: (1, 2, 3, 5, 7)
class temporary
{
public:
    void set(string, double, double);
    void print();
    double manipulate();
    void get(string&, double&, double&);
    void setDescription(string);
    void setFirst(double);
    void setSecond(double);
    string getDescription() const;
    double getFirst() const;
    double getSecond() const;
    temporary(string = "", double = 0.0, double = 0.0);
private:
    string description;
    double first;
    double second;
};
a. How many members does class temporary have?
b.How many private members does class temporary have?
c. How many constructors does class temporary have? 
Can this  constructor be used to initialize an object without specifying any parameters? If yes, then illustrate with an example; otherwise explain why it cannot be used 
to initialize an object without specifying any parameters.
*/
//How many members does class temporary have?
a. There are 14 
//How many private members does class temporary have?
b. There are 3 private members of the 14 member within class temporary. 
//How many constructors does class temporary have?
c. Based on the the class temporary above, it has only one constructor temporary 
//Can this  constructor be used to initialize an object without specifying any parameters?
Yes.
//If yes, then illustrate with an example; 
temporary objectTypeOne(string = "", double = 0.0, double = 0.0);
