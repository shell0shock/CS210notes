/*
 * SEP2026
 * Below are code examples, challenge activities and zybooks examples for CS 210
 * and my own personal notes and edits Used for my own personal reference with
 * no expectaion of accuracy or correctness
 */

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

// Floating Points & scientific notation:
//  leading digit for float literals should be nonzero
//
include<iostream> using namespace std;

int main() {
  double avogadrosNumber =
      6.02e23; // Approximation of atoms per mole  | avragado's number
  double gramsPerMoleGold = 196.9665; // float with nonzero leading digit
  double gramsGold;
  double atomsGold;

  cout << "Enter grams of gold: ";
  cin >> gramsGold;

  atomsGold = gramsGold / gramsPerMoleGold *
              avogadrosNumber; // float calc using doubles from above

  cout << gramsGold << " grams of gold contains ";
  cout << atomsGold << " atoms" << endl; // C++ will automaticaklly display in
                                         // scientific notation if too large

  return 0;
}

// e-x -> amount of zeros before first digit (inclusive)
//  ex -> zeroes after first digit (inclusive)
// 1.0e-4 -> 0.0001 | 4 digits before 1
// 7.2e-4 -> 0.00072 | 4 digits before 7
//  540000000 -> 5.4e8 | 8 digits after the 5
//  623.596 -> 6.23596e2 | two digits after the 6, think that e shifts the
//  decimal x amount in the desired direction (+/-) | 456.23 -> 4.5623e2 so
//  623.596 -> 6.23596e2 | e0 = 623.596 e1 = 62.3596 e2= 6.23596 e-1 = 6235.96

/*Type 4.872e3 as a floating-point literal with one digit after the decimal
 * point. Note: Do not use scientific notation. */
4872.0
    // Type 5.318e-4 as a floating-point literal with one digit before and seven
    // digits after the decimal point. Note: Do not use scientific notation.
    0.0005318
    // Initialize bohrRadius with 5.291772 x 10⁻¹¹ using scientific notation.
    double bohrRadius = 5.291772e-11

/*Compute the acceleration of gravity for a given distance from the earth's
 * center, distCenter, assigning the result to accelGravity. The expression for
 * the acceleration of gravity is: (G * M) / (d2), where G is the gravitational
 * constant 6.673 x 10-11 M is the mass of the earth 5.98 x 1024 (in kg) and d
 * is the distance in meters from the earth's center (stored in variable
 * distCenter). Note: Assume distance is at least the radius of the earth.  */
#include <iostream>
using namespace std;

int main() {
  double G = 6.673e-11;
  double M = 5.98e24;
  double accelGravity;
  double distCenter;

  cin >> distCenter;

  accelGravity = (G * M) / (distCenter * distCenter);

  cout << accelGravity << endl;

  return 0;
}
//Constants - Variables preceded with "const" that cannot be modified, compiler will report an error
// good practice: use Caps when naming them -> const double SECONDS_PER_MINUTE


#include <iostream>
using namespace std;

/*
 * Estimates distance of lightning based on seconds
 * between lightning and thunder
 */

int main() {
   const double SPEED_OF_SOUND   = 761.207; // Miles/hour (sea level) //const keyword, val cannot change
   const double SECONDS_PER_HOUR = 3600.0;  // Secs/hour
   double secondsBetween;
   double timeInHours;
   double distInMiles;
   
   cout << "Enter seconds between lightning and thunder: ";
   cin  >> secondsBetween;
   
   timeInHours = secondsBetween / SECONDS_PER_HOUR;
   distInMiles = SPEED_OF_SOUND * timeInHours;
   
   cout << "Lightning strike was approximately" << endl;
   cout << distInMiles << " miles away." << endl;
   
   return 0;
}

/*Complete the declaration of the constant integer variable SECONDS_PER_HOUR.

The program then reads integer numHours from input and converts the number of hours to number of seconds, using SECONDS_PER_HOUR.

Ex: If the input is 4, then the output is:

4 hours = 14400 seconds */

#include "testcode.h"  // For code testing purposes
#include <iostream>
using namespace std;

int main() {
   const int SECONDS_PER_HOUR = 3600;
   int numHours;
   int numSeconds;

   cin >> numHours;

   numSeconds = numHours * SECONDS_PER_HOUR;

	cout << numHours << " hours = " << numSeconds << " seconds" << endl;

   RunTests();  // Testing code

   return 0;
}

/*Declare constant integer variable DAYS_PER_WEEK and constant double variable FEE_PER_DAY, and initialize the variables as follows:

    DAYS_PER_WEEK has value 7.
    FEE_PER_DAY has value 33.50.

The program then reads integer numWeeks from input and calculates the total expense given the number of weeks, using DAYS_PER_WEEK and FEE_PER_DAY.

Ex: If the input is 5, then the output is:

5 weeks = 1172.50 dollars */


#include "testcode.h"  // For code testing purposes
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   const int DAYS_PER_WEEK = 7;
   const double FEE_PER_DAY = 33.50;

   int numWeeks;
   double totalExpense;

   cin >> numWeeks;

   totalExpense = numWeeks * DAYS_PER_WEEK * FEE_PER_DAY;

	cout << numWeeks << " weeks = ";
	cout << fixed << setprecision(2) << totalExpense << " dollars" << endl;

   RunTests();  // Testing code

   return 0;
}

//Math Standart Libarary -> ~20 math functions
// needs included to use them 
// inlcuded as functions
//Function -> list of statements executed by using the functiosn name (function call)
// arguments are the input values to the function, parameters are their actual values 
// myFunc(argument1, argument2) -> comma separated arguments for the function
// argument1 -> argument, if argument1 = 3, 3 -> parameter



#include <iostream>
#include <cmath> //math library
using namespace std;
 
int main() {
   double sideSquare;
   double areaSquare = 49.0;
 
   sideSquare = sqrt(areaSquare); //square root function from math library

   cout << "Square root of " << areaSquare
        << " is " << sideSquare << endl;

   return 0;
}



//Example -> Mass growth using Math Functions from <cmath>

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double initMass;   // Initial mass of a substance
   double growthRate; // Annual growth rate
   double yearsGrow;  // Years of growth
   double finalMass;  // Final mass after those years

   cout << "Enter initial mass: ";
   cin  >> initMass;

   cout << "Enter growth rate (Ex: 0.05 is 5%/year): ";
   cin  >> growthRate;

   cout << "Enter years of growth: ";
   cin  >> yearsGrow;

   finalMass = initMass * pow(1.0 + growthRate, yearsGrow);
   // Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow

   cout << "Final mass after " << yearsGrow
        << " years is: " << finalMass << endl;

   return 0;
}

//Function call arguments can be funcion calls themselves
// saves LOC and increases readability & concision
z = pow(2.0,pow(2.0,3.0)); 
x = -9.0; -> z = sqrt(fabs(x)); // square root of absolute value of x

#include <cmath> //lets you use math operations & functions
//some math functions for ints ar from c's standard libary
#include <cstdlib> //lets you use them i.e. abs()

//compute x = v - sqrt(w)
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   double v;
   double w;
   double x;

   cin >> v;
   cin >> w;

   x = v - sqrt(w);

   cout << fixed << setprecision(2); // setprecision(2) outputs x with 2 decimal places
   cout << x << endl;

   return 0;
}

//Compute val = |sqrt(w)/x|
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   double w;
   double x;
   double val;

   cin >> w;
   cin >> x;

   val = fabs(sqrt(w)/x);

   cout << fixed << setprecision(2); // setprecision(2) outputs val with 2 decimal places
   cout << val << endl;

   return 0;
}

//compute answer = sqrt(|g|/h^3)
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   double g;
   double h;
   double answer;

   cin >> g;
   cin >> h;

   answer = sqrt(fabs(g) / pow(h,3));

   cout << "answer = ";
	cout << fixed << setprecision(2); // setprecision(2) outputs answer with 2 decimal places
   cout << answer << endl;

   return 0;
}

// / performs int division, if both are ints it doesn't generate a fraction and only outputs the undrounded whole number
// int w = 10;
// int x = 4;
// y = w/x -> 2  |real answer is 2.5, it drops the .5
// if at least one operand is a float/double, it does float division
// int w = 10;
// double x = 4.0;
// y = w/x -> 2.5 | does float division 
// (5 +  10 + 15) * (1 / 3)  = 0, because (1/3) = 0.333, int division results in only the whole so 0 |KEEP THIS IN MIND FOR LOGIC ERRORS THAT YOU WILL END UP DOING LOL


//for integer division the second operand of / or % must never be 0, because division by 0 is mathematically undefined.
// Divid by 0 error occurs at runtime terminating program
// runtime error - error that occurs during execution & terminates program early

#include <iostream>
using namespace std;

int main() {
   int salaryPerYear; // User input: Yearly salary
   int daysPerYear;   // User input: Days worked per year
   int salaryPerDay;  // Output:     Salary per day

   cout << "Enter yearly salary: ";
   cin  >> salaryPerYear;
   
   cout << "Enter days worked per year: ";
   cin  >> daysPerYear;

   // If daysPerYear is 0, then divide-by-zero causes program termination.
   salaryPerDay = salaryPerYear / daysPerYear;

   cout << "Salary per day is: " << salaryPerDay << endl;

   return 0;
}

// The modulo operator (%) evaluates the remainder of the division of two integer operands. Ex: 23 % 10 is 3.
// 9 % 5 = 4, 5 goes into 9 once, 4 remains
// 10 % 4.0 not valid, only usable with INTS
// 

#include <iostream>
using namespace std;

int main() {
   int userMinutes;   // User input: Minutes
   int outHours;      // Output hours
   int outMinutes;    // Output minutes (remaining)

   cout << "Enter minutes: ";
   cin  >> userMinutes;

   outHours   = userMinutes / 60;
   outMinutes = userMinutes % 60; //remaining minutes

   cout << userMinutes << " minutes is ";
   cout << outHours    << " hours and ";
   cout << outMinutes  << " minutes." << endl;

   return 0;
}
//Using only the variable totalFlowers, complete the statement to assign remainingFlowers with the number of remaining flowers after creating as many bunches of 12 as possible. 
remainingFlowers = totalFlowers % 12;


//Modulo Examples:
randNum % 10 -> gives 0-9, possible remainders are 0,1,...9 | 10 as remainder not possible because 19%10 is 9, 20%10 is 0
randNum % 51 -> yields 0-50, doing % 50 would yield 0-49
(randNum % 11) + 20 -> yields 20-30, the %11 yields 0-10 and the + 20 adds 20 so we get 20-30

//Given a number % & / can bue used for each digit, having a 3 digit like userVal = 927:
onesDigit     = userVal % 10;    // Ex: 927 % 10 is 7. 
tmpVal        = userVal / 10;

tensDigit     = tmpVal % 10;     // Ex: tmpVal = 927 / 10 is 92. Then 92 % 10 is 2.
tmpVal        = tmpVal / 10;

hundredsDigit = tmpVal % 10;     // Ex: tmpVal = 92 / 10 = 9. Then 9 % 10 is 9.

/* Given a 10-digit phone number stored as an integer, % and / can be used to get any part, such as the prefix.
 
For phoneNum = 1365551212 (whose prefix is 555):

tmpVal = phoneNum / 10000; // / 10000 shifts right by 4, so 136555. 
prefixNum = tmpVal % 1000; // % 1000 gets the right 3 digits, so 555.

Dividing by a power of 10 shifts a value right. 321 / 10 is 32. 321 / 100 is 3.

% by a power of 10 gets the rightmost digits. 321 % 10 is 1. 321 % 100 is 21.  */



/*
Integer variables totalMinutes and mileTimeAda are read from input.
Ada takes mileTimeAda minutes to travel a mile, and has totalMinutes minutes available.
Assign remainingMinutes with the remaining minutes after Ada travels as many complete miles as possible.

Ex: If the input is 19 5, then the output is:
Remaining minutes: 4 */

#include <iostream>
using namespace std;

int main() {
   int totalMinutes;
   int mileTimeAda;
   int remainingMinutes;

   cin >> totalMinutes;
   cin >> mileTimeAda;

   remainingMinutes = totalMinutes % mileTimeAda;

   cout << "Remaining minutes: " << remainingMinutes << endl;

   return 0;
}

//Integer userValue is read from input. Assume userValue is greater than 1000 and less than 99999. Assign onesDigit with userValue's ones place value.
//Ex: If the input is 27986, then the output is: Value in ones place: 6

#include <iostream>
using namespace std;

int main() {
   int userValue;
   int onesDigit;

   cin >> userValue;

   onesDigit = userValue % 10;

   cout << "Value in ones place: " << onesDigit << endl;
}

/*
  Convert totalOunces to pints, cups, and ounces, finding the maximum number of pints, then cups, then ounces.
  
  Ex: If the input is 44, then the output is:
  
  Pints: 2
  Cups: 1
  Ounces: 4
  
  Note: A pint is 16 ounces. A cup is 8 ounces. */

#include <iostream>
using namespace std;

int main() {
   int totalOunces;
   int numPints;
   int numCups;
   int numOunces;

   cin >> totalOunces;

   numPints = totalOunces / 16;
   numCups = (totalOunces % 16) / 8;
   numOunces = totalOunces % 8;

   cout << "Pints: " << numPints << endl;
   cout << "Cups: " << numCups << endl;
   cout << "Ounces: " << numOunces << endl;

   return 0;
}

//Type COnversions
// implicit -> done by compiler automaticaly
// int-to-double -> adds .0  | 25 -> 25.0
// float-to-double -> drops fraction, no rounding | 4.9 = 4

//For arithmetic -> if either operand is a double, the other is automatically made into a double
//for assignments, the right side type is converted to left side's type

int numitems = 5
double itemWeight = 0.5
  someDoubleVar = itemWeight * numitems -> 2.5 | 5 is converted to 5.0, then 0.5*5.0 = 2.5
  someIntVar = itemWeight * numItems -> 2 | 5 is converted to 5.0, 0.5 * 5.0 = 2.5, then the value is an int so the ocmpiler converts the double to int, dropping the fraction

//Type Casting Explicit
// Type Cast explicitly converts a value of one type to another, using static_cast
static_cast<dataType>(expression)
//example:
myInt = 7;
static_cast<double>(myInt);
myInt = 7.0;


#include <iostream>
using namespace std;

int main() {
   int kidsInFamily1;       // Should be int, not double
   int kidsInFamily2;       // (know anyone with 2.3 kids?)
   int numFamilies; 
   
   double avgKidsPerFamily; // Expect fraction, so double

   kidsInFamily1 = 3;
   kidsInFamily2 = 4;
   numFamilies = 2; 
   
   avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2) / static_cast<double>(numFamilies);
   //first static_cast changes datatype of kidsInFamily1 and kidsInFamily2's addition to a double, along with numFamilies division, resulting in a double
   
   cout << "Average kids per family: " << avgKidsPerFamily << endl;
   
   return 0;
}

#include <iostream>
using namespace std;

int main() {
   int kidsInClass1;
   int kidsInClass2;
   int numClasses;
   double kidsAvgMethod1;
   double kidsAvgMethod2;
   
   kidsInClass1 = 7;
   kidsInClass2 = 2;
   numClasses = 2;
   
   kidsAvgMethod1 = static_cast<double>(kidsInClass1 + kidsInClass2) / static_cast<double>(numClasses); //done correctly. results in float division
   kidsAvgMethod2 = (kidsInClass1 + kidsInClass2) / numClasses; //no casting, rsults in incorrect int division
   
   cout << kidsAvgMethod1 << endl;
   cout << kidsAvgMethod2 << endl;
   
   return 0;
}

examAvg = static_cast<double>((midtermScore + finalScore) / 2); //done incorrectly, they type cast the ENTIRE OPERATION, should only be the first part
examAvgCorrect = static_Cast<double>(midTermScore + finalScore) / 2; // done correctly



//Integer numUnits is read from input. Complete the output statement to type cast numUnits to a double.
//Ex: If the input is 85, then the output is: 85.00


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int numUnits;

   cin >> numUnits;

   cout << fixed << setprecision(2) << static_cast<double>(numUnits) << endl;
   
   return 0;
}


/*Given that 1 meter = 100 centimeters, complete the calculation to convert the double numMeters to the integer numCentimeters using implicit conversion.

Ex: If the input is 7.5, then the output is:

750 centimeters */

#include <iostream>
using namespace std;

int main() {
   const int CENTIMETERS_PER_METER = 100;
   double numMeters;
   int numCentimeters;

   cin >> numMeters;

   numCentimeters = static_cast<double>(numMeters) * CENTIMETERS_PER_METER;

   cout << numCentimeters << " centimeters" << endl;

   return 0;
}


//Integers nappingTime1, nappingTime2, and kidsCount are read from input.
//Compute the average napping time of each kid using floating-point division and assign the result to averageTime.
//Ex: If the input is 2 3 2, then the output is: 2.50

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int nappingTime1;
	int nappingTime2;
   int kidsCount;
   double averageTime;

   cin >> nappingTime1;
	cin >> nappingTime2;
   cin >> kidsCount;

   averageTime = static_cast<double>(nappingTime1 + nappingTime2) / kidsCount;

   cout << fixed << setprecision(2) << averageTime << endl;

   return 0;
}

//Characters
// a variable of char type -> char myChar = 'm'; -> stores a signle character
// character literal -> single quoted chars
#include <iostream>
using namespace std;

int main() {
   char arrowBody;
   char arrowHead;

   arrowBody = '-'; //- char literal
   arrowHead = '>';// > char literal

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl; // --->

   arrowBody = 'o';

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl; //ooo>

   return 0;
}

//cin can be used to get one chaeracter from input -> cin >> myChar;
#include <iostream>
using namespace std;

int main() {
   char bodyChar;
   char headChar;

   cout << "Type two characters: ";
   cin  >> bodyChar;
   cin  >> headChar;

   // Output arrow body then head
   cout << bodyChar << bodyChar << bodyChar;
   cout << headChar << endl;

   return 0;
}

#include <iostream>
using namespace std;

int main() {
   char   userChar;

   cin  >> userChar; //reads char from input

   cout << userChar << " " << userChar << endl; //prints |space char space newline
   cout << " " << userChar << endl;// prints space char endl
   cout << userChar << userChar << userChar << endl; //prints char char char endl
/* if char is *:
  ^ ^
   ^
  ^^^
 */
   return 0;
}

//chars are stored as numbers in accordance with that character's ACSII value, a = 97, compiler outputs the number value's corresponding character
// myChar = 'a'; -> stored as 97 in memory, cout << myChar -> prints 97's ascii value
//http://www.asciitable.com/

//capital and lowercase characters are different ascii encodings

//escpae sequences -> characters preceded by \ that allow for special characters to be used
// \n - new line
// \' - single quote
// \\ - \
// 
// cout << "Say \"Hello\""; -> Say "Hello"


/*Print a message telling a user to press the letterToQuit key numPresses times to quit. End with newline. Ex: If letterToQuit = 'q' and numPresses = 2, print:

Press the q key 2 times to quit. */

#include <iostream>
using namespace std;

int main() {
   char letterToQuit;
   int  numPresses;

   cin >> letterToQuit;
   cin >> numPresses;

   cout << "Press the " << letterToQuit << " key " << numPresses << " times to quit." << endl;

   return 0;
}

//Strings & String Literals
// String -> sequence of characters including spaces, numbers, letters, symbosl surrounded in double quotes
// string literal -> double quote surrounded dequence of chars, "My STring"
//string isn't built into C++ like char, double, int, float, etc. needs accessed using String library
#include <iostream>
#include <string> //allows use of strings
using namespace std;
 
int main() {
   string sentenceSubject;
   string sentenceVerb;
   string sentenceObject = "an apple";

   sentenceSubject = "boy";
   sentenceVerb = "ate";

   cout << "A ";
   cout << sentenceSubject << " ";
   cout << sentenceVerb << " ";
   cout << sentenceObject << "." << endl;
 
   return 0;
}

//Getting a string from user:
cin >> userString;
//automatically skips initial whitespace and gets characters until next whitespace


//word Game Example
#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;

/* A game inspired by "Mad Libs" where user enters nouns,
 * verbs, etc., and then a story using those words is output.
 */

int main() {
   string wordRelative;
   string wordFood;
   string wordAdjective;
   string wordTimePeriod;

   // Get user's words
   cout << "Type input without spaces." << endl;

   cout << "Enter a kind of relative: " << endl;
   cin  >> wordRelative;

   cout << "Enter a kind of food: " << endl;
   cin  >> wordFood;

   cout << "Enter an adjective: "   << endl;
   cin  >> wordAdjective;

   cout << "Enter a time period: "  << endl;
   cin  >> wordTimePeriod;

   // Tell the story
   cout << endl;
   cout << "My " << wordRelative << " says eating " << wordFood << endl;
   cout << "will make me more " << wordAdjective << "," << endl;
   cout << "so now I eat it every " << wordTimePeriod << "." << endl;

   return 0;
}

//Sometimes an entire line is needed from input, not just chars until next whitespace
// using getline(cin,stringVar) gets all text on input line up until the next newline which is removed
// WILL capture leading whitespace
getline(cin,firstString); -> "This is what I'm typing!, I hit Enter after the exclamation!" ->firstString = This is what I'm Typing!


//Getting Multi-Word Names example
#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;

   cout << "Enter first name:" << endl;
   getline(cin, firstName); // Gets entire line up to ENTER including leading whitespace, ignores the newline whitespace (user hitting enter)

   cout << "Enter last name:" << endl;
   getline(cin, lastName); // Gets entire line up to ENTER

   cout << endl;
   cout << "Welcome " << firstName << " " << lastName << "!" << endl;
   cout << "May I call you " << firstName << "?" << endl;

   return 0;
}

//cin and getline can be mixed but is often tricky as cin >> leaves the newline in the input, getline() does not skip leading whitespace
//Input:
// Kindness\n
//    is contagious\n
cin >> str1; ->kindness
cin >> str2; -> is

cin >> str1; -> kindess
getline(cin, str2); blank

cin >> str1; -> kindess
getline(cin, tempStr); -> blank 
//tempStr stores the newline chars
getline(cin,str2); ->   is contagious

  /*String variables userName and countryName are read from input. Use variables userName and countryName to output the following. End with a newline.
  
  Ex: If the input is Gus Norway, then the output is:
  
  Gus lives in Norway. */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   string countryName;

   cin >> userName;
   cin >> countryName;

   cout << userName << " lives in " << countryName << "." << endl;

   return 0;
}

/*Read the string variables firstName and lastName from input, assuming that the first name and last name are single words.

Ex: If the input is Gus Chow, then the output is:

My name is Gus Chow */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;
   cin >> firstName;
   cin >> lastName;
   cout << "My name is " << firstName << " " << lastName << endl;

   return 0;
}
/*Read the string variables studentName and courseName from input, assuming that the name is a single word and the course contains multiple words with any leading spaces.

Ex: If the input is Eli Machine Learning, then the output is:

Eli
 Machine Learning */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string studentName;
   string courseName;

   cin >> studentName;
   getline(cin, courseName);

   cout << studentName << endl;
	cout << courseName << endl;
	
   return 0;
}

//Integer Overflow -> integers can only store 32 bits, storing / attempting to store more than 32 bits causes an overflow
// 4293967297 -> 33 bits, cannot be stored as an int
//long long can store 64 bits, but overflow is still possible
// compilers will give a compiler warnign indicating possible overflow
// Given int variables num1, num2, num3 each with values near 1 billio
//(num1 + num2 + num3) / 3 will encounter overflow in the numerator, which will reach about 3 billion
// (max int is around 2 billion)
// even though the final result after dividing by 3 would have been only 1 billion.

//Overflow example -> changing num to long long will correct it
#include <iostream>
using namespace std;

int main() {
   int num; //long long num; -> fixed

   num = 100;
   num = num * 100;
   cout << "num: " << num << endl;

   num = num * 100;
   cout << "num: " << num << endl;

   num = num * 100;
   cout << "num: " << num << endl;

   return 0;
}

//Numeric data types include char, short, int, long, long long
/*
data type     bit size    number range
char         	8 	      -128 to 127
short        	16 	      -32,768 to 32,767
int          	16/32 	  (32-bit) -2,147,483,648 to 2,147,483,647
long         	32/64 	  (32-bit) -2,147,483,648 to 2,147,483,647
long long    	64 	      -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
*/

/*
float  	32 bits 	-3.4x1038 to 3.4x1038
double 	64 bits 	-1.7x10308 to 1.7x10308 */
//overflow with floating-poitn results in infinity
//1 bit reserved for sign, some reserved for mantissa (fraction before exponent in scientific notation) and the rest for the exponent
//4.7x10^12 -> 4.7 = mantissa


/*Variable priceChange represents the change of a stock's price with a value between -100 and 100. Declare priceChange as a variable of type char.

Ex: If the input is 2, then the output is:

Stock's price change: 2 */

#include <iostream>
#include <string>
#include "testcode.h" // For code testing purposes
using namespace std;

int main() {
	string intStr;

   char priceChange;

   cin >> intStr;
	priceChange = stoi(intStr); // For conversion purposes
   
   cout << "Stock's price change: " << priceChange << endl;
   
   Runtests(); // Testing code
   
   return 0;
}

/*A nurse needs to compute medicationStrength to the accuracy of 5 decimal places.
Variable medicationStrength represents the total amount of a medication divided by the duration the medication is applied.
Declare medicationStrength as a variable of type float.

Ex: If the input is 1 32, then the output is:

Result: 0.03125 */


#include <iostream>
#include <iomanip>
#include "testcode.h" // For code testing purposes
using namespace std;

int main() {
   int medicationQuantity;
   int durationApplied;

   float medicationStrength;

   cin >> medicationQuantity;
   cin >> durationApplied;
   
   medicationStrength = static_cast<float>(medicationQuantity) / durationApplied;
   
   cout << setprecision(5) << "Result: " << medicationStrength << endl;
   
   Runtests(); // Testing code
   
   return 0;
}

//unsigned ints -> adding 'unsigned' tells the compiler that it will always be positive, so it doesn't need to store a sign and free's up space (1 bit) allowing larger numbers

/*
declaration           bit size        supported number range            standard defined minimum size
unsigned char 	      8 bits 	        0 to 255 	                        8 bits
unsigned short	      16 bits 	      0 to 65,535 	                    16 bits
unsigned long  	      32 bits 	      0 to 4,294,967,295 	              32 bits
unsigned long long 	  64 bits 	      0 to 18,446,744,073,709,551,615 	64 bits
unsigned int 	3       2 bits 	        0 to 4,294,967,295 	              16 bits
*/

//EX signed & unsigned
#include <iostream>
using namespace std;

int main() {
   unsigned long memSizeGiB;
   unsigned long long memSizeBytes;
   unsigned long long memSizeBits;
   
   cout << "Enter memory size in GiBs: ";
   cin >> memSizeGiB;
   
   // 1 GiB = 1024 MiB, 1 MiB = 1024 KiB, 1 KiB = 1024 bytes
   memSizeBytes = memSizeGiB * (1024 * 1024 * 1024);
   // 1 byte = 8 bits
   memSizeBits = memSizeBytes * 8;
   
   cout << "Memory size in bytes: " << memSizeBytes << endl;
   cout << "Memory size in bits: " << memSizeBits << endl;
   
   return 0;
}
/*Output:
Enter memory size in GiBs: 1
Memory size in bytes: 1073741824
Memory size in bits: 8589934592

...

Enter memory size in GiBs: 4
Memory size in bytes: 4294967296
Memory size in bits: 34359738368 */

//A measurement of the ocean's depth has a value between 0 and 20,000. Declare depthValue as a variable of type unsigned short.

#include "testcode.h"  // For code testing purpose
#include <iostream>
using namespace std;

int main() {

   unsigned short depthValue;
   // Assign depthValue with various values. Each unsigned value ends with u
   cout << "Depths measured: " << endl;

   depthValue = 18734u;
   cout << depthValue << endl;

   depthValue = 15359u;
   cout << depthValue << endl;

   depthValue = 0u;
   cout << depthValue << endl;

   depthValue = 20000u;
   cout << depthValue << endl;

   RunTests();  // Testing code

   return 0;
}

//Random Numbers - often a random number is needed for a program for many reasons
// using rand() function from C standard Library you can output a random integer from 0 - RAND_MAX
// RAND_MAX is machine dependent, it's at least 32767
#include <iostream>
#include <cstdlib> //c standard library is now usable
using namespace std;

int main() {
   cout << rand() << endl; //gives a random int
   cout << rand() << endl;
   cout << rand() << endl;

   cout << "(RAND_MAX: " << RAND_MAX << ")" << endl; //shows the max for rand (RAND_MAX: 2147483647)

   return 0;
}
//rand() % N yields N possible values, from 0 to N-1
// modulo is used to specify the range for possible random values
// rand() % 3 -> 0,1,2

//specific ranges are often needed, like starting at 10
// use teh rand() % value, then add your desired range start to it
// ex: need a num from 10-15, possible values in range is 15-10+1 (DON'T EVER FORGET +1)
// rand() % 6 gives us 6 values as needed 0 1 2 3 4 5 
// add start point (10) to it
// (rand() % 6) + 10 -> 10 11 12 13 14 15

(rand() % 41) + -20 // random integer from -20 to 20

(rand() & (30 - 18 + 1)) + 18 //random integer from range 18...30

//ex randomly moving a student's assigned seat
#include <iostream>
#include <cstdlib>
using namespace std;

// Switch a student
// from a random seat on the left  (cols  1 to 15)
// to a random seat on the right (cols 16 to 30)
// Seat rows are 1 to 20

int main() {
   int rowNumL;
   int colNumL;
   int rowNumR;
   int colNumR;

   rowNumL = (rand() % 20) + 1;  // 1 to 20
   colNumL = (rand() % 15) + 1;  // 1 to 15

   rowNumR = (rand() % 20) + 1;  // 1 to 20
   colNumR = (rand() % 15) + 16; // 16 to 30

   cout << "Move from ";
   cout << "row " << rowNumL << " col " << colNumL;
   cout << " to " ;
   cout << "row " << rowNumR << " col " << colNumR;
   cout << endl;

   return 0;
}
//rand() is actually not random, but pseudo random. Uses an equation to generate next random number based on the last one
// if rand() hasn't been called yet, it uses the seed - default 1
// change seed useing srand() - srand(3) seed is now 3
// great way to change seed is to use time - srand(time(0)) - time() give sseconds since 01/01/1970
// time() needs to have 0 or NULL in it's arguments to tell it to return current system time without usign a variable

//ex - usinga new seed for each program run 
#include <iostream>
#include <cstdlib>
#include <ctime>    // Enables use of time() function
using namespace std;

int main() {
   srand(time(0));  // Unique seed
   cout << rand() << endl;
   cout << rand() << endl;
   cout << rand() << endl;

   return 0;
}
//The <random> number library provides greater control of the random-number generation
// https://en.cppreference.com/cpp/numeric/random


/*Integer seedVal is read from input. srand() is called with seedVal as the seed
Use rand() to assign variables dataPoint1, dataPoint2, dataPoint3, dataPoint4, and dataPoint5 each with a random number generated between 0 and 25, both inclusive. */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int seedVal;
	int dataPoint1;
	int dataPoint2;
	int dataPoint3;
	int dataPoint4;
	int dataPoint5;
   int sum;

   cin >> seedVal;

   srand(seedVal);

   dataPoint1 = rand() % 26;
   dataPoint2 = rand() % 26;
   dataPoint3 = rand() % 26;
   dataPoint4 = rand() % 26;
   dataPoint5 = rand() % 26;


	sum = dataPoint1 + dataPoint2 + dataPoint3 + dataPoint4 + dataPoint5;

	cout << dataPoint1 << endl;
	cout << dataPoint2 << endl;
	cout << dataPoint3 << endl;
	cout << dataPoint4 << endl;
	cout << dataPoint5 << endl;
	cout << "Sum: " << sum << endl;

   return 0;
}

/*Integers seedVal and boundValue are read from input. srand() is called with seedVal as the seed.
Use rand() to assign variables value1, value2, value3, value4, and value5 each with a random number generated between 0 and boundValue - 1, both inclusive. */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int seedVal;
  int boundValue;
	int value1;
	int value2;
	int value3;
	int value4;
	int value5;
  int sum;

   cin >> seedVal;
   cin >> boundValue;

   srand(seedVal);

   value1 = (rand() % boundValue);
   value2 = (rand() % boundValue);
   value3 = (rand() % boundValue);
   value4 = (rand() % boundValue);
   value5 = (rand() % boundValue);

	sum = value1 + value2 + value3 + value4 + value5;

	cout << value1 << endl;
	cout << value2 << endl;
	cout << value3 << endl;
	cout << value4 << endl;
	cout << value5 << endl;
	cout << "Sum: " << sum << endl;

   return 0;
}

/*
Integers seedVal, lowerBound and upperBound are read from input. srand() is called with seedVal as the seed.
lowerBound and upperBound represent the range of numbers that can be picked on a lottery ticket.
Assign variables lottery1, lottery2, lottery3, and lottery4 each with a random number between lowerBound and upperBound, both inclusive.
Note: (rand() % N) + K yields a random number ranged from K to K + N - 1, both inclusive.
If the lower limit is lowerBound and the upper limit is upperBound, then N is upperBound - lowerBound + 1 and K is lowerBound. */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int seedVal;
	int lowerBound;
	int upperBound;
	int lottery1;
	int lottery2;
	int lottery3;
	int lottery4;

   cin >> seedVal;
	cin >> lowerBound;
	cin >> upperBound;

   srand(seedVal);

   lottery1 = (rand() % (upperBound - lowerBound + 1) + lowerBound);
   lottery2 = (rand() % (upperBound - lowerBound + 1) + lowerBound);
   lottery3 = (rand() % (upperBound - lowerBound + 1) + lowerBound);
   lottery4 = (rand() % (upperBound - lowerBound + 1) + lowerBound);

	cout << lottery1 << endl;
	cout << lottery2 << endl;
	cout << lottery3 << endl;
	cout << lottery4 << endl;

   return 0;
}

//Auto Keyword -> C++11 and newer 
// the auto keyword will tell the compiler to automatically determine the variable's type based on the initial given value

/*
Code	                   Variable	      Type found
auto                      v = 2;         	v	int
auto                      w = 0.5;      	w	double
const auto x = 7;	        x	              const int
auto y = 'h';           	y	              char
auto z = "apple";       	z             	const char 
*/

//typeid operator reports a variable's type
//name() function returns a string describing the variable's datatype
// description is imlementation dependent, g++ uses d for double c for char and i for int
typeid(x).name() 

#include <iostream>
using namespace std;

int main() {
  auto x = 4.5; //will become double x = 4.5

  cout << typeid(x).name(); //double, so it outputs 'd'

  return 0;
}

auto x = "hello";
cout << typeid(x).name() << endl; //will output PKc -> P = Pointer, K = Constant, c = char - typeid returns PKc when x is const char * (strings assigned with auto)
//When an auto variable is initialized with a string literal, the compiler interprets the type as a const char *, not as a string
//const char * means a constant pointer to a character array
// strings are arrays of constants



/*Driving is expensive.
Write a program with a car's gas mileage (miles/gallon) and the cost of gas (dollars/gallon) as floating-point input and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements. Note: End with a newline.

Ex: If the input is:

25.0 3.1599

where the gas mileage is 25.0 miles/gallon and the cost of gas is $3.1599/gallon, the output is:

2.53 9.48 63.20

Note: Real per-mile cost would also include maintenance and depreciation. */

#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

int main() {

   double gasMileage;
   double gasPrice;
   cout << "Enter your fuel economy in Miles per Gallon:\n";
   cin >> gasMileage;
   cout << "Enter the current price per gallon for gas in your area: \n";
   cin >> gasPrice;
   
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60
   // Type your cout code here
   cout << "Cost for 20 Miles: " << (20 / gasMileage) * gasPrice << " "; //20 miles
   cout << "Cost for 75 Miles: " << (75 / gasMileage) * gasPrice << " "; //75 miles
   cout << "Cost for 500 Miles: " << (500 / gasMileage) * gasPrice << endl; // 500 miles
   return 0;
}


//git rebased 194108SEB2026
// 
// 