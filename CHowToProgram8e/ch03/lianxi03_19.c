  // 计算每笔贷款的利息并输出到屏幕上


  // 定义变量
  // 输入所有的利息相关变量
  // 计算并打印


  // Initialize interest to zero
  // Initialize principal to zero
  // Initialize rate to zero
  // Initialize days to zero
  // Initialize counter to zero

  // Input the sales
  // While (counter != -1) {add gallons to total,add miles to total,input next}

  // if counter != 0  total_gallons / total_miles  print the average
  // else  print "No gallons and miles were entered

#include <stdio.h>

// function main begins program execution
int main( void )
{
    unsigned int counter; // number of grades entered
    float principal; // grade value
    float rate;
    unsigned int days; // sum of grades
    
    float interest;

    // initialization phase
    days = 0; // initialize total
    interest = 0;
    counter = 0; // initialize loop counter

    // processing .phase
    // get first grade from user
    printf( "%s", "Enter loan principal (-1 to end): " ); // prompt for input
    scanf( "%f", &principal ); // read grade from user

    while ( principal != -1 ) {
        printf( "%s", "Enter interesty rate: " ); // prompt for input
        scanf( "%f", &rate ); // read grade from user

        printf( "%s", "Enter term of the loan in days: " ); // prompt for input
        scanf( "%d", &days ); // read grade from user

        interest = principal * rate * days / 365; // avoid truncation
        
        printf("The interest charge is: $%.2f\n", interest);
       

        // loop while sentinel value not yet read from user
        printf( "%s", "Enter loan principal (-1 to end): " ); // prompt for input
        scanf( "%f", &principal ); // read grade from user
    } // end while
} // end function main 