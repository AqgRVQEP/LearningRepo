// calculates the product of three integers.
#include<iostream> // enables program to perform input and output

using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)  
    int number2{0}; // second integer to add (initialized to 0) 

    cout << "Enter first integer: "; // prompt user for data
    cin >> number1; // read first integer from user into number1

    cout << "Enter second integer: "; // prompt user for data
    cin >> number2; // read second integer from user into number2

    if (number1 == number2) {
       cout << "These numbers are equal." << endl;
    }

    if (number1 > number2) {
       cout << number1 << " is larger." << endl;
    }

    if (number1 < number2) {
       cout << number2 << " is larger." << endl;
    }
}
