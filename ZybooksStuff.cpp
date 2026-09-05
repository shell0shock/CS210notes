#include <iostream>
using namespace std;

int main() {
  int wage;
  wage = 20;
  cout << "Salary is ";
  cout << wage * 40 * 52;
  cout << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int wage;

  cin >> wage; // uses input for our variable data

  cout << "Salary is ";
  cout << wage * 40 * 52;
  cout << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int dogYears;
  int humanYears;

  cin >> dogYears;
  humanYears = 7 * dogYears;

  cout << dogYears;
  cout << " dog years is about ";
  cout << humanYears;
  cout << " human years.";
  cout << endl;

  return 0;
}
#include <iostream>
using namespace std;

// multiple strings & vars can be output on one line
//  endl ends the line, 2x endl creates a blank line
int main() {
  int drivingYear;
  int drivingAge;
  int numStates;

  drivingYear = 2014;
  drivingAge = 18;
  numStates = 10;

  cout << "In " << drivingYear << ", the driving age is " << drivingAge << ".";
  cout << endl;
  cout << numStates << " states have exceptions.";
  cout << endl;

  return 0;
}

// Complete the following three steps:
//
//   Delete the following code comment including /* and */:
//
/* Your code goes here */
//
//    Copy and paste the following two lines of code:
//
//    cin >> numCucumbers;
//    cout << "cucumbers: " << numCucumbers << endl;
//
//    Submit your code to see the results.
//
//
#include <iostream>
using namespace std;

int main() {
  int numCucumbers;

  cin >> numCucumbers;
  cout << "cucumbers: " << numCucumbers << endl;

  return 0;
}

/*The following figure with f's has five lines. In the program below, cout << "f
f" << endl; outputs the figure's first line.

Complete the program with four more cout statements to ensure the program's
output matches the given figure exactly, including number of spaces and
newlines.

f   f
fffff
f   f
fffff */

#include <iostream>
using namespace std;

int main() {
  cout << "f   f" << endl;
  cout << "fffff" << endl;
  cout << "f   f" << endl;
  cout << "fffff" << endl;
  cout << "f   f" << endl;
  return 0;
}

/*
 * The program uses cin to read a user-entered integer from input into variable
 numApples.

 Complete the program with one cout statement to output "The store has ",
 followed by the variable numApples and " apples."

 In the cout statement, use endl to end the output with a newline.
 */
#include <iostream>
using namespace std;

int main() {
  int numApples;

  cin >> numApples; // Reads numApples from input

  cout << "The store has " << numApples << " apples." << endl;

  return 0;
}
// Write one cin statement to read an integer from input into variable
// numLemons.
#include <iostream>
using namespace std;

int main() {
  int numLemons;

  cin >> numLemons;

  cout << "Ron sold me " << numLemons << " lemons." << endl;

  return 0;
}

/*Write three cin statements to read three integers from input into variables
numLemons1, numLemons2, and numLemons3, respectively.

Then, write one cout statement to output the sum of the three integers, followed
by a newline. */

#include <iostream>
using namespace std;

int main() {
  int numLemons1;
  int numLemons2;
  int numLemons3;

  cin >> numLemons1;
  cin >> numLemons2;
  cin >> numLemons3;

  cout << numLemons1 + numLemons2 + numLemons3 << endl;

  return 0;
}

#include <iostream>
using namespace std;

// comments
/* // Multi line comment block
 This program calculates the amount of pasta to cook, given the
 number of people eating.
*/

int main() {
  int numPeople;        // Number of people that will be eating
  int totalOuncesPasta; // Total ounces of pasta to serve numPeople

  // Get number of people
  cout << "Enter number of people: " << endl;
  cin >> numPeople;

  // Calculate and print total ounces of pasta
  totalOuncesPasta = numPeople * 3; // Typical ounces per person
  cout << "Cook " << totalOuncesPasta << " ounces of pasta." << endl;

  return 0;
}

/*On line 10, after the semicolon (;), write a single-line comment that:

    uses: //
    contains the words: Converting days to hours

Do not use /* and */

#include "testcode.h" // For testing purposes
#include <iostream>
using namespace std;

int main() {
  int days;
  int hours;

  days = 5;          // 5 days is given
  hours = 24 * days; // Converting days to hours

  TestCode(); // For testing purposes

  return 0;
}

/*Align the code in lines 10-12 so that:

    each statement starts with exactly 3 spaces as indentation.
    exactly one space exists before and after each operator (= and *).
    no space exists before each semicolon.

Do not change the order of the statements. Do not align the = operators across
multiple lines. */

#include "testcode.h" // For testing purposes
#include <iostream>
using namespace std;

int main() {
  int kilometers;
  int meters;
  int centimeters;

  kilometers = 2;
  meters = 1000 * kilometers;
  centimeters = 100 * meters;

  TestCode(kilometers, meters, centimeters); // For testing purposes

  return 0;
}

/*Type the statements below, correcting the one syntax error in each statement.
Hints: Statements end in semicolons, and string literals use double quotes.

cout << "Foretelling is hard." << end;
cout << 'Particularly ';
cout << "of the future." << endl.
cout << "User num is: " << userNum >> endl;

 */
#include <iostream>
using namespace std;

int main() {
  int userNum;

  userNum = 5;

  cout << "Foretelling is hard." << endl;
  cout << "Particularly ";
  cout << "of the future." << endl;
  cout << "User num is: " << userNum << endl;

  return 0;
}

/*Each cout statement has a syntax error. Type the first cout statement, and
press Run to observe the error message. Fix the error, and run again. Repeat for
the second, then third, cout statement.

cout << "Num: " << songnum << endl;
cout << int songNum << endl;
cout << songNum " songs" << endl;

 */

#include <iostream>
using namespace std;

int main() {
  int songNum;

  songNum = 5;
  cout << "Num: " << songNum << endl;
  cout << songNum << endl;
  cout << songNum << " songs" << endl;
  return 0;
}

#include <iostream>
using namespace std;

// This program has a bug that causes a logic error.
// Can you find the bug?
int main() {
  int numBeans;
  int numJars;
  int totalBeans;

  numBeans = 500;
  numJars = 3;

  cout << numBeans << " beans in ";
  cout << numJars << " jars yields ";
  totalBeans = numBeans * numJars;
  // cout << "totalBeans" << " total" << endl; -> original has totalBeans quoted
  // out
  cout << totalBeans << " total" << endl;

  return 0;
}

#include <iomanip> //needed to use manipulators for formatting output using extraction or insertion operators << >>
#include <iostream>
using namespace std;

int main() {
  double miles = 765.4261;

  cout << "setprecision(p) sets # digits" << endl;
  cout << miles << " (default p is 6)" << endl;
  cout << setprecision(8) << miles << " (p = 8)" << endl;
  cout << setprecision(5) << miles << " (p = 5)" << endl;
  cout << setprecision(2) << miles << " (p = 2)" << endl;
  cout << miles << endl << endl;

  // fixed uses fixed point notation
  cout << fixed;
  cout << "fixed: " << miles << endl;

  // scientific uses scientific notation
  cout << scientific;
  cout << "scientific: " << miles << endl;

  return 0;
}

/*

fixed
Use fixed-point notation. From <iostream> cout << fixed << 12.34;
// 12.340000

scientific
Use scientific notation. From <iostream>  cout << scientific << 12.34;
// 1.234000e+01

setprecision(p)
If stream has not been manipulated to fixed or scientific: Sets max number of
digits in number cout << setprecision(3) << 12.34; // 12.3 cout <<
setprecision(5) << 12.34; // 12.34 If stream has been manipulated to fixed or
scientific: Sets max number of digits in fraction only (after the decimal
point). From <iomanip> cout << fixed << setprecision(1) << 12.34; // 12.3 cout
<< scientific << setprecision(1) << 12.34;

showpoint
Even if fraction is 0, show decimal point and trailing 0s. Opposite is
noshowpoint. From <iostream> cout << setprecision(3) << 99.0; //99 cout <<
setprecision(3) << showpoint << 99.0; // 99.0
 */

/*
double temp;
temp = 98.63;
// a floating-point manipulator
cout << temp;

98.6: cout << setprecision(3);

9.86e+01: cout << scientific << setprecision(2)

99: cout << setprecision(2)

*/

// some manipulators are useful for text alignment for output

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Dog age in human years (dogyears.com)
  cout << setw(10) << left << "Dog age" << "|";
  cout << setw(12) << right << "Human age" << endl;

  // Produce long line
  cout << setfill('-') << setw(23) << "" << endl;

  // Reset fill character back to space
  cout << setfill(' ');

  cout << setw(10) << left << "2 months" << "|";
  cout << setw(12) << right << "14 months" << endl;
  cout << setw(10) << left << "6 months" << "|";
  cout << setw(12) << right << "5 years" << endl;
  cout << setw(10) << left << "8 months" << "|";
  cout << setw(12) << right << "9 years" << endl;
  cout << setw(10) << left << "1 year" << "|";
  cout << setw(12) << right << "15 years" << endl;

  // Produce long line
  cout << setfill('-') << setw(23) << "" << endl;

  return 0;
}

/*
Output:

   10chars   12chars
Dog age   | Human age
-----------------------
2 months  |  14 months
6 months  |    5 years
8 months  |    9 years
1 year    |   15 years
----------------------
*/

// Buffer Manipulators: send all bufer contents to output device without waiting
// endl -> from iostream, inserts \n into output buffer and telsl system to
// flush buffer
cout << endl;
// flush -> informs system to flush the buffer, from iostream
cout << flush;

// test may not appear on screen immediately if buffer isn't flushed
cout << "test";

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float myFloat1;
  float myFloat2;

  myFloat1 = 78.7243;
  myFloat2 = 12.3423;

  cout << setprecision(3) << myFloat1 << endl;
  cout << myFloat2
       << endl; // myFloat2 will ALSO be setprecision(3) -> 78.7 & 12.3

  return 0;
}

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float myFloat;

  myFloat = 50.3423;

  cout << setprecision(4) << myFloat << endl;
  cout << fixed << myFloat
       << endl; // fixed manipulator sets to fixed-poitn notation, setprecision
                // with fixed sets the max num of digits in fraction only

  return 0;
}

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float myFloat;

  myFloat = 12.3423;

  cout << scientific << setprecision(3)
       << myFloat; // scientific notation -> 1.234e+01

  return 0;
}

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << setw(7) << "Sam" << endl; // sets width of characters to 7
  cout << "Joe" << endl;

  return 0;
}
//    Sam
// Joe

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << setfill('-') << left; // sets fill chars to "-" instead of spaces
  cout << setw(6) << "Bob"
       << endl; // sets width to 6 cahrs, using -- instead of spaces -> Bob---
  cout << setw(6) << "Harry" << endl; // same as above, Harry-

  return 0;
}

/*

  Double areaApplied is read from input. Output areaApplied in fixed-point
  notation with a maximum of four digits in the fraction. End with a newline.

  Ex: If the input is 3940179.25, then the output is:

  3940179.2500 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double areaApplied;

  cin >> areaApplied;

  cout << setprecision(4) << fixed << areaApplied << endl;

  return 0;
}

/*Doubles pearWeight1 and pearWeight2 are read from input and changeWeight is
the value of pearWeight1 minus pearWeight2.

    Output pearWeight1 with a width of 14 characters. End with a newline.
    Output "- " (with a space after the minus sign).
    Output pearWeight2 with a width of 12 characters. End with a newline.

Ex: If the input is 566258.0 3649.5, then the output is:

     566258.00
-      3649.50
**************
     562608.50
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double pearWeight1;
  double pearWeight2;
  double changeWeight;

  cin >> pearWeight1;
  cin >> pearWeight2;
  changeWeight = pearWeight1 - pearWeight2;

  cout << fixed << setprecision(2) << right;

  cout << setw(14) << pearWeight1 << endl;
  cout << "- ";
  cout << setw(12) << pearWeight2 << endl;

  cout << setfill('*') << setw(14) << ""
       << endl; // Output the horizontal separator
  cout << setfill(' ') << setw(14) << changeWeight << endl; // Output result

  return 0;
}

/*String foodName and integer foodQuantity are read from input.

    Set the fill to '{'.
    Output foodName with a width of 13 characters and left-aligned.
    Set the fill to '}'.
    Output foodQuantity with a width of 13 characters and right-aligned. End
with a newline.

Ex: If the input is fig 832, then the output is:

fig{{{{{{{{{{}}}}}}}}}}832
 */
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  string foodName;
  int foodQuantity;

  cin >> foodName;
  cin >> foodQuantity;

  cout << setfill('{') << setw(13) << left << foodName;
  cout << setfill('}') << setw(13) << right << foodQuantity << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int litterSize; // variable declaration
  int yearlyLitters;
  int annualMice;

  litterSize = 3; // Low end of litter size range| variable assignment statement
  yearlyLitters = 5; // Low end of litters per year

  cout << "One female mouse may give birth to ";
  annualMice = litterSize * yearlyLitters;
  cout << annualMice << " mice," << endl;

  litterSize = 14;    // High end
  yearlyLitters = 10; // High end

  cout << "and up to ";
  annualMice = litterSize * yearlyLitters;
  cout << annualMice << " mice, in a year." << endl;

  return 0;
}

// Variables are often assigned a value during declaration

#include <iostream>
using namespace std;

int main() {
  int avgLifespan = 70; // declaraiton with assignment
  int userAge;          // declaration without assignment

  cout << "Enter your age: ";
  cin >> userAge;
  cout << userAge << " is a great age" << endl;

  cout << "Average lifespan is " << avgLifespan << endl;

  return 0;
}

int x = x + 1; // incrementing
int x = x - 1; // decrementing

#include <iostream>
using namespace std;

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months
*/

int main() {
  int downPayment;
  int paymentPerMonth;
  int numMonths;
  int totalCost; // Computed total cost to be output

  cout << "Enter down payment: ";
  cin >> downPayment;

  cout << "Enter monthly payment: ";
  cin >> paymentPerMonth;

  cout << "Enter number of months: ";
  cin >> numMonths;

  totalCost = downPayment + (paymentPerMonth * numMonths);

  cout << "Total cost: " << totalCost << endl;

  return 0;
}

/*Integer variables height, length, and width are read from input, representing
the height, the length, and the width of a pyramid, respectively. Assign
pyramidVolume with the volume of the pyramid.

Ex: If the input is 6 11 12, then the output is:

Volume: 264

Note: The volume of a pyramid is calculated by dividing the product of the
height, the length, and the width by 3. */

#include <iostream>
using namespace std;

int main() {
  int height;
  int length;
  int width;
  int pyramidVolume;

  cin >> height;
  cin >> length;
  cin >> width;

  pyramidVolume = (height * length * width) / 3;

  cout << "Volume: " << pyramidVolume << endl;

  return 0;
}

/*Assume that burgers cost 9 dollars each, tacos cost 7 dollars each, and
burritos cost 6 dollars each. Given variables numBurgers, numTacos, and
numBurritos read from input, compute the total cost of all the burgers, tacos,
and burritos, and assign totalCost with the result.

Ex: If the input is 4 14 27, then the output is:

Cost: 296 */
#include <iostream>
using namespace std;

int main() {
  int burgerCost = 9;
  int tacoCost = 7;
  int burritoCost = 6;
  int numBurgers;
  int numTacos;
  int numBurritos;
  int totalCost;

  cin >> numBurgers;
  cin >> numTacos;
  cin >> numBurritos;

  totalCost = (numBurgers * burgerCost) + (numBurritos * burritoCost) +
              (numTacos * tacoCost);

  cout << "Cost: " << totalCost << endl;

  return 0;
}

// LeapYear Calc
#include <iostream>
using namespace std;

int main() {
  int userAgeYears;
  int userAgeDays;
  int userAgeMinutes;

  cout << "Enter your age in years: ";
  cin >> userAgeYears;

  userAgeDays = userAgeYears * 365; // Calculate days without leap years
  userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

  cout << "You are " << userAgeDays << " days old." << endl;

  userAgeMinutes = userAgeDays * 24 * 60; // 24 hours/day, 60 minutes/hour
  cout << "You are " << userAgeMinutes << " minutes old." << endl;

  return 0;
}

// Doubles store floating poitn numbers

#include <iostream>
using namespace std;

int main() {
  double milesTravel; // User input of miles to travel
  double hoursFly;    // Travel hours if flying those miles
  double hoursDrive;  // Travel hours if driving those miles

  cout << "Enter miles to travel: ";
  cin >> milesTravel;

  hoursFly = milesTravel / 500.0;  // Plane flies 500 mph
  hoursDrive = milesTravel / 60.0; // Car drives 60 mph

  cout << milesTravel << " miles would take:" << endl;
  cout << "   " << hoursFly << " hours to fly" << endl;
  cout << "   " << hoursDrive << " hours to drive" << endl;

  return 0;
}

// Floating point division by 0
// if dividend and divisor are 0, the division resutls in Not a Number (nan)
// NAN -> unrepresentable / undefined value
// printing a float that's nota number -> "nan"

#include <iostream>
using namespace std;

int main() {
  double gasVolume;
  double oilVolume;
  double mixRatio;

  cout << "Enter gas volume: ";
  cin >> gasVolume;

  cout << "Enter oil volume: ";
  cin >> oilVolume;

  mixRatio = gasVolume / oilVolume;

  cout << "Gas to oil mix ratio is " << mixRatio << ":1" << endl;

  return 0;
}

// Float Manipulation
//  fixed & setprecision(x) are used commonly to ensure the float outputs are
//  concise and consistent most floats have MANY digits after decimal,
//  irrational numbers, repeating numbers, etc
//
cout << fixed << setprecision(3) << 3.1244 << endl;
cout << 2.1 << endl;
cout << fixed << setpresicion(2) << myFloat << endl;

cout << "Default output of pi: " << M_PI << endl;
cout << "pi reduced to 4 digits after the decimal: ";
cout << fixed << setprecision(4) << M_PI << endl;

/*One hour equals 60 minutes. The following program intends to read a
floating-point value from input, convert the value from minutes to hours, and
output the quantity in hours, but the code contains errors. Find and fix the
errors.

Ex: If the input is 3.5, then the output is:

0.058 hours */
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Modify the following code
  double lengthMins; // originally was int
  double lengthHours;

  cin >> lengthMins;

  lengthHours = lengthMins / 60;

  cout << fixed << setprecision(3) << lengthHours << " hours" << endl;

  return 0;
}

/*Given sphereRadius, compute the volume of a sphere and assign sphereVolume
with the result. Use (4.0 / 3.0) to perform floating-point division, instead of
(4 / 3) which performs integer division.

Volume of sphere = (4.0 / 3.0) π r3 (Hint: r3 can be computed using *. Use the
constant M_PI for the value of pi.)  */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double sphereVolume;
  double sphereRadius;

  cin >> sphereRadius;

  sphereVolume =
      (4.0 / 3.0) * M_PI * (sphereRadius * sphereRadius * sphereRadius);

  cout << fixed << setprecision(2) << sphereVolume << endl;

  return 0;
}

/*A polynomial is given by p = -5.0x^2 + 8.0x + 3.0. Declare double variables x
and p.
 *
Then, read x from input and compute p using the polynomial. */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  double x;
  double p;

  cin >> x;
  p = (-5.0 * (x * x)) + (8.0 * x) + 3.0;

  cout << fixed << setprecision(3) << p << endl;

  return 0;
}

/*Complete the code to output "Edge is " followed by the value of cubeEdge to
two digits after the decimal point. On the next line, output "Volume is "
followed by the value of cubeVol to five digits after the decimal point. End
with a newline.

Ex: If the input is 3.80, then the output is:

Edge is 3.80
Volume is 54.87200

Note: setprecision(X) can be used in an output statement to print a double to X
digits after the decimal point. */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double cubeEdge;
  double cubeVol;

  cin >> cubeEdge;

  cubeVol = cubeEdge * cubeEdge * cubeEdge;

  cout << "Edge is " << fixed << setprecision(2) << cubeEdge << endl;
  cout << "Volume is " << fixed << setprecision(5) << cubeVol << endl;

  return 0;
}

/*The conductance of a metal is given by  metalConductance =
electicCurrent/ElectricVoltage.
 *  Read double variables electricCurrent and electricVoltage from input,
respectively. Then, compute metalConductance using the formula.
 *
Finally, output "Metal conductance is " followed by the value of
metalConductance to four digits after the decimal point. End with a newline. */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  double electricCurrent;
  double electricVoltage;
  double metalConductance;

  cin >> electricCurrent;
  cin >> electricVoltage;
  metalConductance = electricCurrent / electricVoltage;

  cout << "Metal conductance is " << fixed << setprecision(4)
       << metalConductance << endl;

  return 0;
}
