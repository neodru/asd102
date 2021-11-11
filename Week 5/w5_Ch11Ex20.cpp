// Explain how in a protected inheritance, the members of the base class are inherited by a derived class. (8)

Protected Inheritance

If memberAccessSpecifier is protected:
    -public members of A are protected members of B and can be accessed by the member functions (and friend functions) of B
    
    -protected members of A are protected members of B and can be accessed by the member functions (and friend functions) of B

    -private members of A are hidden in B and can be accessed only through public or protected members of A

/*-makes the public and protected members of the base class protected in the derived class.
- simply stated, since the inheritance is protected, only Child (subclass), and its children, are aware that they inherited from Base (superclass).




Pubic Inheritance
-makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
- simply stated, If the inheritance is public, everything that is aware of Base and Child is also aware that Child inherits from Base.



Private Inheritance 
-makes the public and protected members of the base class private members in the derived class.
- they can only be accessed by the derived class.
-simply stated, If the inheritance is private, no one other than Child is aware of the inheritance.
*/