  // 计算10个数中最大的数并输出到屏幕上


  // 定义变量
  // 一个一个输入数字，两两对比大小，留下最大的数字
  // 计算并打印


  // Initialize largest to zero
  // Initialize counter to 1

  // Input the number
  // While (counter != -1) {add gallons to total,add miles to total,input next}

  // if counter != 0  total_gallons / total_miles  print the average
  // else  print "No gallons and miles were entered
#include <stdio.h>

// function main begins program execution
int main( void )
{
   unsigned int counter; // number of grade to be entered next
   float number;
   float number_old;
   float largest;

   number = 0;
   largest = 0;
   counter = 1; // initialize loop counter
   
   printf( "%s", "Enter the number: " ); // prompt for input
   scanf( "%f", &number_old ); // read grade from user
   // processing phase
   while ( counter <= 10 ) { // loop 10 times
      printf( "%s", "Enter the next number: " ); // prompt for input
      scanf( "%f", &number ); // read grade from user
      if ( number >= number_old )
      {
         largest = number;
      }
      else
      {
         largest = number_old;
      }

      number_old = largest;
      counter++;
   } // end while

   printf("the largest is: %.2f", largest);

} // end function main