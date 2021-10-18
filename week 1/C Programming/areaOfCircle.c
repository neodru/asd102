/*
Area of a Circle
Dru Macasieb
October 17, 2021
*/

#include <stdio.h> //standard input

#define PI 3.1459 //define directive, tells compiler that this is a contstant  throuhout the program

int main ()
{
    double area = 0.0, radius = 0.0; //declaration statment 
    printf("Enter radius: "); // prompt user to enter radius
    scanf("%lf", &radius ); //scanf is a basic routine for donig input
    area = PI * radius * radius; //area calculations 
    printf("radius of %lf meters; area is %lf sq. metters\n", radius, area); //answers is printed 
    return 0;

}
