/*  Mohammed Raza
    CSC133, Section - 1, Spring 2010
    Lab Assignment No 5, Program # 1
    3/25/10
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
      {
      
      float k;
      float pmt;
      float i;
      float n;
      float balk;
      

       cout<<"\nEnter payment number: ";
         cin>>k;
       cout<<"\nEnter amount of monthly payment: ";
         cin>>pmt;
       cout<<"\nEnter annual interest rate: ";
         cin>>i;
       cout<<"\nEnter number of payments to be made: ";
         cin>>n;
   
         for(k=1;k<=3;k++)
       {         
         i = (i/12);
         balk = (pmt * ((1 - pow((1+i),(k-n))) / i));
         
         cout<<"\n\nMonthly payment: $" << pmt;
         cout<<"\nMonthly interest rate: " << i <<"%";
         cout<<"\nNumber of payments: " << n;
         
         cout<<"\nRemaining Balance: $" << balk;
         cout<<"\n\n";
         }
   
      cin.get();
      return 0;
              
      }
      
/*
Enter payment number: 3

Enter amount of monthly payment: 165.25

Enter annual interest rate: 9

Enter number of payments to be made: 36


Monthly payment: $165.25
Monthly interest rate: 0.75%
Number of payments: 36
Remaining Balance: $220.333



Monthly payment: $165.25
Monthly interest rate: 0.0625%
Number of payments: 36
Remaining Balance: $2307.43



Monthly payment: $165.25
Monthly interest rate: 0.00520833%
Number of payments: 36
Remaining Balance: $4998.43

Press any key to continue . . .
*/
     

