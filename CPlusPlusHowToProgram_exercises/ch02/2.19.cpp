// calculates the product of three integers.
#include<iostream> // enables program to perform input and output

using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)  
    int number2{0}; // second integer to add (initialized to 0)
    int number3{0}; // third integer to add (initialized to 0) 
    int sum{0}; // sum of number1 and number2 (initialized to 0)
    int product{0}; // product of number1 and number2 (initialized to 0)
    int average{0}; // diffrerence of number1 and number2 (initialized to 0)
    int smallest{0}; // quotient of number1 and number2 (initialized to 0)
    int largest;

    cout << "Input three different integers: "; // prompt user for data
    cin >> number1 >> number2 >> number3;

    sum = number1 + number2 + number3; // add the numbers; store result in sum
    product = number1 * number2 * number3; // product the numbers; store result in product
    average = sum / 3; // difference the numbers; store result in difference
    smallest = number1;
    largest = number1;

    if (number1 >= number2) {
        smallest = number2;
    }
    
    if (number2 >= number3) {
        smallest = number3;
    }
    if (number1 <= number2){
        largest = number2;
    }
    if (number2 <= number3) {
        largest = number3;
    }
    
    cout << "Sum is " << sum << endl; // display sum; end line
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl; // display product; end line
    cout << "Smallest is " << smallest << endl; // display difference; end line
    cout << "Largest is " << largest << endl; // display quotient; end line
} // end function main