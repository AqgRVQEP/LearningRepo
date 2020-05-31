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
   unsigned int x;
   int y;
   int z;

   y = 1;
   z = 1;
   
   printf( "%s", "Enter the side size: " ); // prompt for input
   scanf( "%u", &x); // read grade from user
   // processing phase
   while ( y <= x ) { // loop 10 times

      while ( z <= x) {
         printf("*");
         z++;
      }
      
      z=1;
      printf("\n");
      y++;
   } // end while
} // end function main