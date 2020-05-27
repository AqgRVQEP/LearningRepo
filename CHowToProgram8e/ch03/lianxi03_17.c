#include <stdio.h>

// function main begins program execution
int main( void )
{
   int account_number; // number of grades entered
   float begging_balance; // grade value
   float total_charges;
   float total_credits; // sum of grades
   float credit_limit;

   float balance; // number with decimal point for average

      // initialization phase
   balance = 0;
   account_number = 3; // initialize loop counter

      // processing .phase
      // get first grade from user
   printf( "%s", "Enter account number (-1 to end): " ); // prompt for input
   scanf( "%d", &account_number ); // read grade from user

      // loop while sentinel value not yet read from user
   while ( account_number != -1 ) {
      printf( "%s", "Enter begging balance: " ); // prompt for input
      scanf( "%f", &begging_balance ); // read grade from user

      printf( "%s", "Enter total charges: " ); // prompt for input
      scanf( "%f", &total_charges ); // read grade from user

      printf( "%s", "Enter total credits: " ); // prompt for input
      scanf( "%f", &total_credits ); // read grade from user

      printf( "%s", "Enter credit limit: " ); // prompt for input
      scanf( "%f", &credit_limit ); // read grade from user

      balance = begging_balance + total_charges - total_credits;

      if (balance > credit_limit) {
         printf("Account:      %d\n", account_number); // prompt for input
         printf("Credit limit: %.2f\n", credit_limit);
         printf("Balance:      %.2f\n", balance);
         puts( "Credit Limit Exceeded." );
      }

      printf( "%s", "\nEnter account number (-1 to end): " ); // prompt for input
      scanf( "%d", &account_number ); // read grade from user
   }// end while
} // end function main