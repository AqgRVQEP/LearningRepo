  // 计算销售员的收入并输出到屏幕上


  // 定义变量
  // 输入所有的每周销售额
  // 计算并打印


  // Initialize sales to zero
  // Initialize salary to zero
  // Initialize dixin to 200
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
    float sales; // grade value
    int dixin = 200;
    float salary; // sum of grades

    // initialization phase
    sales = 0; // initialize total
    salary = 0;
    counter = 0; // initialize loop counter

    // processing .phase
    // get first grade from user
    printf( "%s", "Enter sales in dollars (-1 to end): " ); // prompt for input
    scanf( "%f", &sales ); // read grade from user

    while ( sales != -1 ) {
        salary = dixin + sales * 0.09; // avoid truncation
        
        printf("Salary is: $%.2f\n", salary);
       

        // loop while sentinel value not yet read from user
        printf( "%s", "Enter sales in dollars (-1 to end): " ); // prompt for input
        scanf( "%f", &sales ); // read grade from user
    } // end while
} // end function main