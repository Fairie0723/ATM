/* Description: This progam will take in a users amount to be
//              withdrawn and will correctly give back money 
//            and explain how much of each currency was given.  
/////////////////////////////////////////////////////////////////*/                         

//pre=processor directives
#include <iostream>
#include <string>
#include <cmath>


//namespace
using namespace std;


//main function
int main()

{
    //declaring variables
int money = 0;
int ones = 0;
int fives = 0;
int tens = 0;
int twenties = 0;
int fifties = 0;
int hundreds = 0;


  //welcomes user to the program  
  cout << "*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*\n";
  cout << "   *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";
  cout << "      WELCOME TO MTSU ATM WITHDRAWAL SERVICE!\n";
  cout << "   *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";
  cout << "*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*\n";

  //asks user for amount to withdraw
  cout << "Please enter the amount you wish to withdraw: ";
  
  // reads input from user 
  cin >> money; 

  //money calculations to see which currency the user gets
  hundreds = money / 100;
  fifties = (money % 100)/ 50;
  twenties = (money % 100 % 50)/ 20;
  tens = (money % 100 % 50 % 20)/ 10;
  fives = (money % 100 % 50 % 20 % 10)/ 5;
  ones = money % 100 % 50 % 20 % 10 % 5;


  //prints out to the user the currency
  cout << "You withdrew $: " << + money << +" amount of money in the following amounts:\n";
  cout <<  hundreds << +" bills in 100's.\n";
  cout << " " << fifties << +" bills in  50's.\n";
  cout << " " << twenties << +" bills in  20's.\n";
  cout << " " << tens << +" bills in  10's.\n";
  cout << " " << fives << +" bills in   5's.\n";
  cout << " " << ones << +" bills in   1's.\n";

//thanks the user
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "Thank you and please see us again!!\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    if (8 > 9 || 10 > 2){
        cout << "True\n";
    }

  //end of function
  return 0;


}
