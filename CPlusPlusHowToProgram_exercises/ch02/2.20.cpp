// (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius ofa circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed onlyinteger  constants  and  variables.  In  Chapter 4  we  discuss  floating-point  numbers,  i.e.,  values  thathave decimal points.]
#include<iostream> // enables program to perform input and output

using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
    int radius;
    cout << "Enter the circle radius: ";
    cin >> radius;

    cout << "Diameter is " << radius * 2.0
    << "\nCircumference is " << radius * 2 * 3.14159
    << "\nArea of a Circle is " << radius * radius * 3.14159 << endl;
}