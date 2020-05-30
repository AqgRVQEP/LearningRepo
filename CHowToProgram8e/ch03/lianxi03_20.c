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
    int hours; // grade value
    float rate;
    
    float salary;

    // initialization phase
    rate = 0; // initialize total
    salary = 0;

    // processing .phase
    // get first grade from user
    printf( "%s", "Enter # hours worked (-1 to end): " ); // prompt for input
    scanf( "%d", &hours ); // read grade from user

    while ( hours != -1 ) {
        printf( "%s", "Enter hourly rate of the worker: " ); // prompt for input
        scanf( "%f", &rate ); // read grade from user

        if ( hours <= 40 ) {
            salary = hours * rate; // avoid truncation
        }
        else
        {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }
        
        printf("Salary is: $%.2f\n", salary);
       

        // loop while sentinel value not yet read from user
        printf( "%s", "Enter # hours worked (-1 to end): " ); // prompt for input
        scanf( "%d", &hours ); // read grade from user
    } // end while
} // end function main 