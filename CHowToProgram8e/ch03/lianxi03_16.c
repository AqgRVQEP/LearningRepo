  // 分析每加仑行驶的里程数并输出到屏幕上


  // 定义变量
  // 输入所有的加油量和里程数
  // 计算并打印


  // Initialize total_gallons to zero
  // Initialize total_miles to zero
  // Initialize counter to zero

  // Input the first gallon
  // Input the first mile
  // While (counter != -1) {add gallons to total,add miles to total,input next}

  // if counter != 0  total_gallons / total_miles  print the average
  // else  print "No gallons and miles were entered

#include <stdio.h>

// function main begins program execution
  int main( void )
  {
      unsigned int counter; // number of grades entered
      float gallon; // grade value
      int mile;
      float total_gallon; // sum of grades
      int total_mile;

      float average; // number with decimal point for average
      float total_average;

      // initialization phase
      total_gallon = 0; // initialize total
      total_mile = 0;
      counter = 0; // initialize loop counter

      // processing .phase
      // get first grade from user
      printf( "%s", "Enter the gallons used (-1 to end): " ); // prompt for input
      scanf( "%f", &gallon ); // read grade from user

      if (gallon != -1) {
      printf( "%s", "Enter the miles driven: " ); // prompt for input
      scanf( "%d", &mile ); // read grade from user
      }

          average = (float)mile / gallon; // avoid truncation
          printf("The miles/gallon for this tank was: %.6f\n", average);

      // loop while sentinel value not yet read from user
      while ( gallon != -1 ) {
          total_gallon = total_gallon + gallon; // add grade to total
          total_mile = total_mile + mile;
          counter = counter + 1; // increment counter

          // get next grade from user
          printf( "%s", "Enter the gallons used (-1 to end): " ); // prompt for input
          scanf( "%f", &gallon ); // read grade from user

          if (gallon != -1) {
              printf("%s", "Enter the miles driven: "); // prompt for input
              scanf("%d", &mile); // read grade from user

              average = (float)mile / gallon; // avoid truncation
              printf("The miles/gallon for this tank was: %.6f\n", average);
          }
      } // end while

      // termination phase
      // if user entered at least one grade
      if ( counter != 0 ) {

          // calculate average of all grades entered
          total_average = ( float ) total_mile / total_gallon; // avoid truncation

          // display average with two digits of precision
          printf( "The miles/gallon for this tank was: %.6f\n", total_average );
      } // end if
      else { // if no grades were entered, output message
          puts( "No gallons and miles were entered" );
      } // end else
  } // end function main