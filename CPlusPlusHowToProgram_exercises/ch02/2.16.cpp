// calculates the product of three integers.
#include<iostream> // enables program to perform input and output

using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)  
    int number2{0}; // second integer to add (initialized to 0) 
    int sum{0}; // sum of number1 and number2 (initialized to 0)
    int product{0}; // product of number1 and number2 (initialized to 0)
    int difference{0}; // diffrerence of number1 and number2 (initialized to 0)
    int quotient{0}; // quotient of number1 and number2 (initialized to 0)

    cout << "Enter first integer: "; // prompt user for data
    cin >> number1; // read first integer from user into number1

    cout << "Enter second integer: "; // prompt user for data
    cin >> number2; // read second integer from user into number2

    sum = number1 + number2; // add the numbers; store result in sum
    product = number1 * number2; // product the numbers; store result in product
    difference = number1 - number2; // difference the numbers; store result in difference
    quotient = number1 % number2; // quotient the numbers; store result in quotient
    
    cout << "Sum is " << sum << endl; // display sum; end line
    cout << "Product is " << product << endl; // display product; end line
    cout << "Difference is " << difference << endl; // display difference; end line
    cout << "Quotient is " << quotient << endl; // display quotient; end line
} // end function main