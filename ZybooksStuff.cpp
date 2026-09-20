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

//Branch - sequence of statements that only execute if a certain condition is met
// If branch - a branch that's taken IFF a statement is true
// branches usually return back to the original code sequence
// if-else branch - 2x branches, one if true, the other if not true
#include <iostream>
using namespace std;
int main() {
  int x;
  int y;
  int max;
  cin >> x;
  cin >> y;
  if (x>y) {
    max = x;
  }
  else {
    max = y;
  }
  cout << max;
  return 0;
}

//if-else-if - if-else extended as much as needed
// each branch is sequentially executed, once one is found to be true that branch is taken; if none are true than the else block executes
//else block is optional, if not included none of the if branches execute

//If statemens are surrounded by braces after the expression condition, which is in parentheses
// only execute if expression is found true
// Equality operator - ==, means that left is equal to right, not that left is right

#include <iostream>
using namespace std;

int main() {
   int hotelRate;
   int numYears;

   hotelRate = 150;

   cout << "Enter number of years married: ";
   cin >> numYears;

   if (numYears == 50) { //checks that numYears is equal to 50
      cout << "Congratulations on 50 years "
            << "of marriage!" << endl;

      hotelRate = hotelRate / 2;
   }

   cout << "Your hotel rate: ";
   cout << hotelRate << endl;

   return 0;
}

//inequality - ! = -> Doesn't equal
// Boolean - T/F
//equality & inequality expressions evaluate to a boolean value
//chars are used often with equality expressions
x == 'c';

//if-else statements to test for even/odd

22

#include <iostream>
using namespace std;

int main() {
   int userNum;
   int divRemainder;

   cout << "Enter a number: ";
   cin  >> userNum;

   divRemainder = userNum % 2;

   if (divRemainder == 0) { //userNum % 2 = 0, no remainder after a half division
       cout << userNum << " is even." << endl;
   }
   else {
       cout << userNum << " is odd." << endl;
   }

   return 0;
}


bonusVal = 12;
if (bonusVal == 12) {
   bonusVal = bonusVal + 2;
   bonusVal = 3 * bonusVal;
}
else {
   bonusVal = bonusVal + 10;
}
//bonusval will equal 42, since bonusVal is equal to 12, the if block executes so bonusVal is then 12 + 2, and then 14 * 3

//If numPeople equals 10, execute groupSize = 2 * groupSize. Otherwise, execute groupSize = 3 * groupSize and numPeople = numPeople - 1.
if (numPeople == 10) {
    groupSize = 2 *groupSize;
}
else {
    groupSize = 3 * groupSize;
    numPeople = numPeople - 1;
}

//If numPlayers does not equal 11, execute teamSize = 11. Otherwise, execute teamSize = numPlayers. Then, no matter the value of numPlayers, execute teamSize = 2 * teamSize
if (numPlayers != 11) {
    teamSize = 11;
}
else {
    teamSize  = numPlayers;
}
teamSize = 2 * teamSize;

//Write an if-else statement for the following:
//If userTickets is equal to 7, execute awardPoints = 1. Else, execute awardPoints = userTickets.
//Ex: If userTickets is 3, then awardPoints = 3.

#include <iostream>
using namespace std;

int main() {
   int awardPoints;
   int userTickets;

   cin >> userTickets; // Program will be tested with values: 5, 6, 7, 8.

   if (userTickets == 7) {
      awardPoints = 1;
   }
   else {
      awardPoints = userTickets;
   }

   cout << awardPoints << endl;

   return 0;
}

//If numDifference is not equal to -15, execute totalDifference = -10. Else, execute totalDifference = numDifference.
#include <iostream>
using namespace std;

int main() {
   int totalDifference;
   int numDifference;

   cin >> numDifference; // Program will be tested with values: -13 -14 -15 -16.

   if (numDifference != -15) {
      totalDifference = -10;
   }
   else {
      totalDifference = numDifference;
   }

   cout << totalDifference << endl;

   return 0;
}

//multibranch if-else: 3+ expressions to be evaluated, once one is true that branch is followed, none true else branch followed
if (expression1) {
   // Statements that execute when expression1 is true
   // (first branch)
}
else if (expression2) {
   // Statements that execute when expression1 is false and expression2 is true
   // (second branch)
}
else {
   // Statements that execute when expression1 is false and expression2 is false
   // (third branch)
}

#include <iostream>
using namespace std;

int main() {
   int numYears;

   cout << "Enter number years married: ";
   cin  >> numYears;

   if (numYears == 1) {
      cout << "Your first year -- great!" << endl;
   }
   else if (numYears == 10) {
      cout << "A whole decade -- impressive." << endl;
   }
   else if (numYears == 25) {
      cout << "Your silver anniversary -- enjoy." << endl;
   }
   else if (numYears == 50) {
      cout << "Your golden anniversary -- amazing." << endl;
   }
   else {
      cout << "Nothing special." << endl;
   }

   return 0;
}

//Relation & equality operators work for ints, chars, and floats
// comparing chars -> compares their ACII encoding's numeric value
// Floats shouldn't be compared using equality as they are represented imprecisely
// Operators can also be used for strings
//        Strings are EQUAL if they have the same number of characters and those characters are identical, including capitalization

//If integer degreesCelsius is 100, output "Boiling point". Otherwise, output "Not the boiling point". End with a newline.

#include <iostream>
using namespace std;

int main() {
   int degreesCelsius;

   cin >> degreesCelsius;

   if (degreesCelsius == 100) {
      cout << "Boiling point" << endl;
   }
   else {
      cout << "Not the boiling point" << endl;
   }

   return 0;
}

/*If integer numberOfSides is:

    5, output "Pentagon".
    6, output "Hexagon".

Otherwise, output "Unexpected polygon". End with a newline. */
#include <iostream>
using namespace std;

int main() {
   int numberOfSides;

   cin >> numberOfSides;

   if (numberOfSides == 5) {
      cout << "Pentagon" << endl;
   }
   else if (numberOfSides == 6) {
      cout << "Hexagon" << endl;
   }
   else {
      cout << "Unexpected polygon" << endl;
   }
   return 0;
}

/*

  If integer numLegs is:

      1, output "Uniped".
      4, output "Quadruped".
      6, output "Hexapod".

  Otherwise, output "Leg count not found". End with a newline. */
#include <iostream>
using namespace std;

int main() {
   int numLegs;

   cin >> numLegs;

   if (numLegs == 1) {
      cout << "Uniped" << endl;
   }
   else if (numLegs == 4) {
      cout << "Quadruped" << endl;
   }
   else if (numLegs == 6) {
      cout << "Hexapod" << endl;
   }
   else {
      cout << "Leg count not found" << endl;
   }

   return 0;
}

//if-else-if is useful for number range detection
//  can be used to detect & assign an action for each portion of a range of numbers
// only need to detect the upper range, the expression is only reached if subsequent expressions
// are false so the lower bound is implicitly stated
if (number < 6) { //number is 0 - 5
  do thing;
}
else if (number < 8) { //number is 6-7 (lol) it's greaterthan or equal to 6 because the prior branch
  do other thing;
}
else if (number < 10) { //number 8,9
  do this thing instead;
}
else if (number < 12) { //number 10,11
  now do this;
}
else {
  do that;
}

//x is nonnegative
if x < 13
  asdf
else if x < 18 //if this branch is reached, than x is a number from 13 to 17
  asdf
else
//relations without = are noninclusive
// if it was <= 18 than it'd be 13,14,15,16,17,18

//Relational operators can be combined for better range control
// >= greater than or equal to, and <= less than or equal to allows for precise range limits raher than implicit range detection
/*The second branch outputs "Fewer than -80" when the value of userInput is less than -80. Fill in the expression for the first branch that outputs "-80 or more".

Ex: If the input is -78, then the output is:

-80 or more */
#include <iostream>
using namespace std;

int main() {
   int userInput;

   cin >> userInput;

   if (userInput >= -80) { // using > = ensures it catches the -80 and all lower numbers
      cout << "-80 or more" << endl;
   }
   else {
      cout << "Fewer than -80" << endl;
   }

   return 0;
}

// if 90 or more -> outputs 90 or more, otherwise (less than 90) outputs less than 90
#include <iostream>
using namespace std;

int main() {
   int userVal;

   cin >> userVal;

   if (userVal >= 90) {
      cout << "90 or more" << endl;
   }
   else {
      cout << "Less than 90" << endl;
   }
   return 0;
}

//Integers userSalary and companyBudget are read from input. If userSalary is less than or equal to 150000, then assign companyBudget with companyBudget minus 150000
#include <iostream>
using namespace std;

int main() {
   int userSalary;
   int companyBudget;

   cin >> userSalary;
   cin >> companyBudget;

   if (userSalary <= 150000) {
      companyBudget = companyBudget - 150000;
   }

   cout << companyBudget << endl;

   return 0;
}

/*Integer deskCount is read from input. If deskCount is greater than or equal to 11, then output "A good number of desks". Otherwise, output "Not enough desks". End with a newline. */
#include <iostream>
using namespace std;

int main() {
   int deskCount;

   cin >> deskCount;

   if (deskCount >= 11) {
      cout << "A good number of desks" << endl;
   }
   else {
      cout << "Not enough desks" << endl;
   }

   return 0;
}

/*
Integers objectCount, acceptedGroups, and remainingGroups are read from input.
If objectCount is greater than or equal to 17, then add 3 to acceptedGroups. Otherwise, add 1 to remainingGroups. */
#include <iostream>
using namespace std;

int main() {
   int objectCount;
   int acceptedGroups;
   int remainingGroups;

   cin >> objectCount;
   cin >> acceptedGroups;
   cin >> remainingGroups;

   if (objectCount >= 17) {
      acceptedGroups = acceptedGroups + 3;
   }
   else {
      remainingGroups +=1;
   }

   cout << acceptedGroups << endl;
   cout << remainingGroups << endl;

   return 0;
}

/*When the input integer variable frequency is:

    less than or equal to 404, output "Too low".
    between 404 exclusive and 788 exclusive, output "Visible".
    greater than or equal to 788, output "Too high".

End with a newline. */

#include <iostream>
using namespace std;

int main() {
   int frequency;

   cin >> frequency;

   if (frequency <= 404) {
      cout << "Too low" << endl;
   }
   else if (frequency > 404 && frequency < 788) {
      cout << "Visible" << endl;
   }
   else if (frequency >= 788) {
      cout << "Too high" << endl;
   }

   return 0;
}
/*When the given integer variable numberOfProducts is:

    greater than or equal to 18, output "Needs more than one box".
    between 5 inclusive and 18 exclusive, output "Large box".
    between 1 inclusive and 4 inclusive, output "Medium box".
    less than 1, output "Invalid input".

End with a newline.  */

#include <iostream>
using namespace std;

int main() {
   int numberOfProducts;

   cin >> numberOfProducts;

   if (numberOfProducts >= 18) {
      cout << "Needs more than one box" << endl;
   }
   else if (numberOfProducts > 4 && numberOfProducts < 18) {
      cout << "Large box" << endl;
   }
   else if (numberOfProducts >=1 && numberOfProducts <= 4) {
      cout << "Medium box" << endl;
   }
   else if (numberOfProducts < 1) {
      cout << "Invalid input" << endl;
   }

   return 0;
}

//Logical Operators - AND NOT & OR
//AND - Both operators need to be true for it to evaluate as true
//OR - AT LEAST one operator needs to be true to evaluate to true, can be both
//NOT - Negation, True when operator condition is false
//combining relational operators and logical operators is useful for range detection
//(0 < x) AND (x < 100) -> X is between 1 & 99
// (x< -5) OR (x > 10) -> X is either less than -5 or more than 10
//AND in C++ - &&
//NOT in C++ - !
//OR in C++ - ||
//Group operations with parentheses to ensure proper results

//example: TV Channels - Cable TV usually has normal channels from 2-499, HD from 1002-1499
#include <iostream>
using namespace std;

int main() {
   int userChannel;
   char channelType;

   cin >> userChannel;

   if ((userChannel >= 2) && (userChannel <= 499)) {
      channelType = 's'; //normal chanels (standard)
   }
   else if ((userChannel >= 1002) && (userChannel <= 1499)) {
      channelType = 'h'; //HD Channels
   }
   else {
      channelType = 'e'; //all others
   }

   cout << "Channel type: " << channelType << endl;

   return 0;
}

/*Modify the given if statement so that "Not a small town" is output if sizeInput is outside the range 1100 - 4600 inclusive. Otherwise, "Small town" is output. */
#include <iostream>
using namespace std;

int main() {
   int sizeInput;

   cin >> sizeInput;

   // Modify the following line
   if ((sizeInput < 1100) || (sizeInput > 4600)) { //originally used &&
      cout << "Not a small town" << endl;
   }
   else {
      cout << "Small town" << endl;
   }

   return 0;
}

/*Large towns have populations in the range 550 - 4000 inclusive.
  Write an if statement that outputs "Not a large town" if the input numResidents is not in this range.
  Otherwise, output "Large town". End each output with a newline. */

#include <iostream>
using namespace std;

int main() {
   int numResidents;

   cin >> numResidents;
   if ((numResidents < 550) || (numResidents > 4000)) {
      cout << "Not a large town" << endl;
   }
   else {
      cout << "Large town" << endl;
   }

   return 0;
}

/*The temperature of ethanol in degrees Fahrenheit is read from input into integer variable ethanolTemp. If ethanolTemp is:

    < -172 degrees Fahrenheit, output "Ethanol: solid state".
    ≥ -172 degrees Fahrenheit and < 174 degrees Fahrenheit, output "Ethanol: liquid state".

Otherwise, output "Ethanol: gaseous state". End each output with a newline.

Ex 1: If the input is -495, then the output is:

Ethanol: solid state

Ex 2: If the input is 162, then the output is:

Ethanol: liquid state

Ex 3: If the input is 456, then the output is:

Ethanol: gaseous state

Note: Use implicit ranges to simplify the solution. */
#include <iostream>
using namespace std;

int main() {
   int ethanolTemp;

   cin >> ethanolTemp;
   if (ethanolTemp < -172) {
      cout << "Ethanol: solid state" << endl;
   }
   else if ((ethanolTemp >= -172) && (ethanolTemp < 174)) {
      cout << "Ethanol: liquid state" << endl;
   }
   else {
      cout << "Ethanol: gaseous state" << endl;
   }

   return 0;
}
/*If integer salaryNum is in the inclusive range:

    0 - 51000, output "17% income tax bracket".
    51001 - 75000, output "21% income tax bracket".
    75001 - 250000, output "38% income tax bracket".

Otherwise, output "Invalid input". End each output with a newline.
Ex 1: If the input is 17000, then the output is:

17% income tax bracket

Ex 2: If the input is 60000, then the output is:

21% income tax bracket

Ex 3: If the input is 128000, then the output is:

38% income tax bracket

Ex 4: If the input is 273000, then the output is:

Invalid input*/

#include <iostream>
using namespace std;

int main() {
   int salaryNum;

   cin >> salaryNum;

   if ((salaryNum >=0) && (salaryNum <= 51000)) {
      cout << "17% income tax bracket" << endl;
   }
   else if ((salaryNum >=51001) && (salaryNum <= 75000)) {
      cout << "21% income tax bracket" << endl;
   }
   else if ((salaryNum >=75001) && (salaryNum <= 250000)) {
      cout << "38% income tax bracket" << endl;
   }
   else {
      cout << "Invalid input" << endl;
   }

   return 0;
}
//logical operators can be used to combine range detectin expressions and others
if (num >= 100 && num <= 150) - num is 100-150
else if (num >=200 && num <= 250) - num is 200-250
//Combined:
if ((num >= 100 && num <= 150) || (num >= 200 && num <= 250))


#include <iostream>
using namespace std;

int main() {
   int x;

   x = 4;
   if ( (x < 7) && !(x <= 2) ) {
      cout << "a" << endl;
   }
   if ( (x > 5) && !(x >= 7) ) {
      cout << "b" << endl;
   }
   cout << "c" << endl;

   return 0;
} //output: a \n c \n -> a is less than 7, but not lessthan or equal to 2 so firstbranch is true

/*Integer grapesOrdered is read from input representing the number of grapes. Output:

    "Large carton", if there are 30 - 70 grapes inclusive.
    "Extra large carton", if there are 130 - 160 grapes inclusive.
 */
#include <iostream>
using namespace std;

int main() {
   int grapesOrdered;

   cin >> grapesOrdered;

   if ((grapesOrdered >=30) && (grapesOrdered <= 70)) {
      cout << "Large carton" << endl;
   }
   else if ((grapesOrdered >=130) && (grapesOrdered <= 160)) {
      cout << "Extra large carton" << endl;
   }

   return 0;
}

/*Integer forksRequested is read from input representing the number of forks. Output:

    "Standard package", if the number of forks is greater than or equal to 40 and less than 80.
    "Full package", if the number of forks is greater than 130 and less than or equal to 160.
    "Not efficient to ship", otherwise.

End each output with a newline. */
#include <iostream>
using namespace std;

int main() {
   int forksRequested;

   cin >> forksRequested;

   if ((forksRequested >= 40) && (forksRequested < 80)) {
      cout << "Standard package" << endl;
   }
   else if ((forksRequested > 130) && (forksRequested <= 160)) {
      cout << "Full package" << endl;
   }
   else {
      cout << "Not efficient to ship" << endl;
   }

   return 0;
}

//multiple if statements in sequence can be used  to detect multiple features with independent actions
//multiple if statements allow mroe than one branc hto be executed
// looks like a multibranch if else but is not the same

#include <iostream>
using namespace std;

int main() {
   int userAge;

   cout << "Enter age: ";
   cin  >> userAge;

   // Note that more than one "if" statement can execute - if userAge is 35 then ALL branches execute except the first
   if (userAge < 16) {
      cout << "Enjoy your early years." << endl;
   }

   if (userAge > 15) {
      cout << "You are old enough to drive." << endl;
   }

   if (userAge > 17) {
      cout << "You are old enough to vote." << endl;
   }

   if (userAge > 24) {
      cout << "Most car rental companies will rent to you." << endl;
   }

   if (userAge > 34) {
      cout << "You can run for president." << endl;
   }

   return 0;
}

//nested ifs -> if the branch executes, the if inside of it also executes



numBoxes  = 0;
numApples = 9;

if (numApples < 10) { //9<10 so this branch executes
   if (numApples < 5) { //not true, doesn't execute
      numBoxes = 1;
   }
   else { //this branch executes
      numBoxes = 2;
   }
}
else if (numApples < 20) { //if that was only an if than we would have our 2 + 1 numBoxes
   numBoxes = numBoxes + 1;
}


#include <iostream>
using namespace std;

int main() {
   int numPuppies;

   numPuppies = 4;

   if (numPuppies > 2) {
      cout << "c" << endl;
   }

   if (numPuppies > 7) {
      cout << "d" << endl;
   }

   if (numPuppies < 9) {
      cout << "h" << endl;
   }

   cout << "m" << endl;

   return 0;
} //output: c \n h \n m \n

//Nested if-else - if statements within if statements
//useful for making decisions based on multiple things - discounts based on price and items purchased
if (numItems > 3) {
   if (totalCost > 100) {       // numItems > 3 and totalCost > 100
      saleDiscount = 20;
   }
   else if (totalCost > 50) {  // numItems > 3 and totalCost > 50
      saleDiscount = 10;
   }
}
else if (numItems > 0) {
   ...
}

/*Integer timeAfterClass is read from input. Write multiple if statements:

    If timeAfterClass is greater than 10, then output "I can finish at least a third of my homework."
    If timeAfterClass is greater than or equal to 45, then output "I can finish my homework and have extra time."
    If timeAfterClass is less than 2, then output "I don't have time to do my homework."

End each output with a newline. */
#include <iostream>
using namespace std;

int main() {
   int timeAfterClass;

   cin >> timeAfterClass;

   if (timeAfterClass > 10) {
      cout << "I can finish at least a third of my homework." << endl;
   }
   if (timeAfterClass >= 45) {
      cout << "I can finish my homework and have extra time." << endl;
   }
   if (timeAfterClass < 2) {
      cout << "I don't have time to do my homework." << endl;
   }

   return 0;
}

/*Integers numScore1 and numScore2 are read from input. Write one if statement and one if-else statement:

    If numScore1 is less than 0, then output "numScore1 is negative."
    If numScore2 is less than or equal to 35, then assign numScore2 with 10.
    Otherwise, output "numScore2 is greater than 35."

End each output with a newline. */
#include <iostream>
using namespace std;

int main() {
   int numScore1;
   int numScore2;

   cin >> numScore1;
   cin >> numScore2;

   if (numScore1 < 0) {
      cout << "numScore1 is negative." << endl;
   }
   if (numScore2 <= 35) {
      numScore2 = 10;
   }
   else {
      cout << "numScore2 is greater than 35." << endl;
   }

   cout << "numScore2 is " << numScore2 << "." << endl;

   return 0;
}
/*Integers numLemons and moneyOnHand are read from input. Each lemon costs 3 dollars.

Write the following if-else statement. Within the if branch, write the following assignment and nested if-else statement:

    If numLemons is greater than or equal to 5:
        Assign variable totalCost with the product of numLemons and 3.
        If totalCost is less than or equal to moneyOnHand, then output "Successful purchase".
        Otherwise, output "Not all lemons purchased".
    Otherwise, output "Not allowed to purchase less than 5 lemons".

End each output with a newline. */
#include <iostream>
using namespace std;

int main() {
   int numLemons;
   int moneyOnHand;
   int totalCost;

   cin >> numLemons;
   cin >> moneyOnHand;

   if (numLemons >= 5) {
      totalCost = numLemons * 3;
      if (totalCost <= moneyOnHand) {
         cout << "Successful purchase" << endl;
      }
      else {
         cout << "Not all lemons purchased" << endl;
      }
   }
   else {
      cout << "Not allowed to purchase less than 5 lemons" << endl;
   }

   return 0;
}

//if the branch is only one statement the braces aren't needed, but good practice is to use them
if (numSales < 20)
   salesBonus = 0;
else
   totBonus = totBonus + 1;
   salesBonus = 20; //technically the indentation doesn't matter, so without the braces this just executes after the else in the code

   if (numSales < 20) {
      salesBonus = 0;
   }
   else {
      totBonus = totBonus + 1;
      salesBonus = 20;
   } // executes the way it should

   numItems = 0;
   bonusVal = 5;
   if (bonusVal > 10)
      // Update bonusVal
      bonusVal = bonusVal - 1;
      numItems = bonusVal;
   numItems = numItems + 1;
   //numItems = 6 afterward, numItems = bonusVal isn't part of the branch despite apperances due to missing braces


/*Re-type the code and fix any errors. The code should convert non-positive numbers to 1.
   if (userNum > 0)
      cout << "Positive." << endl;
   else
      cout << "Not positive, converting to 1." << endl;
      userNum = 1;

   cout << "Final: " << userNum << endl;
 */
#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   if (userNum > 0) {
      cout << "Positive." << endl;
   }
   else {
      cout << "Not positive, converting to 1." << endl;
      userNum = 1;
   }
   cout << "Final: " << userNum << endl;


   return 0;
}

//using = in an if over == will run even though it's wrong, it will assign he left side with the right and then the branch executes
//as the value is not 0 so it's true
numItems = 3;
if (numItems = 10) {
   numItems = numItems + 1; //numItems will be 11
}
//Toll calculation example
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int timeHour;      // Time of travel hour
   int timeMinute;    // Time of travel minute
   char inputColon;   // Used to read time format
   double tollAmount;

   cout << "Enter time of travel (HH:MM in 24 hour format): ";

   // Read an integer (hour), colon (char), and integer (minute)
   cin  >> timeHour >> inputColon >> timeMinute;

   // Determine toll based on hour of travel
   if (timeHour < 6) {         // Before 6:00 am
      tollAmount = 1.55;
   }
   else if (timeHour < 10) {   // 6 am to 9:59 am
      tollAmount = 4.65;
   }
   else if (timeHour < 18) {   // 10 am to 5:59 pm
      tollAmount = 2.35;
   }
   else {                      // 6 pm and after
      tollAmount = 1.55;
   }

   // Output time and toll amount
   cout << "Toll at " << timeHour << ":";

   // Output minute with formatting (discussed elsewhere) to
   // print two digits for minutes.
   cout << setw(2) << setfill('0') << timeMinute;
   cout << " is " << tollAmount << endl;

   return 0;
}

//toll calculation using week day and time
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int timeHour;      // Time of travel hour (24 hour format)
   int timeMinute;    // Time of travel minute
   int typeOfDay;     // 0 - weekday, 1 - weekend/holiday
   char inputColon;   // Used to read time format
   double tollAmount;

   cout << "Enter time of travel (HH:MM in 24 hour format): ";

   // Read an integer (hour), colon (char), and integer (minute)
   cin  >> timeHour >> inputColon >> timeMinute;

   cout << "Enter type of day (0 - weekday, 1 - weekend/holiday): ";
   cin >> typeOfDay;

   if (typeOfDay == 0) { // Weekday time and rates
                         // Determine toll based on hour of travel
      if (timeHour < 6) {         // Before 6:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 10) {   // 6 am to 9:59 am
         tollAmount = 4.65;
      }
      else if (timeHour < 18) {   // 10 am to 5:59 pm
         tollAmount = 2.35;
      }
      else {                      // 6 pm and after
         tollAmount = 1.55;
      }
   }
   else { // Weekend/holiday time and rates
          // Determine toll based on hour of travel
      if (timeHour < 8) {         // Before 8:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 12) {   // 8 am to 11:59 am
         tollAmount = 3.05;
      }
      else if (timeHour < 16) {   // 12 pm to 3:59 pm
         tollAmount = 3.45;
      }
      else if (timeHour < 19) {   // 4 pm to 6:59pm
         tollAmount = 3.60;
      }
      else if (timeHour < 22) {   // 7 pm to 9:59 pm
         tollAmount = 3.05;
      }
      else {                      // 10 pm and after
         tollAmount = 1.55;
      }
   }

   // Output toll using am/pm format
   cout << "Toll at ";

   // Output hour adjusting for am/pm format
   if (timeHour == 0) {
      cout << "12:";
   }
   else if (timeHour <= 12) {
      cout << timeHour << ":";
   }
   else {
      cout << timeHour - 12 << ":";
   }

   // Output minute with formatting (discussed elsewhere) to
   // print two digits for minutes.
   cout << setw(2) << setfill('0') << timeMinute;

   // Output am/pm
   if (timeHour < 12) {
      cout << " am";
   }
   else {
      cout << " pm";
   }

   cout << " is " << tollAmount << endl;

   return 0;
}

//Toll Calculator using carpool discounts
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int timeHour;      // Time of travel hour (24 hour format)
   int timeMinute;    // Time of travel minute
   int typeOfDay;     // 0 - weekday, 1 - weekend/holiday
   int numPeople;    // People in vehicle
   char inputColon;   // Used to read time format
   double tollAmount;

   cout << "Enter time of travel (HH:MM in 24 hour format): ";

   // Read an integer (hour), colon (char), and integer (minute)
   cin  >> timeHour >> inputColon >> timeMinute;

   cout << "Enter type of day (0 - weekday, 1 - weekend/holiday): ";
   cin >> typeOfDay;

   cout << "Enter number of people in vehicle: ";
   cin >> numPeople;

   if (typeOfDay == 0) { // Weekday time and rates
                         // Determine toll based on hour of travel
      if (timeHour < 6) {         // Before 6:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 10) {   // 6 am to 9:59 am
         tollAmount = 4.65;
      }
      else if (timeHour < 18) {   // 10 am to 5:59 pm
         tollAmount = 2.35;
      }
      else {                      // 6 pm and after
         tollAmount = 1.55;
      }
   }


   else { // Weekend/holiday time and rates
          // Determine toll based on hour of travel
      if (timeHour < 8) {         // Before 8:00 am
         tollAmount = 1.55;
      }
      else if (timeHour < 12) {   // 8 am to 11:59 am
         tollAmount = 3.05;
      }
      else if (timeHour < 16) {   // 12 pm to 3:59 pm
         tollAmount = 3.45;
      }
      else if (timeHour < 19) {   // 4 pm to 6:59 pm
         tollAmount = 3.60;
      }
      else if (timeHour < 22) {   // 7 pm to 9:59 pm
         tollAmount = 3.05;
      }
      else {                      // 10 pm and after
         tollAmount = 1.55;
      }
   }


   // Check for carpool rate (3 or more people) and update toll
   if (numPeople >= 3) {
      // If on a weekday between 6:00 am and 9:59 am, toll is half off
      if ((typeOfDay == 0) && (timeHour >= 6) && (timeHour < 10)) {
         tollAmount = tollAmount * 0.5;
      }
      // Otherwise, the toll is free
      else {
         tollAmount = 0.0;
      }
   }

   // Output toll using am/pm format
   cout << "Toll at ";

   // Output hour adjusting for am/pm format
   if (timeHour == 0) {
      cout << "12:";
   }
   else if (timeHour <= 12) {
      cout << timeHour << ":";
   }
   else {
      cout << timeHour - 12 << ":";
   }


   // Output minute with formatting (discussed elsewhere) to
   // print two digits for minutes.
   cout << setw(2) << setfill('0') << timeMinute;
   // Output am/pm
   if (timeHour < 12) {
      cout << " am";
   }
   else {
      cout << " pm";
   }
   cout << " is " << tollAmount << endl;
   return 0;
}

//Bitwise operators -> & and |, not the same as && or ||
//Precedence rules - https://en.cppreference.com/cpp/language/operator_precedence
//Order of operations for expression evaluation, use parentheses to avoid mistakes

/*The following code contains a precedence error. Find and fix the precedence error by adding parentheses so the program outputs "Need to order more desserts" if both of the following are true:

    Either numCupcakes is less than or equal to 10 or numPancakes is less than 8.
    numDonuts is less than 7.

Otherwise, "Enough desserts in stock" is output. */
#include <iostream>
using namespace std;

int main() {
   int numCupcakes;
   int numPancakes;
   int numDonuts;

   cin >> numCupcakes;
   cin >> numPancakes;
   cin >> numDonuts;

   // Fix the precedence error in the following line
   if ((numCupcakes <= 10 || numPancakes < 8) && numDonuts < 7) { //original  if (numCupcakes <= 10 || numPancakes < 8 && numDonuts < 7) {
      cout << "Need to order more desserts" << endl;
   }
   else {
      cout << "Enough desserts in stock" << endl;
   }

   return 0;
}

/*The following code contains a logic error.
Find and fix the logic error so the program outputs "The person is school age." if ageNum is greater than 4 and is less than 18
otherwise outputs "The person is not school age.". */
#include <iostream>
using namespace std;

int main() {
   int ageNum;

   cin >> ageNum;

   // Fix the logic error in the following line
   if (ageNum > 4 && ageNum < 18) { //original if (4 < ageNum < 18) {
      cout << "The person is school age." << endl;
   }
   else {
      cout << "The person is not school age." << endl;
   }

   return 0;
}
/*Integers numCheesecakes, numBeignets, and numPeople are read from input.
  Complete the following code so that "Desserts can be divided equally." is output if the total number of desserts is divisible by numPeople.
  Otherwise, "Desserts cannot be divided equally." is output. */
#include <iostream>
using namespace std;

int main() {
   int numCheesecakes;
   int numBeignets;
	int numPeople;

   cin >> numCheesecakes;
   cin >> numBeignets;
	cin >> numPeople;

   if ((numCheesecakes + numBeignets + numPeople) % numPeople ==0) { //this line had nothing in parentheses
      cout << "Desserts can be divided equally." << endl;
   }
   else {
      cout << "Desserts cannot be divided equally." << endl;
   }

   return 0;
}
//switch statements - clearly represent multi-branch behavior involvign a variable compared toa constant
//program executes the firstcase whose constant expression matches the switch expression value
//then goes to end of program
//only 1 case will be executed
//default case needs established, if no case is met then default executes
//think of cases as very specific conditions that you wnat code to run if they are met
//depending on userVal, different things will happen, if no userval is set than numItems defaults to 55
//if userval = 1 -> Case 1 executes
//Case number is often the value you want the expression to meet
switch (userVal) {
   case 1:
      numItems = 5;
      break;

   case 3:
      numItems = 12;
      break;

   case 4:
      numItems = 99;
      break;

   default:
      numItems = 55;
      break;
}
//general form of switch statement
//the expression should be an int or char, not a string or float
//each case MUST have a constant expression, cannot be a variable
//case order doesn't matter as long as they include breaks
//always have a default case
switch (expression) {
   case constantExpr1:
      // Statements
      break;

   case constantExpr2:
      // Statements
      break;

   ...

   default: // If no other case matches
      // Statements
      break;
}
//example - dog years
#include <iostream>
using namespace std;

/* Estimates dog's age in equivalent human years.
   Source: www.dogyears.com
*/

int main() {
   int dogAgeYears;

   cout << "Enter dog's age (in years): ";
   cin  >> dogAgeYears;

   switch (dogAgeYears) {
      case 0:
         cout << "That's 0-14 human years." << endl;
         break;

      case 1:
         cout << "That's 15 human years." << endl;
         break;

      case 2:
         cout << "That's 24 human years." << endl;
         break;

      case 3:
         cout << "That's 28 human years." << endl;
         break;

      case 4:
         cout << "That's 32 human years." << endl;
         break;

      case 5:
         cout << "That's 37 human years." << endl;
         break;

      default:
         cout << "Human years unknown." << endl;
         break;
   }

   return 0;
}
//omitting the break will cause "falling through" behavior
//the cases below the case without the break will also execute, his can be useful if multiple cases do the same thing
switch (dogAgeMonths) {
   case 0:
   case 1:
   case 2: //cases 0 1 & 2 will say the same thing
      cout << "That's 0-14 human months." << endl;
      break;
//BOOLEAN data types - T/F, in C++ is represented by bool
//the bool variables can be set using eiher true / false keywords or by assigning it the result of a logical expression
bool isWeekend = true;
bool isLargeParty = (partySize>6);

//Example - Restaraunt wait times
#include <iostream>
using namespace std;

int main() {
   int waitTime;
   int partySize;
   char day;
   bool isLargeParty;
   bool isWeekend;

   // Get day of reservation
   cout << "Day of reservation (T/W/R/F/S/U): ";
   cin >> day;
   if (day == 'F' || day == 'S' || day == 'U') {
      isWeekend = true;
   }
   else {
      isWeekend = false;
   }

   // Get party size
   cout << "Enter party size: ";
   cin  >> partySize;
   isLargeParty = (partySize > 6); //sets this bool to true if partySize is over 6, false otherwise

   // Determine wait time based on day of week and party size
   if (isWeekend && !isLargeParty) { //if it's the weekend and largeParty is false
      waitTime = 30;
   }
   else if (!isWeekend && !isLargeParty) { //isWeekend false and ISLargeParty false
      waitTime = 10;
   }
   else if (isWeekend && isLargeParty) {
      waitTime = 45;
   }
   else {
      waitTime = 15;
   }

   cout << "Restaurant wait time is " << waitTime << " minutes." << endl;

   return 0;
}
//complex programs tha combine logical and relational operators and expressions can be simplified using
//boolean variables, set the bool variables with the result of the expressions using relational operators
//then, the if-else only needs to use logical operations using the bools
isHot = (currentTemp > desiredTemp); //setting bool variables with the values of the relaionals
isReallyHot = (currentTemp > (desiredTemp + 5.0));
isHumid = (currentHumidity > 0.50);

if (isReallyHot) { //if else can use only true / false bool values
   // Use A/C and evaporative cooler
   acOn = true;
   evapCoolerOn = true;
}
else if (isHot && isHumid) {
   // Use A/C
   acOn = true;
   evapCoolerOn = false;
}
else if (isHot && !isHumid) {
   // Use evaporative cooler
   acOn = false;
   evapCoolerOn = true;
}
else {
   acOn = false;
   evapCoolerOn = false;
}

//Assign isTeenager with true if kidAge is 13 to 19 inclusive. Otherwise, assign isTeenager with false.
#include <iostream>
using namespace std;

int main() {
   bool isTeenager;
   int kidAge;

   cin >> kidAge;

   isTeenager = ((kidAge >= 13) && (kidAge <= 19));

   if (isTeenager) {
      cout << "Teen" << endl;
   }
   else {
      cout << "Not teen" << endl;
   }

   return 0;
}

//String Comparison can be done with == and !=
//Strings are equal if they have the same number of and identical characters
//apple is not equal to Apple

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord;

   cout << "Enter a word: ";
   cin  >> userWord;

   if (userWord == "USA") {
      cout << "United States of America";
   }
   else {
      cout << userWord;
   }
   cout << endl;

   return 0;
}
//relational operators can also be used to compare strings
//the string's numeric ASCII encoding is compared, startign at index 0 until a strign's end is reached or
//it evaluates to false
//Apples is less than apples because A = 65 & a = 97
//if existing chars are the same, the shorter string is less than

/*Print the two strings, firstString and secondString, in alphabetical order. Assume the strings are lowercase
End with newline. Sample output:
capes rabbits
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   if (firstString < secondString) {
      cout << firstString << " " << secondString << endl;
   }
   else {
      cout << secondString << " " <<  firstString << endl;
   }

   return 0;
}
//String Access Operations
//Strings are character sequences in memory, each string char has a position number -> the Index, starting at 0
//String - Alex | Index 0 - A, 1-l, 2-e,3-x
//accessing string chars by index value - use at()
//at(): The notation someString.at(x) accesses the character at index x of a string.
string myString = "Alex";
myString.at(0) //A
  //example - Word Scramble

#include <iostream>
#include <string> //needed for strigns
using namespace std;

int main() {
   string userWord;

   cout << "Enter a 5-letter word: ";
   cin  >> userWord; //gets word from input

   cout << "Scrambled: "; //0s 1h 2a 3r 4t
   cout << userWord.at(3); //if word is shart - r
   cout << userWord.at(1); //if word is shart - h
   cout << userWord.at(4); //if word is shart - t
   cout << userWord.at(0); //if word is shart - s
   cout << userWord.at(2); //if word is shart - a
   cout << endl;

   return 0;
}
//characters from a string index can also be changed using .at()
myStr = "Poops";
myStr.at(4) = 'y'; // it's now Poopy

//ex

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord ="Caterpillar";
   int replaceIndex;

   cout << "Enter an index (0-10): ";
   cin  >> replaceIndex;

   userWord.at(replaceIndex) = '*'; //replaces whatever char the user seleced by index with * - Cater*illar, *aterpillar, etc

   cout << "Updated string: ";
   cout << userWord << endl;

   return 0;
}

//Often we'd need to know or work with a string's size, last char, etc
//if you know the string length, last char is index length -1 -> mystr = Hey - y @ 3-1 -> index 2
//.size() returns the string length
//myStr.size() -> 3
//Appending is commonly needed in programming
//.push_back("what we're adding"); adds a char to end of string
//my_Str = "poop" -> myStr.push_back('y') -> myStr = poopy
//using .append() or + can add strings together
myStr1 = "I need more time";
myStr2 = " for Zybooks";
newStr1 = myStr1.append(myStr2); // I need more time for Zybooks
newStr2 = myStr1 + myStr2; // I need more time for Zybooks

//example - captions
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userCaption;
   char lastChar;
   int lastIndex;

   cout << "Enter a caption: ";
   getline(cin, userCaption); // get's user input including spaces until new line

   lastIndex = userCaption.size() - 1; // finds last index by getting size minus 1
   lastChar  = userCaption.at(lastIndex); //gets end char using index position and .at()

   if ( (lastChar != '.') && (lastChar != '!') && (lastChar != '?') ) { // if lastchar isn't a period, exclamation or quesiton
      // User's caption lacked ending punctuation, so add a period
      userCaption.append(".");
   }

   cout << "New: ";
   cout << userCaption << endl;

   return 0;
}
//.size() and .length() both return a strings lenth
myStr.at(myStr.size()-1) // returns last char

//append can only add strings, not chars
//.append('?') -> not valid, error
//.at(index) will generate an execption if the index id out of range for the string's size
//exception - detected runtime error printing out a mesage & terminate program
//you can use C's [] notation in C++ for string indices, but the error checkign isn't great
userText[7] = '!'; //when userText = "Monday" may try and do it anyways despite not having an index 7, just use .at()

/*Assign secretID with firstName, a space, and lastName.
If firstName is Barry and lastName is Allen, then output is:
Barry Allen
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID;
   string firstName;
   string lastName;

   cin >> firstName;
   cin >> lastName;

   secretID = firstName + " " + lastName;

   cout << secretID << endl;
   return 0;
}

/*Given string inputText, change the fifth character of inputText to 'A'.

Ex: If the input is:

tiger

then the output is:

tigeA

Note: Assume the length of string inputText is greater than or equal to 5. */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputText;

   getline(cin, inputText);

   inputText.at(4) = 'A';

   cout << inputText << endl;

   return 0;
}

/* Given string userString on one line and character inputChar on the next line
output "Found match" if the fourth character of userString matches inputChar
Otherwise, output "No match". End with a newline.
Ex: If the input is:
guitar
t
then the output is:
Found match
Note: Assume the length of string userString is greater than or equal to 4.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
	char inputChar;

   getline(cin, userString);
	cin >> inputChar;

   if (userString.at(3) == inputChar) {
      cout << "Found match" << endl;
   }
   else {
      cout << "No match" << endl;
   }

   return 0;
}

/*Given string strInput, output "A question" if the string's last character is '?'.
  Otherwise, output "Not a question". End with a newline.

Ex: If the input is:

Where are you from?

then the output is:

A question */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string strInput;

   getline(cin, strInput);

   if (strInput.at(strInput.size()-1) == '?') {
      cout << "A question" << endl;
   }
   else {
      cout << "Not a question" << endl;
   }

   return 0;
}
/*Given string inputStr on one line and string toAdd on the next line
assign resultStr with the copy of inputStr with toAdd appended.
Ex: If the input is:
Fuzzy fox
!!!

then the output is:
Fuzzy fox!!! */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputStr;
	string toAdd;
	string resultStr;

	getline(cin, inputStr);
	getline(cin, toAdd);

   resultStr = inputStr.append(toAdd);

   cout << resultStr << endl;

   return 0;
}

//including the cctype library provides several character manipulation functinos
#include <cctype>
//ctype standa for char, the first c indicates it's from the C language library
//grants the use of:
isalpha(c) // true if char is alphatbetic
isdigit(c)//true if char is a digit
isspace(c) //true if whitespace char
toupper(c) //capitalizes char
tolower(c)//lowers case of char

//state abbreviation capilization example
#include <iostream>
#include <cctype>
using namespace std;

int main() {
   char let0;
   char let1;

   cout << "Enter a two-letter state abbreviation: ";
   cin >> let0;
   cin >> let1;

   if ( ! (isalpha(let0) && isalpha(let1)) ) {
      cout << "Error: Both are not letters." << endl;
   }
   else {
      let0 = toupper(let0);
      let1 = toupper(let1);
      cout << "Capitalized: " << let0 << let1 << endl;
   }

   return 0;
}

//toUpper & toLower doesn't modify string, just returns the modified version
/*Variable userString is assigned with a 2-character string read from input.
If userString's second character is not alphabetic, output "The second character is not alphabetic."
Otherwise, output "The second character is alphabetic: " followed by the alphabetic character.
End each output with a newline.

Ex: If the input is n1, then the output is:

The second character is not alphabetic.
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;

   getline(cin, userString);

   if (!isalpha(userString.at(1))) {
      cout << "The second character is not alphabetic." << endl;
   }
   else {
      cout << "The second character is alphabetic: " << userString.at(1) << endl;
   }

   return 0;
}
/*Variable inString is assigned with a 3-character string read from input.
If inString's first and second characters are both alphabetic characters, output "Valid string". Otherwise, output "Invalid string". End each output with a newline.

Ex 1: If the input is sh5, then the output is:

Valid string

Ex 2: If the input is f54, then the output is:

Invalid string */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inString;

   getline(cin, inString);

   if (isalpha(inString.at(0)) && isalpha(inString.at(1))) {
      cout << "Valid string" << endl;
   }
   else {
      cout << "Invalid string" << endl;
   }

   return 0;
}
/*Variable userString is assigned with a 2-character string read from input
If userString's first character is an uppercase letter, output "String is valid"
Otherwise, output "String is not valid". End each output with a newline.

Ex 1: If the input is Tq, then the output is:

String is valid

Ex 2: If the input is nb, then the output is:

String is not valid */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;

   getline(cin, userString);

   if (userString.at(0) == toupper(userString.at(0)) && isalpha(userString.at(0))) {
      cout << "String is valid" << endl;
   }
   else {
      cout << "String is not valid" << endl;
   }

   return 0;
}
//standard if-elses are so common they can be written in shorthand
myVar = (condition) ? expr1:expr2; //is the same as:
if (condition) {
  myVar = expr1;
}
else {
  myVar = expr2;
}
//conditionals have the form (condition) ? exprWhenTrue:exprWhenFalse;
//if x =2 and the conditional is (x==2) ? 5:9*x; -> X is then 5
//the ? & : are Ternary Operators
//avoid them when possible as they can become confusting, put parentheses around the first expression to enhance readability


if (x < 100) {
   y = 0;
}
else {
   y = x;
}

//as a conditional -> y = (x<100) ? 0:x;

/*
 Using a conditional expression, write a statement that increments numUsers if updateDirection is 1
 otherwise decrements numUsers. Ex: if numUsers is 8 and updateDirection is 1, numUsers becomes 9
 if updateDirection is 0, numUsers becomes 7.  */
#include <iostream>
using namespace std;

int main() {
   int numUsers;
   int updateDirection;

   cin >> numUsers;
   cin >> updateDirection;

   numUsers = (updateDirection ==1) ? numUsers+=1:numUsers-=1;

   cout << "New value is: " << numUsers << endl;

   return 0;
}
//omitting the first part before the colon won't change the var
myNumber = 5;
yourNumber = (myNumber >= 4) ? myNumber : 9; //if true, myNumber doesn't change

//Float Comparison - don't use ==, like float1==float2 -> some floating-point numbers can't be represented exactly in the limited avialable memory bits like 64 bits
//floats that should be the exact same may only be close when compared
numMeters = 0.7;
numMeters = numMeters - 0.4;
numMeters = numMeters - 0.3;// numMeters expected to be 0, but is actually -0.0000000000000000555112
if (fabs(numMeters - 0.0) < 0.001) {
   // Equals 0.
}
else {
   // Does not equal 0.
}
//0.7 for nummeters may actually be 0.6999999999999999999999555910790

//Close Enough Comparison for floats
//use fabs(x-y)<0.0001; for comparison, use fabs as the difference between x & y may be negative
//fabs from the math library #include <cmath>
//the difference threshold indicating that floats are equal when compared with fabs is called the Epsilon
//epsilon value depends on the expected values for the program but 0.0001 is common
fabs(x-1.0) < 0.0001 // checks if x = 1.0
//example comparing temps
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double bodyTemp;

   cout << "Enter body temperature in Fahrenheit: ";
   cin >> bodyTemp;

   if (fabs(bodyTemp - 98.6) < 0.0001) { //using epsilon to check if bodyTemp == 98.6
      cout << "Temperature is exactly normal." << endl; //if user enters 98.6000001 it will still say exactly normal, for this inputs you need a much smaller epsilon like 0.0000000001
   else if (bodyTemp > 98.6) {
      cout << "Temperature is above normal." << endl;
   }
   else {
      cout << "Temperature is below normal." << endl;
   }

   return 0;
}

//to see the inexact values for floats use a manipulator for output formatting
#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

int main() {
   double sampleValue1 = 0.2;
   double sampleValue2 = 0.3;
   double sampleValue3 = 0.7;
   double sampleValue4 = 0.0;
   double sampleValue5 = 0.25;


   cout << "sampleValue1 using just cout: "
        << sampleValue1 << endl;

   cout << setprecision(25) //shows the float at 25 chars past decimal
        << "sampleValue1 is " << sampleValue1 << endl //sampleValue1 is 0.2000000000000000111022302 if user enters 0.2
        << "sampleValue2 is " << sampleValue2 << endl
        << "sampleValue3 is " << sampleValue3 << endl
        << "sampleValue4 is " << sampleValue4 << endl
        << "sampleValue5 is " << sampleValue5 << endl;

   return 0;
}

//Short Circuit Evaluation - Logical Operators evaluate operands from L -> R
//Short Cicuit Evaluation skips later evaluations of operands if the logical operator's result can be determined from firstoperand
//AND && - short circuits to False if 1st operand is false, skips 2nd operand eval
//OR || - short circuits to True if 1st operand is true, skips 2nd operand eval
(x < 3) && (y < 2) && (z ==5) //if x=1 and y=0 then all operands are evaled, if x is 4 than the whole thign is falase
//x = 1 so first part is true, goes to 2nd eval, y = 0 so 2nd part is true, moves to Z eval


((x > 2) || (y < 4)) && (z == 10) // if x =4, y = 1 & z = 10 then the OR operaotr evals to true for first part, doesn't matter what 2nd part is
//since first part is now true all that needs evaled is 10, since our logical and first portion (the OR operation) is true it needs to eval the 2nd



#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputName;
   string searchName;
   string coreGtld1;
   string coreGtld2;
   string coreGtld3;
   string coreGtld4;
   // FIXME: Add a fourth core gTLD: .info
   bool isCoreGtld = false;

   coreGtld1 = ".com";
   coreGtld2 = ".net";
   coreGtld3 = ".org";
   coreGtld3 = ".info";

   cout << endl << "Enter a top-level domain name: " << endl;
   cin >> inputName;

   searchName = inputName;
// FIXME: Allow the user to enter a name with or without a leading period
   if (searchName.at(0) == '.') {
     searchName = searchName.erase(0,1); //.erase(x,y) -> erases a char at index(x) and removes the amount of chars at (y) - this removes only 1 char, at index 0
   }

   // Determine whether the user-entered name is a gTLD
   if (searchName == coreGtld1) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld2) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld3) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld4) {
     isCoreGtld = true;
   }
   else {
      isCoreGtld = false;
   }

   cout << "The name \"" << inputName << "\" ";
   if (isCoreGtld) {
      cout << "is a core gTLD." << endl;
   }
   else {
      cout << "is not a core gTLD." << endl;
   }

   return 0;
}

//Loops - program construct that repeatedly executes loop's code statments,called the loop body, while the loops's expression is true
//when the loop expression evaluates to false, the loop is exited and subsequent code executes
//each pass through the loop body - Iteration
//While Loops - Loop that executes loop body for constant iterations while the loop expression is true
//need to set a break or escpae or it will run indefinitely
//even if expression is found fale during loop, until that body executes and expression is checked again th loop continues
while (expression) { // Loop expression
    // Loop body: Executes if expression evaluated to true
    // After body, execution jumps back to the "while"
}
// Statements that execute after the expression evaluates to false

#include <iostream>
using namespace std;

int main() {
  int currPower;
  char userChar;

  currPower = 2;
  userChar = 'y';

  while (userChar == 'y') { //as long as userChar is 'y' this loop executes
     cout << currPower << endl;
     currPower = currPower * 2;
     cin >> userChar; //forgetting this or a break will cause infinite loop
  }

  cout << "Done" << endl;

  return 0;
}


int userNum = 3;

while (userNum > 0) { //loop will always execute at least once as userNum is instantiated with 3
   // Do something
   userNum = // Get input into userNum
}


//example: F-C conversion
#include <iostream>
using namespace std;

int main() {
   double celsiusValue;
   double fahrenheitValue;
   char userChar;

   celsiusValue = 0.0;
   userChar = 'y';

   while (userChar == 'y') {
      fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;

      cout << celsiusValue << " C is ";
      cout << fahrenheitValue << " F" << endl;

      cout << "Type y to continue, any other to quit: ";
      cin >> userChar;

      celsiusValue = celsiusValue + 5;
      cout << endl;
   }

   cout << "Goodbye." << endl;

   return 0;
}

//above examples had input only retrieved during lop at end of loop body
//anothe common way is to get input before the loop
//thie helps determine when loop will run
cin << loopVar;
while (loopVar > 0) { //if loopVar is -1, loop never executes
  //do loop stuff
  cin << loopVar; // determines if loop breaks or not
}

//loop expressions
//various expressions can be used in while loops, sometimes the loop will only execute if a value is > or < than a value
//sometimes loop only executes if loopVar != other value

#include <iostream>
using namespace std;

int main() {
  int userNum;

  cin >> userNum;

  while (userNum > 0) {
     cout << userNum % 10 << endl;
     userNum = userNum / 10;
  }

  return 0;
}

//loop example - ancestors
#include <iostream>
using namespace std;

int main() {
   const int YEARS_PER_GEN = 20; // Approx. years per generation
   int userYear;                 // User input
   int consYear;                 // Year being considered
   int numAnc;                   // Approx. ancestors in considered year

   consYear = 2020;
   numAnc = 2;

   cout << "Enter a past year (neg. for B.C.): ";
   cin >> userYear;

   while (consYear >= userYear) { // as long as consYears more than userYear, loop executes
      cout << "Ancestors in " << consYear << ": " << numAnc << endl;

      numAnc = 2 * numAnc;                 // Each ancestor had two parents //doubles amount of ancestors to output (x2, one for each parent)
      consYear = consYear - YEARS_PER_GEN; // Go back 1 generation //decreases consYear by 20, lowering iteration count
   }

   return 0;
}
 /*Enter a past year (neg. for B.C.): 1900
 Ancestors in 2020: 2
 Ancestors in 2000: 4
 Ancestors in 1980: 8
 Ancestors in 1960: 16
 Ancestors in 1940: 32
 Ancestors in 1920: 64
 Ancestors in 1900: 128
 */

 //infinite loops are super common when programmers either forget an escape sequence, break or set the loop expression to something that won't change
 //use > or < and == for loop expression so that it's forced to evaluate some kind of change in variables
 //using = instead of == will not cause the loop expression to recognize change in variable value thus giving infinite loop
 z = 0;
 c = 'y';

 while (c = 'y') {
    cout << z << " ";
    cin >> c; //no matter what the user inputs here, c ='y' will not be changed due to previous assignment and will loop infinitely
    z = z + 1;
 }

 x = 10;

 while (x != 3) { //x will NEVER be equal to 3 here, infinite loop
    cout << x << " ";
    x = x / 2;
 }

 #include <iostream>
 using namespace std;

 int main() {
    int g;

    g = 0;

    while (g <= 3) {
       cout << g << endl;
       g = g + 1;
    }

    return 0;
 } //output - 0 1 2 3 all separated by endl

 /*A while loop reads characters from input into variable valueIn. Write an expression that executes the while loop while character 's' is not read into valueIn. */
 #include <iostream>
 using namespace std;

 int main() {
    char valueIn;

    cin >> valueIn;
    while (valueIn != 's') {
       cout << "User entered " << valueIn << endl;
       cin >> valueIn;
    }

    cout << "Loop terminated" << endl;

    return 0;
 }
 /*Character userIn is read from input. Write a while loop that reads characters from input while character 'e' is not read. In each iteration:

     Update charSum with the sum of charSum and 1.
     Then, read the next character from input into variable userIn.

 Character 'e' should not be included in the count. */

 #include <iostream>
 using namespace std;

 int main() {
    char userIn;
	int charSum;

	charSum = 0;
	cin >> userIn;

    while (userIn != 'e') {
       charSum += 1;
       cin >> userIn;
    }

    cout << charSum << endl;

	return 0;
 }

 /*Integer valueIn is read from input. Write a while loop that iterates while valueIn is non-negative. In each iteration:

     Update integer finalVal as follows:
         If valueIn is even, add valueIn to finalVal.
         Otherwise, subtract valueIn from finalVal.
     Then, read the next integer from input into variable valueIn.

 */
 #include <iostream>
 using namespace std;

 int main() {
    int valueIn;
    int finalVal;

    finalVal = 0;
    cin >> valueIn;

    while (valueIn >= 0) {
       if (valueIn % 2 == 0) {
          finalVal = finalVal + valueIn;
       }
       else {
          finalVal = finalVal - valueIn;
       }
       cin >> valueIn;
    }

    cout << "Final value is " << finalVal << endl;

    return 0;
 }


 //Example Greatest common divisor

 #include <iostream>
 using namespace std;

 // Output GCD of user-input numA and numB

 int main() {
    int numA;  // User input
    int numB;  // User input

    cout << "Enter first positive integer: ";
    cin  >> numA;

    cout << "Enter second positive integer: ";
    cin  >> numB;

    while (numA != numB) { // Euclid's algorithm
       if (numB > numA) {
          numB = numB - numA;
       }
       else {
          numA = numA - numB;
       }
    }

    cout << "GCD is: " << numA << endl;

    return 0;
 }
/*Enter first positive integer: 9
Enter second positive integer: 7
GCD is: 1

...

Enter first positive integer: 15
Enter second positive integer: 10
GCD is: 5

...

Enter first positive integer: 99
Enter second positive integer: 33
GCD is: 33

...

Enter first positive integer: 500
Enter second positive integer: 500
GCD is: 500 */


//ex - conversation loop program
#include <iostream>
#include <string>
using namespace std;

/* Program that has a conversation with the user.
   Uses a if-else statements and a random number (sort of)
   to mix up the program's responses. */

int main() {
   int randNum0_3;         // Random number 0 to 3
   string userText;        // User input

   cout << "Tell me something about yourself." << endl;
   cout << "You can type \"Goodbye\" at anytime to quit."
        << endl << endl << "> ";

   getline(cin, userText);

   while (userText != "Goodbye") {
      randNum0_3 = userText.size() % 4; // "Random" num. %4 ensures 0-3

      if (randNum0_3 == 0) {
         cout << endl << "Please explain further."
              << endl << endl << "> ";
      }
      else if (randNum0_3 == 1) {
         cout << endl << "Why do you say: \"" << userText << "\"?"
              << endl << endl << "> ";
      }
      else if (randNum0_3 == 2) {
         cout << endl << "I don't think that's right."
              << endl << endl << "> ";
      }
      else if (randNum0_3 == 3) {
         cout << endl << "What else can you share?"
              << endl << endl << "> ";
      }
      else {
         cout << endl << "Uh-oh, something went wrong. Try again."
              << endl << endl;
      }

      getline(cin, userText);
   }

   cout << endl << "It was nice talking with you. Goodbye." << endl;

   return 0;
}
/*Tell me something about yourself.
You can type "Goodbye" at anytime to quit.

> I'm 26 years old.

Why do you say: "I'm 26 years old."?

> Well, I was born 26 years ago.

I don't think that's right.

> I am sure it is correct.

Please explain further.

> Goodbye

It was nice talking with you. Goodbye. */

//Sentinel Value - special value indicating the end of a list, like a list of positive integers ending with 0 - 10 1 6 3 0
//often used to force a looop break

#include <iostream>
using namespace std;

// Outputs average of list of positive integers
// List ends with 0 (sentinel) - not included in the calculation of the average
// Ex: 10 1 6 3 0  yields (10 + 1 + 6 + 3) / 4, or 5

int main() {
   int currValue;
   int valuesSum;
   int numValues;

   valuesSum = 0;
   numValues = 0;

   cin >> currValue;

   while (currValue > 0) { // Get values until 0 (or less)
      valuesSum = valuesSum + currValue;
      numValues = numValues + 1;
      cin >> currValue;
   }

   cout << "Average: " << (valuesSum / numValues) << endl;

   return 0;
}
/*10 1 6 3 0
Average: 5

...

90 70 30 10 99 1 0
Average: 50 */


/*Use cin to read remaining integers from input into inputNumber while inputNumber is not -1000
For each integer read before -1000, if the integer is non-positive, output the integer followed by a newline and multiply productOfSelected by the integer. */
#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	int productOfSelected;

	productOfSelected = 1;

   cin >> inputNumber;  // The first integer is read

   while (inputNumber != -1000) {
      if (inputNumber <= 0) {
         cout << inputNumber << endl;
         productOfSelected = productOfSelected * inputNumber;
      }
      cin >> inputNumber;
   }

   cout << "The product of all non-positive integers is " << productOfSelected << endl;

	return 0;
}
/*The first integer is read from input. Read the remaining integers while the integers are in the range -10 to 45, both exclusive.
  For each integer read that is in the given range, output the integer followed by " is good".
  Then, output the integer read that causes the reading to stop followed by " is bad". End each output with a newline. */
#include <iostream>
using namespace std;

int main() {
   int inVal;

   cin >> inVal;  // The first integer is read

   while (inVal > -10 && inVal < 45) {
         cout << inVal << " is good" << endl;
         cin >> inVal;
      }
      cout << inVal << " is bad" << endl;
   return 0;
}
/*Integer shirtCount is initialized with 0. String inputWord is read from input. Write a loop that iterates while inputWord is not equal to "Done". In each iteration of the loop:

    Increment shirtCount if inputWord is equal to "Shirt".
    Read string inputWord from input. */
#include <iostream>
using namespace std;

int main() {
	string inputWord;
	int shirtCount;

	shirtCount = 0;

	cin >> inputWord;

   while (inputWord != "Done") {
      if (inputWord == "Shirt") {
         shirtCount +=1;
      }
      cin >> inputWord;
   }

	cout << "Shirt occurs " << shirtCount << " time(s)." << endl;

   return 0;
}
/*String inputWord is read from input and integer sumCounts is initialized with 0. Write a loop that iterates while inputWord is not equal to "Stop". In each iteration of the loop:

    Read integer clothingStock from input.
    Increase sumCounts by the value of clothingStock.
    Output the value of inputWord, followed by a newline.
    Read string inputWord from input. */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputWord;
   int clothingStock;
	int sumCounts;

   cin >> inputWord;
	sumCounts = 0;

   while (inputWord != "Stop") {
      cin >> clothingStock;
      sumCounts = sumCounts + clothingStock;
      cout << inputWord << endl;
      cin >> inputWord;
   }

	cout << sumCounts << " items" << endl;

   return 0;
}

/*The first and second integers in the input are read into variables previousIn and currentIn, respectively. Write a loop that iterates while currentIn is greater than previousIn. In each iteration:

    Output currentIn, followed by " is greater than ", previousIn, and ". Sequence is increasing." End with a newline.
    Assign previousIn with currentIn.
    Read the next integer from input and assign currentIn with the integer read.

After the loop, output the last integer read followed by " breaks the sequence." and a newline. */

#include <iostream>
using namespace std;

int main() {
   int currentIn;
   int previousIn;

   cin >> previousIn;
   cin >> currentIn;
   cout << "Sequence starts at " << previousIn << "." << endl;

   while (currentIn > previousIn) {
      cout << currentIn << " is greater than " << previousIn << ". Sequence is increasing." << endl;
      previousIn = currentIn;
      cin >> currentIn;
   }
   cout << currentIn << " breaks the sequence." << endl;

   return 0;
}

//For Loops - a loop often iterates for a specific amount of times, like needing 10 iterateions or one iteration per input val or list item
//For loops are extremely useful here
//a For Loop is a 3 part loop, it has a loop variable initialization, a loop expression, and a loop variable update
//a for loop describes iterating a speficif number of times easier and more clearly than using a while loop
//think "for x in y, do this" and this helps set the amount needed for the for loop

for (initialExpression; conditionExpression; updateExpression) {
  // Loop body
}
// Statements after the loop

//While Loop version:
int i;
i = 0;
while (i < 5) {
  //loop body
  i = i + 1;
}

//for loop
int i;
for (i = 0; i < 5; i = i+1) {
  //loop body
}
//i = i+1; is so common it has it's own shorthand - the increment operator ++ -> ++i and the decrement operator -- -> --i
//it goes BEFORE i so that it's range and adjustments staywithin scope
//++i pre increment -> increments value then returns it -> returns new incremented value and modifies value in place
//i++ post increment -> returns value then increments it -> returns the old value,  creates a temporary copy of old value
int i;
...
for (i = 0; i < N; ++i) {
   ...
}


//example - interest savings
#include <iostream>
using namespace std;

int main() {
   double initialSavings;  // User-entered initial savings
   double interestRate;    // Interest rate
   double currSavings;     // Current savings with interest
   int i;                  // Loop variable

   cout << "Enter initial savings: ";
   cin  >> initialSavings;

   cout << "Enter interest rate: ";
   cin  >> interestRate;

   cout << endl << "Annual savings for 10 years: " << endl;

   currSavings = initialSavings;
   for (i = 0; i < 10; ++i) {
      cout << "$" << currSavings << endl;
      currSavings = currSavings + (currSavings * interestRate);
   }

   return 0;
}
//ex - average calculation - first input determins list size
include <iostream>
using namespace std;

// Outputs average of list of integers
// First value indicates list size
// Ex: 4  10 1 6 3  yields (10 + 1 + 6 + 3) / 4, or 5

#int main() {
   int currValue;
   int valuesSum;
   int numValues;
   int i;

   cin >> numValues; // Gets number of values in list

   valuesSum = 0;

   for (i = 0; i < numValues; ++i) { //iterates until i = numValue
      cin >> currValue; // Gets next value in list
      valuesSum += currValue;
   }

   cout << "Average: " << (valuesSum / numValues) << endl;

   return 0;
}

#include <iostream>
using namespace std;

int main() {
   int i;

   for (i = 0; i < 5; ++i) {
      cout << i;
   }

   return 0;
}
//output - 01234

/*countVal is read from input representing the number of integers to be read
A for loop reads integers from input into variable inputNum to be output. Complete the for loop statement to iterate countVal times. */
#include <iostream>
using namespace std;

int main() {
   int countVal;
	int inputNum;
   int i;

   cin >> countVal;

   for (i = 0; i < countVal; ++i) {
      cin >> inputNum;
		cout << inputNum << endl;
   }

   return 0;
}
/*Integer inputCount is read from input representing the number of integers to be read next. A for loop iterates from 0 to inputCount - 1. Inside the loop:

    Assign variable inputVal with an integer read from input.
    Output "Amount: " followed by inputVal, ending with a newline.
 */
#include <iostream>
using namespace std;

int main() {
   int inputCount;
   int inputVal;
   int i;

   cin >> inputCount;

   for (i = 0; i < inputCount; ++i) {

      cin >> inputVal;
      cout << "Amount: " << inputVal << endl;

   }

   return 0;
}

/*Integer numVals is read from input representing the number of integers to be read next. Use a for loop to iterate from 0 to numVals - 1. In the loop:

    Assign inputVal with the integer value read from input.
    Output inputVal.
    Unless inputVal is the last input read, output "|" after inputVal.
 */
#include <iostream>
using namespace std;

int main() {
   int numVals;
   int inputVal;
   int i;

   cin >> numVals;

   for (i = 0; i < numVals; ++i) {
      cin >> inputVal;
      cout << inputVal;
      if (i != numVals-1) {
         cout << "|";
      }
   }

   cout << endl;

   return 0;
}

//ex - finding max list value
#include <iostream>
using namespace std;

// Outputs max of list of integers
// First value indicates list size
// Ex: 4 -1 9 0 3  yields 9

int main() {
   int maxSoFar;
   int currValue;
   int numValues;
   int i;

   cin >> numValues;

   for (i = 0; i < numValues; ++i) {
      cin >> currValue;

      if (i == 0) { // First iteration
         maxSoFar = currValue;
      }
      else if (currValue > maxSoFar) {
         maxSoFar = currValue;
      }
   }

   if (numValues > 0) {
      cout << "Max: " << maxSoFar << endl;
   }

   return 0;
}
//ex - generate a data table C - F
/*following program generates a table of Celsius and Fahrenheit temperature values, in increments of 5 C.
The for loop counts from -10 to 40 in increments of 5, and names the loop variable currC rather than i to be more descriptive.  */
#include <iostream>
using namespace std;

int main() {
   int currC;
   double equivalentF;

   for (currC = -10; currC <= 40; currC += 5) { //set current celcius to -10, as long as it's not 40 it adds 5 for each iteration
      equivalentF =  (currC * 9.0 / 5.0) + 32.0; // conversion from C to F

      cout << currC << " C is ";
      cout << equivalentF << " F";
      cout << endl;
   }

   return 0;
}
/*Write a for loop that prints: 1 2 ... lastNumber

Ex: If the input is:

4

the output is:

1 2 3 4 */
#include <iostream>
using namespace std;

int main() {
   int lastNumber;
   int i;

   cin >> lastNumber;

   for(i = 1; i < lastNumber+1; ++i) {
      cout << i << " ";
   }

   return 0;
}

/*Write code that prints: countNum ... 2 1
Print a newline after each number.

Ex: If the input is:

3

the output is:

3
2
1 */

#include <iostream>
using namespace std;

int main() {
   int countNum;
   int i;

   cin >> countNum;

   for(i = countNum; i >=1; --i) {
      cout << i << endl;
   }

   return 0;
}
/*Write code that prints: Ready! numVal ... 2 1 Go!
Your code should contain a for loop. Print a newline after each number and after each line of text.

Ex: If the input is:

3

the output is:

Ready!
3
2
1
Go! */
#include <iostream>
using namespace std;

int main() {
   int numVal;
   int i;

   cin >> numVal;
   cout << "Ready!" << endl;
   for ( i = numVal; i >= 1; --i) {
      cout << i << endl;
   }
   cout << "Go!" << endl;

   return 0;
}

/*Write a for loop that iterates seven times to find the minimum value in a list of seven integer values. Within the loop:

    Read an integer value from input into variable inValue.
    The first value assigned to inValue is the smallest integer value read by default, since no other values have been read yet.
    Thus, if the current iteration is the first iteration, assign lowestVal with inValue.
    Otherwise, if inValue is less than lowestVal, assign lowestVal with the value of inValue.
 */
#include <iostream>
using namespace std;

int main() {
   int inValue;
   int lowestVal;
   int i;

   for (i = 0; i < 7; ++i) {
      cin >> inValue;
      if (i ==0) {
         lowestVal = inValue;
      }
      else if (inValue < lowestVal) {
         lowestVal = inValue;
      }
   }

   cout << lowestVal << endl;

   return 0;
}

/*Integer valCount is read from input representing the number of integer values to be read next. Use a for loop to read the remaining integer values from input. Within the loop:

    For each integer value read, output "Value read: " followed by the value and a newline.
    Assign largestVal with the largest integer value read.
 */
#include <iostream>
using namespace std;

int main() {
   int valCount;
   int inValue;
   int largestVal;
   int i;

   cin >> valCount;

   for (i = 0; i < valCount; ++i) {
      cin >> inValue;
      cout << "Value read: " << inValue << endl;

      if (i == 0 || inValue > largestVal) {
         largestVal = inValue;
      }
   }

   cout << "Largest: " << largestVal << endl;

   return 0;
}
/*Integer inputCount is read from input representing the number of integers to be read next. Use a for loop to read in the remaining integers from input into val
If all integers read from input are even, assign allEven with true. Otherwise, assign allEven with false.

Code at the end of main() outputs "All match" if allEven is true, or "Not all match" if allEven is false.

Ex: If the input is:

3
50 70 10

then the output is:

All match

Note: Even integers are divisible by 2. */

#include <iostream>
using namespace std;

int main() {
   int inputCount;
   bool allEven;
   int i;
   int val;

   allEven = true;
   cin >> inputCount;

   for (i = 0; i < inputCount; ++i) {
      cin >> val;
      if (val % 2 != 0) {
         allEven = false;
      }
   }

   if (allEven) {
      cout << "All match" << endl;
   }
   else {
      cout << "Not all match" << endl;
   }

   return 0;
}
/*Integer valCount is read from input representing the number of integers to be read next. Use a loop to read the remaining integers from input into val
  If any of the integers are in the range 10 to 100 inclusive, assign allValid with false. Otherwise, assign allValid with true.

Code at the end of main() outputs "Only valid value(s)" if allValid is true, or "Invalid value(s)" if allValid is false.

Ex: If the input is:

2
55 120

then the output is:

Invalid value(s)
 */
#include <iostream>
using namespace std;

int main() {
   int valCount;
   bool allValid;
   int i;
   int val;

   allValid = true;
   cin >> valCount;

   for (i = 0; i < valCount; ++i) {
      cin >> val;

      if (val >= 10 && val <= 100) {
         allValid = false;
      }
   }

   if (allValid) {
      cout << "Only valid value(s)" << endl;
   }
   else {
      cout << "Invalid value(s)" << endl;
   }

   return 0;
}

//often strings need iterated through, char by char using their index values to compare them

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputWord;
   int numLetters;
   unsigned int i;

   cout << "Enter a word: ";
   cin  >> inputWord;

   numLetters = 0;
   for (i = 0; i < inputWord.size(); ++i) {
      if (isalpha(inputWord.at(i))) {
         numLetters += 1;
      }
   }

   cout << "Number of letters: " << numLetters << endl;

   return 0;
}
//often, a programmer watns to iterate throguh a string until something is done, for instance changing strings in a list to match formatting etc

//find() searches for exact match
//replace() replaces each instance with the desired text

//ex - changes all occurences of "U.S.A: with "USA"
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int usaIndex;

   cout << "Enter text: ";
   getline(cin, userText); //get input til next newline

   // At least one occurrence exists
   while (userText.find("U.S.A.") != string::npos) { //string::npos - special constant value that indicates not fount / until the end of the string - used when searching substrings for chars
      // Get index of first instance
      usaIndex = userText.find("U.S.A."); //find

      // U.S.A. is 6 long
      userText.replace(usaIndex, 6, "USA");
   }

   cout << "New text: " << userText<< endl;

   return 0;
}
/*A website requires that passwords do not contain spaces. For each character in checkStr that is a space, assign the character with a hashtag ('#').
Note: isspace() returns true if a character is whitespace, and false otherwise.
Ex: isspace(' ') returns true. isspace('a') returns false. */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string checkStr;
   unsigned int i;

   getline(cin, checkStr);

   for (i = 0; i < checkStr.size(); ++i) {
      if (isspace(checkStr.at(i))) {
         checkStr.at(i) = '#';
      }
   }

   cout << "Adjusted password: " << checkStr << endl;

   return 0;
}

/*String password is read from input. For each character in password that is a digit, increment count by 1. Then, output "Valid" if count is less than 5 and password's length is less than 11. Otherwise, output "Invalid". End each output with a newline.
Note: isdigit() returns true if a character is a digit, and false otherwise. Ex: isdigit('8') returns true. isdigit('a') returns false. */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string password;
   int i;
   int count;

   getline(cin, password);
   count = 0;

   for (i = 0; i < password.size(); ++i) {
      if (isdigit(password.at(i))) {
         count +=1;
      }
   }
   if (count<5 && password.length() < 11) {
      cout << "Valid" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }

   return 0;
}

/*
"abc" is a string commonly found in weak passwords.
Use a while loop to count the number of occurrences of "abc" in passwordStr, and replace each occurrence of "abc" in passwordStr with an empty string("").


string.find(item) returns the index of the first occurrence of item in string. If no occurrence is found, then the function returns string::npos.
str.replace(indx, n, "") replaces the n characters starting at index indx of str with an empty string.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string passwordStr;
   int count;
	int strIndex;

   cin >> passwordStr;

   count = 0;
	strIndex = 0;

   strIndex = passwordStr.find("abc");
   while (strIndex != string::npos) {
      count +=1;
      passwordStr.replace(strIndex, 3, "");
      strIndex = passwordStr.find("abc");
   }

   cout << "Number of occurrences: " << count << endl;
	cout << "Remaining string: " << passwordStr << endl;

   return 0;
}


//nested loops - loops within other loops, contains inner and outer loop
//inner loop is within the main loop, for each main loop iteration the inner loop also iterates

//ex - 2 letter .com domain names

#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char letter1;
   char letter2;

   cout << "Two-letter domain names:" << endl;

   letter1 = 'a';
   while (letter1 <= 'z') { //main loop
      letter2 = 'a';
      while (letter2 <= 'z') { //inner loop
         cout << letter1 << letter2 << ".com" << endl;
         ++letter2;
      }
      ++letter1;
   }

   return 0;
}

//nested loop example - histogram
#include <iostream>
using namespace std;

int main() {
   int numAsterisk;  // Number of asterisks to print
   int i;            // Loop counter

   numAsterisk = 0;

   while (numAsterisk >= 0) {
      cout << "Enter an integer (negative to quit): ";
      cin >> numAsterisk;

      if (numAsterisk >= 0) {
         cout << "Depicted graphically:" << endl;
         for (i = 1; i <= numAsterisk; ++i) {
            cout << "*";
         }
         cout << endl << endl;
      }
   }

   cout << "Goodbye." << endl;

   return 0;
}
/*Integers outerInput and innerInput are read from input. The outer while loop executes outerInput times.
  Complete the inner while loop to execute (innerInput + 1) times for each iteration of the outer while loop.

Ex: If the input is 2 6, then the output is:

Inner loop ran 14 times
 */
#include <iostream>
using namespace std;

int main() {
   int outerInput;
   int innerInput;
   int count;
   int i;
   int j;

   cin >> outerInput;
   cin >> innerInput;

   count = 0;
   i = 0;
   while (i < outerInput) {
		j = 0;
		while (j <= innerInput) {
         ++count;
         ++j;
      }
      ++i;
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}
/*Integer userNum is read from input. For each number from 1 to userNum both inclusive, output the number's value of percent sign characters ('%') followed by the number on a new line.

Ex: If the input is 4, then the output is:

%1
%%2
%%%3
%%%%4
 */
#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   for (i = 1; i <= userNum; ++i) {
      for ( j = 1; j <= i; ++j) {
         cout << "%";
      }
      cout << i << endl;
   }

   return 0;
}
/*In Max's mailbox service, each PO box is labeled with a letter followed by an integer. Given integers numRows and numColumns, output the label for each PO box, followed by a space
End each row with a newline.
    Rows are in alphabetical order. PO boxes in the first row all start with the letter A.
    Columns are in ascending order. PO boxes in the first column all end with the integer 1. */
#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   char currentRowLetter;
   int currentColumn;
   int currentColumnInteger;

   cin >> numRows;
   cin >> numColumns;

   currentRowLetter = 'A';
   for (int i = 0; i < numRows; ++i) {
      currentColumnInteger = 1;
      for (int j = 0; j < numColumns; ++j) {
         cout << currentRowLetter << currentColumnInteger << " ";
         currentColumnInteger +=1;
      }
      cout << endl;
      currentRowLetter +=1;
   }

   return 0;
}

//Programs should be built incrementally - not all at once
//write code, test, fix, write more, continue
//FIXME comments - comment labeled appropriately, shows your future self what you need to fix / implement
#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Current element in phone number string
   char currChar;     // Current char in phone number string

   cout << "Enter phone number: ";
   cin >> phoneStr;

   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if ((currChar >= '0') && (currChar <= '9')) {
         cout << currChar; // Print element as is
      }
      // FIXME: Add else-if branches for letters and hyphen
      else {
         cout << '?';
      }
   }

   cout << endl;

   return 0;
}
//Break statements - end a loop immediately

//Continue Statements - causes an immediate jump to the loop condition check
//can sometiems imrpove loop readability
#include <iostream>
using namespace std;

int main() {
   const int EMPANADA_COST = 3;
   const int TACO_COST     = 4;

   int userMoney;
   int numTacos;
   int numEmpanadas;
   int mealCost;
   int maxEmpanadas;
   int maxTacos;
   int numOptions;
   int numDiners;

   mealCost = 0;
   numOptions = 0;

   cout << "Enter money for meal: ";
   cin >> userMoney;

   cout << "How many people are eating: ";
   cin >> numDiners;

   maxEmpanadas = userMoney / EMPANADA_COST;
   maxTacos     = userMoney / TACO_COST;

   for (numTacos = 0; numTacos <= maxTacos; ++numTacos) {
      for (numEmpanadas = 0; numEmpanadas <= maxEmpanadas; ++numEmpanadas) {

         // Total items purchased must be equally
         // divisible by number of diners
         if ( ((numTacos + numEmpanadas) % numDiners) != 0) {
            continue; //CONTINUE STATEMENT -> skips the rest of the loop body, jumps back to the start of our For loop
         }

         mealCost = (numEmpanadas * EMPANADA_COST) + (numTacos * TACO_COST);

         if (mealCost == userMoney) {
            cout << "$" << mealCost << " buys " << numEmpanadas
                 << " empanadas and " << numTacos
                 << " tacos without change." << endl;
            numOptions = numOptions + 1;
         }
      }
   }

   if (numOptions == 0) {
      cout << "You cannot buy a meal without "
           << "having change left over." << endl;
   }

   return 0;
}

#include <iostream>
using namespace std;

int main() {
   int stop;
   int n;

   cin >> stop;

   for (n = 3; n < 9; ++n) {
      cout << n << endl;

      if (n > stop) {
         cout << "stop" << endl;
         break;
      }
   }

   return 0;
} //input - 4, output - 3 4 5 stop  all with newlines

#include <iostream>
using namespace std;

int main() {
   int a;
   int b;
   int c;

   cin >> a;
   cin >> b;
   cin >> c;

   while (a < b) {
      cout << a;
      cout << endl;

      if (a > c) {
         break;
      }

      a += 3;
   }

   return 0;
}
/*
  The loop iterates while a < b. In every iteration, the value of a is output, followed by a newline.

      If a > 9, the break statement executes, and the loop exits.
      Otherwise, a is incremented by 3 and the loop continues to execute.
 */
//input - 3 24 9
//output
//3
//6
//9
//12

//Scope - Variable can only be used within the block of code they're contained, like in main() or if you declare int i in a loop
#include <iostream>
using namespace std;

int main() {

   // int val1  = userNum;    // ERROR
  int userNum = 2;           // Name valid to main's "}"
  int newNum  = userNum + 1;
  int i;

   for (i = 0; i < newNum; ++i) {
     int valSquared;        // Name valid to for's "}"
     valSquared = userNum * userNum;
     cout << i << " squared: " << valSquared << endl;
  }

   // cout << "Last value: " << valSquared << endl; // ERROR

   return 0;
}

//scope issues are SUPER common when using for loops
for (int i = 0; i < 5; ++i) {
   x = x + i; //i can be used, it's declared within this blockl
}


x = x + i;  // ERROR - i is out of scope, basically doesn't exist



/*Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and an integer as input, and outputs a sentence using the input values as shown in the example below.
The program repeats until the input string is quit and disregards the integer input that follows.

Ex: If the input is:

apples 5
shoes 2
quit 0

the output is:

Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy. */
#include <iostream>
#include <string>
using namespace std;

int main() {
   string word;
   int amount;

   cin >> word;
   cin >> amount;

   while (word != "quit") {
      cout << "Eating " << amount<< " " << word << " a day keeps you happy and healthy." << endl;
      cin >> word;
      cin >> amount;
   }
   return 0;
}


//Mod 2 assignmnet
/*
 * Calculator.cpp
 *
 *  Date: 13SEP2026
 *  Author: Alexander Cochrane
 */

#include <iostream>

using namespace std;

int main() //corrected from void main() to int main() as per C++ standards
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y'; //corrected char declaration from "" to '', "" are for strings
	while (answer == 'Y' || answer == 'y')	{ //corrected loop expression from 'y' to 'Y', y!=Y, added both cases using logic

		cout << "Enter expression" << endl;

		cin >> op1 >> operation >> op2; //corrected order of integer inputs

		if (operation == '+') { //corrected double to single quotes, added braces for for loop
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //corrected direction for cout carrots
		}
		if (operation == '-') { //changed semi colon to braces, added closing brace
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;//corrected direction for cout carrots
		}
		if (operation == '*') { //added braces
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //added semicolon & changed operator to * from /
		}
		if (operation == '/') {
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; //changed operator to / from *
		} //added open and close braces
		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
		if (answer == 'N' || answer == 'n') { //added exit conditions and message
			cout << "Program Finished." << endl;
		}
	}
}
//Arrays - variable that can store a list of items instead of only one item
//arrays have only one name but store lots of data items each being direclty accessible
//individual array items are called elements
//some languages have a similar construct called a Vector
//items accessed by their index - i.e. myVector[0]
//Key feature of an array is that the index enables direct access to any element
//off by one error - arrays use a staring index of 0, avoid off by one errors
// 500 items in array - last index is 499, first is 0
myArray[0] = 3;

//Vecors are ordered lists of items of a given data type
//each Vector item is an Element
#include <vector> //needed to be able to use them
//Declaring an Empty Vector that can store an unspecified amount of elements:
vector<dataType> vectorName;
//data type specified in the angle brackets
vector<double> doubleVector;
vector<int> intVector;
.push_back() //appends a new element to end of existing vector
.at() //access a vector element by it's index

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> itemCounts;

  itemCounts.push_back(76); //0
  itemCounts.push_back(121); //1

  cout << itemCounts.at(0) << endl; //76
  cout << itemCounts.at(1) << endl; //121

  return 0;
}

//including a number in parentheses after the vector name specifies the number of elements in it
vector<int> itemList(4); //int vector with 4x elements
//vectors can also be initialized with set values using braces and assignment operator
//comma separate the elements in the braces
vector<int> carSales = {5, 7, 11}; //int vector with 3 elements - 5 7 and 11
//doing this ^ doesn't require size specification as it's automatically set usign the # of elements
//in the braces
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> myItems = {3, 5, 6, 7};
  vector<int> myOtherItems(3);
  myOtherItems.at(0) = 1;
  myOtherItems.push_back(14);
  myOtherItems.push_back(67);

  cout << myItems.at(0) << endl; //3
  cout << myItems.at(1) << endl; //5
  cout << myItems.at(2) << endl; //6
  cout << myItems.at(3) << endl; //7

  cout << myOtherItems.at(0) << endl; //1
  cout << myOtherItems.at(1) << endl; //14
  cout << myOtherItems.at(2) << endl; //67

}
//common error - forgetting to #include <vector>
//powerful vector aspect is that the index is an expression
//userNums.at(i) uses the value held in the int variable i as the index
//vectors are useful to lookup the nth list item
//vector's index must be an unsigned int, can't be a float


//ex - using Vector ith element with .at(i-1)
//oldest person example
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> oldestPeople(5);  //int vector containing 5x elements
   int nthPerson;               // User input, Nth oldest person

   //current list of oldest people and age
   oldestPeople.at(0) = 122; // Died 1997 in France
   oldestPeople.at(1) = 119; // Died 1999 in U.S.
   oldestPeople.at(2) = 117; // Died 1993 in U.S.
   oldestPeople.at(3) = 117; // Died 1998 in Canada
   oldestPeople.at(4) = 116; // Died 2006 in Ecuador

   cout << "Enter N (1..5): ";
   cin  >> nthPerson;

   if ((nthPerson >= 1) && (nthPerson <= 5)) { //as long as user input is more than 1 but less than / equal 5
      cout << "The #" << nthPerson << " oldest person lived ";
      cout << oldestPeople.at(nthPerson - 1) << " years." << endl; //nthPerson - 1 to avoid off by one error
      //if user input was 2 they'd get index 2 (3rd list item), when they wanted the 2nd item in the list,
   }
   return 0;
}

//using .size() you can iterate through all the elements of a vector, super useful for
//iterating using loops

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   unsigned int i;                 // Loop index

   cout << "Enter " << NUM_VALS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) { //iterates through all elements of the vector
      cout << "Value: ";
      cin >> userVals.at(i); //takes user integer input and assigns it to the element at i's index
   }

   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) { //prints out the vector elements in order of entry
      cout << userVals.at(i) << " ";
   }
   cout << endl;

   return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals;
   unsigned int i;

   userVals.push_back(4);
   userVals.push_back(6);
   userVals.push_back(7);

   userVals.at(2) = userVals.at(1) + 4;
   userVals.at(1) = userVals.at(2) + 7;

   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << endl; //4, 17, 10
   }

   return 0;
}

/*Five doubles are read from input as variables distance1 to distance5.
Use push_back() to add the variables distance1 to distance5 to vector swimmingDistance with the variables distance1 to distance5 in the order the input doubles are read.

Ex: If the input is 20.74 18.58 6.82 15.1 13.9, then the output is:

20.74 18.58 6.82 15.1 13.9
 */

#include "codetest.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<double> swimmingDistance;
   double distance1;
	double distance2;
	double distance3;
	double distance4;
	double distance5;
	unsigned int i;

	cin >> distance1;
	cin >> distance2;
	cin >> distance3;
	cin >> distance4;
	cin >> distance5;

   swimmingDistance.push_back(distance1);
   swimmingDistance.push_back(distance2);
   swimmingDistance.push_back(distance3);
   swimmingDistance.push_back(distance4);
   swimmingDistance.push_back(distance5);

   for (i = 0; i < swimmingDistance.size(); ++i) {
      cout << swimmingDistance.at(i) << " ";
   }
   cout << endl;

   codetest(); // For code testing only

   return 0;
}

/*Five doubles are read from input as variables time1 to time5.
Declare a vector of ten doubles named swimmingTime.
Initialize the elements at the odd indices with the value 0 and the even indices with the variables time1 to time5 in the order the input doubles are read.

Ex: If the input is 13.16 8.15 14.9 15.07 5.16, then the output is:

13.16 0 8.15 0 14.9 0 15.07 0 5.16 0
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   double time1;
	double time2;
	double time3;
	double time4;
	double time5;
	unsigned int i;

	cin >> time1;
	cin >> time2;
	cin >> time3;
	cin >> time4;
	cin >> time5;

   vector<double> swimmingTime = {time1, 0,  time2, 0, time3, 0, time4, 0, time5, 0};

   for (i = 0; i < swimmingTime.size(); ++i) {
      cout << swimmingTime.at(i) << " ";
   }
   cout << endl;

   return 0;
}

/*Integers numEmployees, firstEmployee, middleEmployee, and lastEmployee are read from input.
First, declare a vector of integers named walkingLogs with a size of numEmployees.
Then, initialize the first, middle, and last element in walkingLogs to
firstEmployee, middleEmployee, and lastEmployee, respectively.

Ex: If the input is 9 83 107 125, then the output is:

83 0 0 0 107 0 0 0 125
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numEmployees;
   int firstEmployee;
	int middleEmployee;
   int lastEmployee;
   unsigned int i;

   cin >> numEmployees;
   cin >> firstEmployee;
	cin >> middleEmployee;
   cin >> lastEmployee;

   vector<int> walkingLogs(numEmployees);
   walkingLogs.at(0) = firstEmployee;
   walkingLogs.at((numEmployees / 2)) = middleEmployee;
   walkingLogs.at((numEmployees - 1)) = lastEmployee;


   for (i = 0; i < walkingLogs.size(); ++i) {
      cout << walkingLogs.at(i) << " ";
   }
   cout << endl;

   return 0;
}

/*Integer numMembers is read from input as the number of elements in the vector that follows.
Then, numMembers elements are read from input into the vector swimmingRoster. Use a loop to access each element in the vector and if the element is greater than averageMembers, output the element followed by a space.

Ex: If the input is

7
112 51 94 28 130 191 55

then the output is:

Average: 94
Numbers greater than average: 112 130 191
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> swimmingRoster;
   int numMembers;
   int inputVal;
   unsigned int i;
	double averageMembers;
	int sumElementData = 0;

   cin >> numMembers;

   for (i = 0; i < numMembers; ++i) {
      cin >> inputVal;
      swimmingRoster.push_back(inputVal);
		sumElementData += swimmingRoster.at(i);
   }

	averageMembers = sumElementData / swimmingRoster.size();

	cout << "Average: " << averageMembers << endl;
	cout << "Numbers greater than average: ";
//this for block is what i wrote, somehow did it first try lets gooooooo
   for (i = 0; i < numMembers; ++i) {
      if (swimmingRoster.at(i) > averageMembers) {
         cout << swimmingRoster.at(i) << " ";
      }
   }

	cout << endl;

   return 0;
}


/*Integer numPeople is read from input as the number of elements in the vector that follows. Perform the following tasks:

    Output "Even: ".
    Use a for loop to output all the elements in vector swimmingListings that are at even indices.
    Output "Odd: ".
    Use a for loop to output all the elements in vector swimmingListings that are at odd indices.

In both loops, output a "-" after each element, including the last element, and end with a newline.

Ex: If the input is

6
138 78 131 156 5 128

then the output is:

Even: 138-131-5-
Odd: 78-156-128-

Note: x % 2 == 0 is true if x is even and false otherwise. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> swimmingListings;
   int numPeople;
   int inputVal;
   int i;

   cin >> numPeople;

   for (i = 0; i < numPeople; ++i) {
      cin >> inputVal;
      swimmingListings.push_back(inputVal);
   }

   cout << "Even: ";

   for (i = 0; i < numPeople; ++i) {
      if (i % 2 == 0) {    //originally tried swimmingListings.at(i) % 2 == 0 but didn't work
         cout << swimmingListings.at(i) << "-";
      }
   }
   cout << endl;

      cout << "Odd: ";

   for (i = 0; i < numPeople; ++i) {
      if (i % 2 != 0) {
         cout << swimmingListings.at(i) << "-";
      }
   }
   cout << endl;

   return 0;
}

//Iterating through vectors is super common and needs mastered
// Vector indices are 0 -> N-1, not 1 -> N so this is a very common loop structure
for (i = 0; i < myVector.size(); ++i) {
    //loop body
}

//Iterating through vectors is important for a lot of various reasons, for instance most programmers will need to iterate through a vector
// to determine some kind of quantity about the elements in the vector

//Example - Iterating through a vector to get a sum of it's elements
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;      // Number of elements to add
   vector<int> userVals;            // Empty vector for user values
   unsigned int i;                  // Loop index
   int val;                         // Element value
   int sumVal;                      // Sum of elements

   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Enter value: ";
      cin >> val;
      userVals.push_back(val);
   }

   sumVal = 0;
   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
   }
   cout << "Sum of elements: " << sumVal << endl;

   return 0;
}
//another common usecase is to get the min or max of vector elements
// create a variable to stroe the mex, use a for loop to go through each element, use an if statement in the for loop
// if i > maxVar then maxVar = i
// do this for all elements
// must initialize maxVar before the loop so it can be compared, don't use 0 but instead use the firstelement of the vector
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;      // Number of elements to add
   vector<int> userVals;            // Empty vector for user values
   unsigned int i;                  // Loop index
   int val;                         // Element value
   int maxVal;                      // Max of elements

   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) { //iteration to fill vector
      cout << "Enter value: ";
      cin >> val;
      userVals.push_back(val);
   }

   maxVal = userVals.at(0); //if we assigned this zero it wouldn't behave correctly, especially if our vector has negatives
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
    }
   cout << "Max of elements: " << maxVal << endl;

   return 0;
}


//Complete the code to compute the average of the vector's element values. The result should be 16.
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> valsVctr;     // Empty vector for values
   unsigned int i;           // Loop index
   int sumVal;               // Sum of values
   int avgVal;               // Average of values

   valsVctr.push_back(30);
   valsVctr.push_back(20);
   valsVctr.push_back(20);
   valsVctr.push_back(15);
   valsVctr.push_back(5);
   valsVctr.push_back(10);

   sumVal = 0;
   avgVal = 0;
//code goes here
   for (i = 0; i < valsVctr.size(); ++i) {
      sumVal = sumVal + valsVctr.at(i);
   }
//end of my code
   avgVal = sumVal / valsVctr.size();
   cout << "Average value: " << avgVal << endl;

   return 0;
}


//Off by one & out of range is supe common, you can't iterate past the amount of elements in the vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> valsVctr;     // Empty vector for values
   unsigned int i;           // Loop index

   valsVctr.push_back(30);
   valsVctr.push_back(20);
   valsVctr.push_back(20);
   valsVctr.push_back(15);
   valsVctr.push_back(5);
   valsVctr.push_back(10);

   for( i = 0; i < valsVctr.size(); ++i){ //if this was <=, then it would terminate the program as it'd try to iterate past the amount of existing elements
      cout << "valsVctr.at(" << i << ") = " << valsVctr.at(i) << endl;
   }

   return 0;
}
//iterate backwards through a vector:
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals;
   int i;

   userVals.push_back(1);
   userVals.push_back(5);
   userVals.push_back(9);

   for (i = userVals.size() - 1; i >= 0; --i) { //starting with vector.size()-1 starts at the last element, then you decrement to go backwards
      cout << userVals.at(i) << endl;
   }

   return 0;
}
/*Integer numInputs is read from input as the number of elements in vector hourlyPrices. Given the integer vector hourlyPrices
 write a for loop to output the integers in the second half of hourlyPrices.
Output each integer followed by an asterisk surrounded by spaces (" * "). */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> hourlyPrices;
   int numInputs;
   unsigned int i;
   int price;

   cin >> numInputs;

   for (i = 0; i < numInputs; ++i) {
      cin >> price;
      hourlyPrices.push_back(price);
   }

   for (i = 0; i < numInputs; ++i) {
      if (i >= numInputs / 2) {
         cout << hourlyPrices.at(i) << " * ";
      }
   }

   cout << endl;

   return 0;
}
/*Integer numIn is read from input as the number of elements in vector dailySalary
Given the integer vector dailySalary, write a for loop to output all the integers in dailySalary in reverse order.
Output a comma followed by a space (", ") after each integer except the last. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> dailySalary;
   int numIn;
   int i;
   int salary;

   cin >> numIn;

   for (i = 0; i < numIn; ++i) {
      cin >> salary;
      dailySalary.push_back(salary);
   }

   for (i = dailySalary.size() - 1; i >=0; --i) {
         cout << dailySalary.at(i);
      if (i > 0) {
         cout << ", ";
      }
   }

   cout << endl;

   return 0;
}


/*Integer numValues is read from input as the number of elements in vector yearlySalary.
Given the integer vector yearlySalary, write a for loop that assigns valueSum with the sum all the integers in yearlySalary that are less than 151 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> yearlySalary;
   int numValues;
   int valueSum;
   unsigned int i;
   int salary;

   cin >> numValues;

   for (i = 0; i < numValues; ++i) {
      cin >> salary;
      yearlySalary.push_back(salary);
   }

   valueSum = 0;

   for (i = 0; i < numValues; ++i) {
      if (yearlySalary.at(i) < 151) {
         valueSum = valueSum + yearlySalary.at(i);
      }
   }

   cout << "Sum of values below 151: " << valueSum << endl;

   return 0;
}


//Vectors can be resized as needed using resize(N)
myVector.resize(10) //changes the vector size to 10
// resize() can be used multiple times, if it increases the vector size then it's added at the end, decreasing deletes from the end
vector<int> myVector = {1,2,3,4,5,6,7,8,9,0};
myVector.resize(11); //adds an element to end
myVector.resize(9); //removes element from end

//if the size you need for the vector is unknown, initiate it without a size or elements
// get amount needed from input
// use myVector.resize(userVal) to set it's sizxe to the needed amount of elements
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals; // No elements yet
   int numVals;
   unsigned int i;

   cout << "Enter number of integer values: ";
   cin >> numVals;

   userVals.resize(numVals); // Allocate elements

   cout << "Enter " << numVals << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;

   return 0;
}

//swapping variables is often needed during programs, without using a temporary varaiable one of the var's values will get lost
x = 5
y = 98
temp = 0
temp = x
x = y
y = temp

//swapping values can be used to reverse a vector
// vector of size N -> swap 1 and N | 2 and N-1 ...
//the middle never changes
for (i = 0; i < revVector.size() / 2; ++i) { // /2 ensures we stop halfway
   tempValue = revVector.at(i); //needed to store the value for the swap
   revVector.at(i) = revVector.at(revVector.size() - 1 - i); //-1 addresses OBO error, - i goes that amount in from the right to grab the right values
   revVector.at(revVector.size() - 1 - i) = tempValue;
}


//EX - Reversing a vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;
   vector<int> revVector;
   unsigned int i;
   int userInput;
   int tempValue;

   cout << "Enter integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Enter value: ";
      cin >> userInput;
      revVector.push_back(userInput);
   }

   // Reverse
   for (i = 0; i < revVector.size() / 2; ++i) {
      tempValue = revVector.at(i); // These 3 statements swap
      revVector.at(i) = revVector.at(revVector.size() - 1 - i);
      revVector.at(revVector.size() - 1 - i) = tempValue;
   }

   cout << "Updated vector:";
   for (i = 0; i < revVector.size(); ++i) {
      cout << " " << revVector.at(i);
   }
   cout << endl;

   return 0;
}

//arrays vs vectors
// C++ supports both vectors and arrays for ordered lists
//array:
int myArray[10]; // an integer array with 10 items
myArray[i]; //accesses the ith element in the array
//Vector:
vector<int> myVector(10); //integer vector with 10 items
myVector.at(i); // access ith element in vector
//arrays have simpler syntax, vectors are safer to use -> best practice is to use vectors
//vector.at(i) checks that the index is within range, array[i] doesn't do this check, VERY HARD BUG TO FIND
int userWeights[3];
int userAge;

userAge = 44;

userWeights[0] = 122;
userWeights[1] = 119;
userWeights[2] = 117;
userWeights[3] = 199; // (Problematic) -> out of range

// Print userAge -> 199
// since userWeights[3] is out of range, it overwrites a value in memory, in this case the variable userAge, can be very hard to debug

//2D Arrays
// arrays can be declared with 2 dimesions -> int myArray[R][C] declares an int array with R rows and C columns with R*C total elements
// int myArray[2][3] creats a table with 2 rows and 3 columns - 6 int variables total
// accessing:
myArray[0][0] = 33; sets first element in row 0 and column 0 to be 33
num = myArray[1][2]; sets variable num with the value of row 1 column 2

// Define array with size [2][3]
int myArray[2][3];
// Write to some elements
myArray[0][0] = 55;
myArray[1][1] = 77;
myArray[1][2] = 99;

//2D array is a table with rows and columns conceptually
// compiler maps 2d array elements to 1d memory, each row following the previous row -> Row-Major Order
// flattening a 2D matrix into a 1D vecor requires manually mapping the row (i) and column (j) index to a 1d index
// 1D Offset = (i * COLUMNS) + j
// i = current row index
// columns = total # of clumns per row
// j = current column index
#include <iostream>
#include <vector>
using namespace std;

int main() {
    constexpr int ROWS = 2;
    constexpr int COLS = 3;

    // 1. Native C++ 2D arrays are strictly row-major in memory
    int nativeArr[ROWS][COLS] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };

    // 2. Best Practice: Simulating a 2D array using a flat 1D vector
    vector<int> flatMatrix = {1, 2, 3, 4, 5, 6};

    // Accessing element at Row 1, Column 1 (Value: 5)
    int r = 1;
    int c = 1;

    // Using the row-major formula: (r * COLS) + c
    int value = flatMatrix[(r * COLS) + c];

    cout << "Element at (" << r << "," << c << ") is: " << value << endl;

    return 0;
}

//ex - 2D array for distance between cities
#include <iostream>
using namespace std;

/* Direct driving distances between cities, in miles */
/* 0: Boston  1: Chicago  2: Los Angeles */

int main() {
   int cityA;                  // Starting city
   int cityB;                  // Destination city
   int drivingDistances[3][3]; // Driving distances

   // Initialize distances array
   drivingDistances[0][0] = 0;
   drivingDistances[0][1] = 960;  // Boston-Chicago
   drivingDistances[0][2] = 2960; // Boston-Los Angeles
   drivingDistances[1][0] = 960;  // Chicago-Boston
   drivingDistances[1][1] = 0;
   drivingDistances[1][2] = 2011; // Chicago-Los Angeles
   drivingDistances[2][0] = 2960; // Los Angeles-Boston
   drivingDistances[2][1] = 2011; // Los Angeles-Chicago
   drivingDistances[2][2] = 0;

   cout << "0: Boston  1: Chicago  2: Los Angeles" << endl;

   cout << "Enter city pair (Ex: 1 2) -- ";
   cin >> cityA;
   cin >> cityB;

   if ((cityA >= 0) && (cityA <= 2) && (cityB >= 0) && (cityB <= 2)) { //makes sure all inputs are within the ranges we set
      cout << "Distance: " << drivingDistances[cityA][cityB];
      cout << " miles." << endl;
   }

   return 0;
}

//2D arrays can be initialized during declaration usign nested braces, multiple lines improve readability but not needed
// Initializing a 2D array
int numVals[2][3] = { {22, 44, 66}, {97, 98, 99} };

// Use multiple lines to make rows more visible
int numVals[2][3] = {
   {22, 44, 66}, // Row 0
   {97, 98, 99}  // Row 1
};
//Arrays of more than 2D can be declared, but keep in mind the exponential growth in size and memory
myArray[2][3][5]// 2*3*5 elements - 30
myArray[100][100][5][3]// 100*100*5*3 elements - 150,000
//remember that index values start at 0, so the 5th row and 3rd column is not [5][3] but is [4][2]

/*Write a loop to iterate from 0 to the last row of milesTracker
Within each row, use a nested loop to iterate from 0 to the last column of milesTracker.
Within the nested loop, if an element is greater than maxMiles, assign maxMiles with the value of the element. Similarly, if an element is less than minMiles, assign minMiles with the value of the element.
Ex: If the input is: -10 20 30 40 the output is:
Min miles: -10
Max miles: 40*/

#include <iostream>
using namespace std;

int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0;
   int minMiles = 0;
   int value;

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         cin >> value;
         milesTracker[i][j] = value;
      }
   }

   maxMiles = milesTracker[0][0];
   minMiles = milesTracker[0][0];
//this nested for loop was what I wrote, did it wrong a LOT
   for (i = 0; i < NUM_ROWS; ++i) { //iterates through the rows
      for (j = 0; j < NUM_COLS; ++j) { //iterates through the columns for each iteration through the row
         if (milesTracker[i][j] > maxMiles) { //if the entry in any of the row and colunmn spaces is over max miles (think tables)
         maxMiles = milesTracker[i][j]; //sets that row and column entry value to Max Miles
      }
         if (milesTracker[i][j] < minMiles) {
            minMiles = milesTracker[i][j];
         }
      }
}
   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}


//Functions - names list of statements for repeated use
//declutters program, DRY, reduces errors, efficient and concise
//has a definition and a call
//definition - consists of function name and block of staements
//call - useing the function by name causing the code to execute

#include <iostream>
using namespace std;

double CalcPizzaArea() { //definition and subsequent code block
  double pizzaDiameter;
  double pizzaRadius;
  double pizzaArea;
  double piVal = 3.14159265;

  pizzaDiameter = 12.0;
  pizzaRadius = pizzaDiameter / 2.0;
  pizzaArea = piVal * pizzaRadius * pizzaRadius;
  return pizzaArea;
}

int main() {
  cout << "12 inch pizza is " << CalcPizzaArea(); //function call
  cout << " inches squared." << endl;
  return 0;
}
//main() is a function, it's automatically executed during program execution
//return statements pass data back from the function, the function data type is the return data type, VOID returns NOTHING
//functions can only return one item

//Parameters - function input that's specifed in the definition
//Argument - the data passed to the function for that parameter's value, can be an expression
#include <iostream>
using namespace std;

double CalcPizzaArea(double pizzaDiameter) { //value in parentheses is the parameter
   double pizzaRadius;
   double pizzaArea;
   double piVal = 3.14159265;

   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   return pizzaArea;
}

int main() {
   cout << "12.0 inch pizza is "<< CalcPizzaArea(12.0) //value is the argument
        << " square inches." << endl;
   cout << "16.0 inch pizza is "<< CalcPizzaArea(16.0)
        << " square inches." << endl;
   return 0;
}

myFunction(int param1, int param2) {
    //function body
}
myFunction(1,3) //function call with arguments
//functions can call other functions, if the function being called has a parameter it needs accounted for in the parent call
//https://cplusplus.com/doc/tutorial/functions/


//Complete the function definition to return the hours given minutes. Output for sample program when the user inputs 210.0: 3.5
#include <iostream>
using namespace std;

double GetMinutesAsHours(double origMinutes) {
   return origMinutes / 60;
}

int main() {
   double minutes;

   cin >> minutes;

   // Will be run with 210.0, 3600.0, and 0.0.
   cout << GetMinutesAsHours(minutes) << endl;

   return 0;
}

//functions are often used to output text, not needing a return value
//no return value -> Void keyword
//functions with void keyword are Void Functions
//after execution, control returns to caller without a value being returned

void PrintSummary(int id, int items, double price) { //void, no return value but can still take paremeters and args
    cout << "Order " << id << ":" << endl;
    cout << "   Items: " << items << endl;
    cout << fixed << setprecision(2);
    cout << "   Total: $" << price << endl;
}

PrintSummary(id, items, price); //outputs all the text in the above functions

//void functions and print fucntions are useful for repetition, like a menu system or listing out unchanging data

//example - menu system
#include <iostream>
using namespace std;

void PrintMenu() { //text block that will be printed each time it's called
   cout << "Today's Menu:" << endl;
   cout << "   1) Gumbo" << endl;
   cout << "   2) Jambalaya" << endl;
   cout << "   3) Quit" << endl << endl;
}

int main() {
   bool quit = false; //set to false to act as sentinel value, once changed while loop breaks
   int choice;

   while (!quit) {
      PrintMenu();
      cout << "Enter choice: ";
      cin >> choice;

      if (choice == 3) { //exit logic
         cout << "Goodbye" << endl;
         quit = true;
      }

      else {
         cout << "Order: ";
         if (choice == 1) {
            cout << "Gumbo" << endl;
         }
         else if (choice == 2) {
            cout << "Jambalaya" << endl;
         }
         cout << endl;
      }
   }
   return 0;
}
//Modular development is the process of dividing a program into separate modules that can be developed and tested separately and then integrated into a single program
//Incremental development is a process in which a programmer writes, compiles, and tests a small amount of code, then writes, compiles, and tests a small amount more. etc, etc....
//function stub is a function definition whose statements have not yet been written
//function stubs catch the high level detaisl and flow of the functions and code before writing out full code and statements
//use return statements or cout's to ensure the function stub tells user and coder it's not done yet
double FunctionStubExample(double StubCount) {
    cout << "STUB";
    return 0.0; //needs to be a double since i made the function a double
}
//usually the high-level flow and behavior is written out in main() and then the function stubs will return simple fixme's to show where they are in the code

//ex MPG
#include <iostream>
using namespace std;
// Program converts a trip's kilometers and liters into miles, gallons, and mpg

double ConvKilometersToMiles(double numKm) {
   double milesPerKm = 0.621371;
   return numKm * milesPerKm;
}

double ConvLitersToGallons(double numLiters) {
   double gallonsPerLiter = 0.264172;
   return numLiters * gallonsPerLiter;
}

double CalcMpg(double distMiles, double gasGallons) {
   double userMpg = distMiles / gasGallons; //this WAS a stub, wrote this part out and changed return from 0.0
   return userMpg;
}

int main() {
   double distKm;
   double distMiles;
   double gasLiters;
   double gasGal;
   double userMpg;

   cout << "Enter kilometers driven: " << endl;
   cin >> distKm;
   cout << "Enter liters of gas consumed: " << endl;
   cin >> gasLiters;

   distMiles = ConvKilometersToMiles(distKm);
   gasGal = ConvLitersToGallons(gasLiters);
   userMpg = CalcMpg(distMiles, gasGal);

   cout << "Miles driven: " << distMiles << endl;
   cout << "Gallons of gas: " << gasGal << endl;
   cout << "Mileage: " << userMpg << " mpg" << endl;

   return 0;
}

//Functions are often used to calculate mathematic formulas and conversions

//ex - height conversion
#include <iostream>
using namespace std;

/* Converts a height in feet/inches to centimeters */
double HeightFtInToCm(int heightFt, int heightIn) {
   const double CM_PER_IN = 2.54;
   const int IN_PER_FT = 12;
   int totIn;
   double cmVal;

   totIn = (heightFt * IN_PER_FT) + heightIn; // Total inches
   cmVal = totIn * CM_PER_IN;                 // Conv inch to cm
   return cmVal;
}

int main() {
   int userFt;  // User defined feet
   int userIn;  // User defined inches

   // Prompt user for feet/inches
   cout << "Enter feet: ";
   cin >> userFt;

   cout << "Enter inches: ";
   cin >> userIn;

   // Output the conversion result
   cout << "Centimeters: ";
   cout << HeightFtInToCm(userFt, userIn) << endl;

   return 0;
}


//C to F
#include <iostream>
using namespace std;


double FahrenheitToCelsius(double fahren, double cels) {
   fahren = (1.8 * cels) + 32;
   return fahren;
}

int main() {
   double tempF;
   double tempC;

   cout << "Enter temperature in Celsius: " << endl;
   cin >> tempC;

   tempF = FahrenheitToCelsius(tempF, tempC);

   cout << "Fahrenheit: " << tempF;

   return 0;
}

//math functions often call other functions - i.e. volume or surface area wil need to calculate area
#include <iostream>
#include <cmath>
using namespace std;

double CalcCircularBaseArea(double radius) {
   return M_PI * radius * radius;
}

double CalcCylinderVolume(double baseRadius, double height) {
   return CalcCircularBaseArea(baseRadius) * height;
}

double CalcCylinderSurfaceArea(double baseRadius, double height) {
   return (2 * M_PI * baseRadius * height) + (2 * CalcCircularBaseArea(baseRadius));
}

int main() {
   double radius;  // User defined radius
   double height;  // User defined height

   // Prompt user for radius
   cout << "Enter base radius: ";
   cin >> radius;

   // Prompt user for height
   cout << "Enter height: ";
   cin >> height;

   // Output the cylinder volume result
   cout << "Cylinder volume: ";
   cout << CalcCylinderVolume(radius, height) << endl;

   // Output the cylinder surface area result
   cout << "Cylinder surface area: ";
   cout << CalcCylinderSurfaceArea(radius, height) << endl;

   return 0;
}

//functions may need to include branches and other statements, these can be included in fucntiosn and behave the same
#include <iostream>
#include <iomanip>

using namespace std;

double CalcTax(double cost) {
   return cost * 0.15;
}

// Determine shipping cost based on weight
double CalcShippingCost(double weight) {
   double cost;

   if (weight < 1) {
      cost = 7.88;
   }
   else if (weight < 6) {
      cost = 14.32;
   }
   else if (weight < 10) {
      cost = 21.11;
   }
   else {
      cost = 25.5;
   }
   cost = cost + CalcTax(cost);
   return cost;
}

int main() {
   double weightOfPackage;        // User defined package weight

   cout << "Enter package weight: ";
   cin >> weightOfPackage;
   cout << "Shipping cost: $";
   cout << fixed << setprecision(2) << CalcShippingCost(weightOfPackage) << endl;
   return 0;
}

//Functions can also utilize for loops for iterative calculations and expressions
#include <iostream>
#include <iomanip>
using namespace std;

double ComputeAverage(int numCount) {
   double valuesSum = 0;
   int currValue = 0;

   for (int i = 0; i < numCount; ++i) {
      cout << "Enter number: ";
      cin >> currValue;
      valuesSum += currValue;
   }
   return valuesSum / numCount;
}

int main() {
   int numValues;
   double averageVal;

   cout << "Enter number of values: ";
   cin >> numValues;
   averageVal = ComputeAverage(numValues);

   cout << "Average: ";
   cout << fixed << setprecision(3) << averageVal << endl;
   return 0;
}

//example - Least Common Multiple
#include <iostream>
#include <cmath>
using namespace std;

// Function prompts user to enter positive non-zero number
int PromptForPositiveNumber() {
   int userNum;

   userNum = 0;

   while (userNum <= 0) {
      cout << "Enter a positive number (>0): " << endl;
      cin >> userNum;

      if (userNum <= 0) {
         cout << "Invalid number." << endl;
      }
   }

   return userNum;
}


// Function returns greatest common divisor of two inputs
int FindGCD(int aVal, int bVal) {
   int numA;
   int numB;

   numA = aVal;
   numB = bVal;

   while (numA != numB) { // Euclid's algorithm
      if (numB > numA) {
         numB = numB - numA;
      }
      else {
         numA = numA - numB;
      }
   }

   return numA;
}

// Function returns least common multiple of two inputs
int FindLCM(int aVal, int bVal) {
   int lcmVal;

   lcmVal = abs(aVal * bVal) / FindGCD(aVal, bVal);

   return lcmVal;
}

int main() {
   int usrNumA;
   int usrNumB;
   int lcmResult;

   cout << "Enter value for first input" << endl;
   usrNumA = PromptForPositiveNumber();

   cout << endl << "Enter value for second input" << endl;
   usrNumB = PromptForPositiveNumber();

   lcmResult = FindLCM(usrNumA, usrNumB);

   cout << endl << "Least common multiple of " << usrNumA
        << " and " << usrNumB << " is " << lcmResult << endl;

   return 0;
}


//Testing is the process of checking whether or not a program behaves correctly
//testing large programs is tricky as bugs can be anywhere throughout the code and bugs often interact with eachother
//good practice is to test small parts of the code individually and THEN the whole program
//UNIT TESTING - individually testing a small part (unit) of a program - often a function
//unit testing is typically conducted using a TESTBENCH or TESTHARNESS - separate program whose sole purpose is to check that a function returns the right output for input
//TEST VECTORS - unique set of input values used for unit tests

//Test harness for a function that converts a specified time in hours and minutes to total amount of minutes - HrMinToMin()
include <iostream>
using namespace std;

// Function converts hrs/min to min
int HrMinToMin(int origHours, int origMinutes) {
   int totMinutes; // Resulting minutes

   totMinutes = (origHours * 60) + origMinutes;

   return origMinutes;
}

int main() {

   cout << "Testing started" << endl;

   cout << "0:0, expecting 0, got: "    << HrMinToMin(0, 0)  << endl;
   cout << "0:1, expecting 1, got: "    << HrMinToMin(0, 1)  << endl;
   cout << "0:99, expecting 99, got: "  << HrMinToMin(0, 99) << endl;
   cout << "1:0, expecting 60, got: "   << HrMinToMin(1, 0)  << endl;
   cout << "5:0, expecting 300, got: "  << HrMinToMin(5, 0)  << endl;
   cout << "2:30, expecting 150, got: " << HrMinToMin(2, 30) << endl;
   // Many more test vectors would be typical...

   cout << "Testing completed" << endl;

   return 0;
}

//OUTPUT
/*Testing started
0:0, expecting 0, got: 0
0:1, expecting 1, got: 1
0:99, expecting 99, got: 99
1:0, expecting 60, got: 0
5:0, expecting 300, got: 0
2:30, expecting 150, got: 30
Testing completed */
//examining the output of the tests can help show where the code is going wrong
//for instance, we can tell that the test works up until there's a value for the hours, checkign our code we see that
//we are returning origMinutes and not totMinutes

//manually examining all of the input can be a slog, instead configure the test harness to only print errors for incorrect output
//C++ provides a compact way to do this - assert()
//assert() is a macro (like a function) that prints an error & exits the program if it's input expression is false
//the message includes the line number and the expression
//requires including cassert

//EX - hours to minuites test harness usint assert()s
#include <iostream>
#include <cassert>
using namespace std;

double HrMinToMin(int origHours, int origMinutes) {
   int totMinutes;  // Resulting minutes

   totMinutes = (origHours * 60) + origMinutes;

   return origMinutes;
}

int main() {

   cout << "Testing started" << endl;

   assert(HrMinToMin(0, 0)  == 0);
   assert(HrMinToMin(0, 1)  == 1);
   assert(HrMinToMin(0, 99) == 99);
   assert(HrMinToMin(1, 0)  == 60);
   assert(HrMinToMin(5, 0)  == 300);
   assert(HrMinToMin(2, 30) == 150);
   // Many more test vectors would be typical...

   cout << "Testing completed" << endl;

   return 0;
}

//if statements could be used as well, but asserts are more compact
if ( HrMinToMin(0, 0) != 0 ) {
   cout << "0:0, expecting 0, got: " << HrMinToMin(0, 0) << endl;
} //this would need to be included for each test case

//assert enables compact & readable test harnesses and easese the task of checkign code output for accuracy

//test vectors should be chosen thouroughly so taht they exercise a function to it's limits
//all input values being tested is ideal but not practical
//good test vectors include a number of normal cases that represent a rich variety of typical and expected input values
//mixing large and cmall, common and uncommon values is ideal
//good test vectors include BORDE CASES that represent fringe scnearios like 0 adn 99999999, negatives, massive numbers, thinks that are extreme, weird and unlikely

//each function call creates a new set of local variables forming part of the stack frame
//a return causes these vars to be discarded


//new programmers sometimes assign a value to a parameter believing the assignment updates the corresponding argument variable
//example situation is when a function should return 2 values, even though a function's return construct can ONLY return one value
//assigning a normal parameter fails to update the argument's variable becuase normal paremeters are PASS BY VALUE meaning the argument's value is copied into a local variabel for the paremeter

//Pass By Value - user tries printing the usrHr and usrMin values but the arguments AREN'T updated as the function uses alocal variable copy
#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int hrVal, int minVal) {
   hrVal  = timeVal / 60;
   minVal = timeVal % 60;
}

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime;

   ConvHrMin(totTime, usrHr, usrMin);

   cout << "Equals: ";
   cout << usrHr << " hrs ";
   cout << usrMin << " mins" << endl;

   return 0;
}

//Pass by Reference - add & after the datatype in the paremeters of the function
//the paremeter instead doesn't create a local copy of the argument but instead refers DIRECTLY to it's memory location

//PASS BY REFERENCE - Parameters WILL directly modify the argument values
#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int& hrVal, int& minVal) { //int& means it's pass by reference parameter now
   hrVal = timeVal / 60;
   minVal = timeVal % 60;
}

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime; //156

   ConvHrMin(totTime, usrHr, usrMin);

   cout << "Equals: ";
   cout << usrHr << " hrs "; //2
   cout << usrMin << " min" << endl; //36 - userHr and userMin keep teh updated values from ConvHrMin()

   return 0;
}
//Pass by reference should be used sparingly, it's better to just use multiple fubnctions for multiple return values
//exceptions are when output values may be intertwined, this makes sense to use multiple pass-by-refference parameters
//like when converting money into change or conveting from Polar to Cartesian coordinates
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies)
void PolarToCartesian(int radialPol, int anglePol, int& xCar, int& yCar)

//money change example

#include <iostream>
using namespace std;

void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies ) {
   numQuarters = totCents / 25;
   totCents = totCents % 25;

   numDimes = totCents / 10;
   totCents = totCents % 10;

   numNickels = totCents / 5;
   totCents = totCents % 5;

   numPennies = totCents;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;

   cout << "Enter total cents: " << endl;
   cin >> userCents;

   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;

   return 0;
}

//Although a pass-by-value parameter creates a local copy, good practice is to avoid assigning such a paremeter
//below code is technically correct but bad practice
int IntMax(int numVal1, int numVal2) {
   if (numVal1 > numVal2) {
      numVal2 = numVal1; // numVal2 holds max, should have just used a temp value to avoid issues
   }

   return numVal2;
}

//assigning a parameter may slightly reduce code, but is lazy and can mislead readers into believing the argument variable is supposed to be updated
//also increases likliehood of a bug caused by a statement reading the paramter later on but assuming it's value is the original passed value


//Reference Variables - type of variable that refers to another variable
//ex: int& maxValRef; - declares a refrence variable of type int
//dev MUST initialize EACH reference with an existing variable, which is done by initializing the reference var when the refernce is declared:
int & maxValRef = usrInput3;

//ex - Refernce Variable - below code usrValRef is a refernce that refers to usrValInt. user entered number gets assigned to the variable userValInt
//since usrValRef refers to userVallInt, printing usrValInt OR userValRef will print the same thing

#include <iostream>
using namespace std;

int main() {
   int usrValInt;
   int& usrValRef = usrValInt;  // Refers to usrValInt | any time userValInt is changed, the reference will reflect it too

   cout << "Enter an integer: ";
   cin  >> usrValInt;

   cout << "We wrote your integer to usrValInt." << endl;
   cout << "usrValInt is: " << usrValInt << "." << endl;
   cout << "usrValRef refers to usrValInt, and is: " << usrValRef << "." << endl;

   usrValInt = 99;
   cout << endl << "We assigned usrValInt with 99." << endl;
   cout << "usrValInt is now: " << usrValInt << "." << endl;
   cout << "usrValRef is now: " << usrValRef << "." << endl;
   cout << "Note that usrValRef refers to usrValInt, so it changed too." << endl;
   return 0;
}
//output - they enter 42, printing either var will show 42, changing usrValInt will ALSO change usrValRef
//useful for Abstraction from user to ensure variables are not altered but can still be interacted with (i think, just guessing)

//pass by reference is often used to modify a string or vector
//ex - modifying a string using pass by reference
#include <iostream>
#include <string>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(string& modStr) {
   unsigned int i;   // Loop index
   for (i = 0; i < modStr.size(); ++i) {
      if (modStr.at(i) == ' ') {
         modStr.at(i) = '-';
      }
   }
}

int main() {
   string userStr;  // Input string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   getline(cin, userStr); //gets entire stringfrom input until newline

   // Call function to modify user defined string
   StrSpaceToHyphen(userStr); //userStr is passed as the argument to the string& parameter, so the function performs it's code blocks and it's return values are now userStr

   // Output modified string
   cout << "String with hyphens: ";
   cout << userStr << endl;

   return 0;
}

//the string serves as the functions input & output, the paramter MUST be pass by reference so that the original string can be modified and not a copy

//same thing can be doen without pass by reference but requires a return type, modifying the function and adding some steps

#include <iostream>
#include <string>
using namespace std;

// Function replaces spaces with hyphens
string StrSpaceToHyphen(string modStr) {
   unsigned int i;   // Loop index

   for (i = 0; i < modStr.size(); ++i) {
      if (modStr.at(i) == ' ') {
         modStr.at(i) = '-';
      }
   }
}

int main() {
   string userStr;  // Input string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   getline(cin, userStr);

   // Output modified string
   cout << "String with hyphens: ";
   cout << StrSpaceToHyphen(userStr) << endl;

   return 0;
}

//sometiems coders define a vector/string param as pass by reference despite the function not modifying the parameter
//this is often done to prevent the performance & memory overhead of copyign the arg that would otherwise happen

//const keyword can be added before the vector/string parameter in the function to prevent the parameter from being modified
//this is often done on large vector or string inputs for effieciency
//make it a pass by reference, but also a const to avoid assignmetn and gain teh efficiency benefits

//EX: Normal & const pass by reference for vector parameters in vector reversal
#include <iostream>
#include <vector>
using namespace std;

void ReverseVals(vector<int>& vctrVals) { //void for no return, int& for pass by reference
   unsigned int i;  // Loop index
   int tmpVal;      // Temp variable for swapping

   for (i = 0; i < (vctrVals.size() / 2); ++i) { ///2 for only doign half otehrwise keeps swapping incorrectly
      tmpVal = vctrVals.at(i); // These statements swap //sets i to be the temp val for temporary handling during swap
      vctrVals.at(i) = vctrVals.at(vctrVals.size() - 1 - i); //current index becomes last element
      vctrVals.at(vctrVals.size() - 1 - i) = tmpVal; //last element becomes first index, this repeats
   }
}

void PrintVals(const vector<int>& vctrVals) { //const so it doesn't get assigned, does NOT modify the vector but uses a constant pass by reference to be efficient
   unsigned int i;  // Loop index

   // Print updated vector
   cout << endl << "New values: ";
   for (i = 0; i < vctrVals.size(); ++i) {
      cout << " " << vctrVals.at(i);
   }
   cout << endl;
}

int main() {
   const int NUM_VALUES = 8;            // Vector size
   vector<int> userValues(NUM_VALUES);  // User values
   int i;                               // Loop index

   // Prompt user to populate vector
   cout << "Enter " << NUM_VALUES << " values..." << endl;
   for (i = 0; i < NUM_VALUES; ++i) {
      cout << "Value: ";
      cin >> userValues.at(i);
   }

   // Call function to reverse vector values
   ReverseVals(userValues); //passed to first function as a reference, instead of makign local copy it overwrites this vector's values

   // Print reversed values
   PrintVals(userValues);

   return 0;
}

//making a local copy enables compiler to generage more efficient code, partly becuase it can place the copies inside a register file - tiny and fast memory inside processor

//Define a function's input/output params as pass by reference but creat output params sparingly, use returns instead if you can
//pass by value - use a constant pass by reference for large items, otherwise use pass by value

//vector/string descript         | param type
// Small, not modified by func    - Const, not pass by ref
//Small, modified by func      -    not const, pass by ref
//Large, modified by func      -     pass by ref, not const
//large, not modified by func   -    pass by ref, const

//Functions with C Stering Parameters - Functiosn may often need to modify C style Strings
//C strings are low-level arrays of characters, they have fixed sizes and use different functiosn for manipulation
//c strings need #include <cstring>
//copmarison is done with strcmp()
//length found with strlen()
//concatenation done with strcat()
char cStr[] = "Hello"; -> C string
string cppStr = "Hello"; -> C++ string
//c strings are justarrays of 1-byte chars, ending in a null termainator
//so char str[] = "foo" is {'f', 'o', 'o', NULL}


//EX - modifying C strings usign functions
#include <iostream>
#include <cstring>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
   int i;      // Loop index

   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }
}

int main() {
   const int INPUT_STR_SIZE = 50;  // Input C string size
   char userStr[INPUT_STR_SIZE];   // Input C string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   cin.getline(userStr, INPUT_STR_SIZE);

   // Call function to modify user defined C string
   StrSpaceToHyphen(userStr);

   cout << "String with hyphens: " << userStr << endl;

   return 0;
}

//paramter definition uses [] to indicate an array paramter, function call does NOT use []
//this is because the compiler automatically passes the C string as a pointer (variable storign a memory address of another variable)
//therefore, the function modifies the original string argument userSTr and nto a copy

//programmers can expliticly define an array paramter as a pointer
//uses char* modString instead of char modString[]
//it's a pointer paramter
#include <iostream>
#include <cstring>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char* modString) { //pointer notation
   int i;      // Loop index

   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }
}

int main() {
   const int INPUT_STR_SIZE = 50;  // Input string size
   char userStr[INPUT_STR_SIZE];   // Input C string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   cin.getline(userStr, INPUT_STR_SIZE);

   // Call function to modify user defined C string
   StrSpaceToHyphen(userStr);

   cout << "String with hyphens: " << userStr << endl;

   return 0;
}
//both programs do the same thing

//Scope - name of a defined variabel / fucntion is only visible to the part of the program which it exists and is declared
//variables declared in a function have scope limited to inside that function
//Compilers scan programs line by line from top to bottom so the scope starts AFTER the declaration and until the functions end
#include <iostream>
using namespace std;

const double CM_PER_IN = 2.54;
const int    IN_PER_FT = 12;

/* Converts a height in feet/inches to centimeters */
double HeightFtInToCm(int heightFt, int heightIn) {
   int totIn;
   double cmVal; //cmVal scope starts
   totIn = (heightFt * IN_PER_FT) + heightIn; // Total inches
   cmVal = totIn * CM_PER_IN;                 // Conv inch to cm
   return cmVal; //cmVal scope ends
}

int main() {
   int userFt;     // User defined feet
   int userIn;     // User defined inches

   // Prompt user for feet/inches
   cout << "Enter feet: ";
   cin >> userFt;

   cout << "Enter inches: ";
   cin >> userIn;

   // Output the conversion result
   cout << "Centimeters: ";
   cout << HeightFtInToCm(userFt, userIn) << endl;

   return 0;
}
//local variable - vars declared in functions - can be used from declaration to return
//global variables - vars declared outside of functions - can be used from declaration to end of file
//Global variables should be used sparingly, if a function's local variable/parameter update than in that function the names refering to the local itema nd the gloval item is inaccessible
//if a function updates a global variable it has effects goign beyond it's parameters and return value -> SIDE EFFECTS
//side effects make program maintence hard
//globals usually limited to constant variables

//functions also have scope, extending from it's definition to end of the file
//often, coders want to have main() definition near top of the file with other functions below it so that main is the first thign seen, however due to scope
//main wouldn't be able to call any of those functions
//Work around -> Function Declarations - speficying the return type, name and parameters ending with a semicolon where the definition's { would be
//also called a function Prototype
//gives the compiler enough information to recognize valid calls to the function, place them at top of the file and then you can add main() with teh actual functiosn being later on
#include <iostream>
#include <cmath> // To use "pow" function
using namespace std;

/* Program to convert given-year U.S. dollars to
   current dollars, using simplistic method of 4% annual inflation.
   Source: http://inflationdata.com (See: Historical) */

// (Function DECLARATION)
double ToCurrDollars (double pastDol, int pastYr, int currYr);

int main() {
   double pastDol;        // Starting dollar amount
   double currDol;        // Ending dollar amount (converted value)
   int pastYr;            // Starting year
   int currYr;            // Ending year (converted to year)

   // Prompt user for previous year/dollar and current year
   cout << "Enter current year: ";
   cin >> currYr;
   cout << "Enter past year: ";
   cin >> pastYr;
   cout << "Enter past dollars (Ex: 1000): ";
   cin >> pastDol;

   // Function call to convert past to current dollars
   currDol = ToCurrDollars(pastDol, pastYr, currYr);

   cout << "$" << pastDol << " in " << pastYr;
   cout << " is about $" << currDol << " in ";
   cout << currYr << endl;

   return 0;
}

// (Function DEFINITION)
// Function returns equivalent value of pastDol in pastYr to currYr
double ToCurrDollars (double pastDol, int pastYr, int currYr) {
   double currDol;      // Equivalent dollar amount given inflation

   currDol = pastDol * pow(1.04, currYr - pastYr );

   return currDol;
}

//default parameter values - sometimes a function's last or last few paramters should be optional, unless they need changes a function call can just omit the last argument using a preset value
#include <iostream>
using namespace std;

// Function prints date in two styles (0: American (default), 1: European)
void PrintDate(int currDay, int currMonth, int currYear, int printStyle = 0) { //settign a value for the last param will have it be that value unless specified

   if (printStyle == 0) {      // American
      cout << currMonth << "/" << currDay << "/" << currYear;
   }
   else if (printStyle == 1) { // European
      cout << currDay << "/" << currMonth << "/" << currYear;
   }
   else {
      cout << "(invalid style)";
   }
}

int main() {

   // Print dates given various style settings
   PrintDate(30, 7, 2012, 0);
   cout << endl;

   PrintDate(30, 7, 2012, 1);
   cout << endl;

   PrintDate(30, 7, 2012); // Uses default value for printStyle
   cout << endl;

   return 0;
}

//Function Name Overloading / Function Overloading
//sometimes a program has multiple functiosn with same name but different in the amount or type of paramters this is function overloading
//allows the same calls to be used with diffretn data types or parameters
//ex - function overloading
#include <iostream>
#include <string>
using namespace std;

void PrintDate(int currDay, int currMonth, int currYear) {
   cout << currMonth << "/" << currDay << "/" << currYear;
}

void PrintDate(int currDay, string currMonth, int currYear) {
   cout << currMonth << " " << currDay << ", " << currYear;
}

int main() {

   PrintDate(30, 7, 2012);
   cout << endl;

   PrintDate(30, "July", 2012);
   cout << endl;

   return 0;
}
//multiple overloading instances can be coded as long as the paramters are different, if they're the same it's an error in compilation
//Return type does NOT influence overloading, you can have 2 functions of same name with same param but different return types - compilation error

//often paramters need to be within a specific rane, otherwise it can generate errors, terminate code, give wrong values, etc

#include <iostream>
using namespace std;

void PrintDate(int currDay, int currMonth, int currYear) {

   // Parameter error checking
   if ((currDay < 1) || (currDay > 31)) {
      cout << "Invalid day (" << currDay << "). Using 1." << endl;
      currDay = 1;
   }

   if ((currMonth < 1) || (currMonth > 12)) {
      cout << "Invalid month (" << currMonth << "). Using 1." << endl;
      currMonth = 1;
   }

   // Begin function's normal behavior
   cout << currMonth << "/" << currDay << "/" << currYear;
}


int main() {

   PrintDate(30, 7, 2012);
   cout << endl << endl;

   PrintDate(40, 7, 2012);
   cout << endl << endl;

   PrintDate(30, 13, 2012);
   cout << endl << endl;

   return 0;
}

//Preprocessor is a tool that scans a file top to bottom looking for lines beginning with a hash symbol #
//each line liek this is not a program statement but directs the preprocessor to modify thefile in some way
//called a PreProcessor Directive - ends at end of line, no semicolon needed
//#include is the include directive, directs the copmiler to replacethat line by the contents of the given filename, the most commonly used
#include "filename"
#include <filename>
//"" cause preprocessor to look in the same directory as the file being compiled
//<> cause preprocessor to look for file in the system sndard library
//Good Pracitce - use .h suffix for any file that will be included in another, .h is short for header
//header indicates file to be included at top

//Separating part of a program's code into a separate file can yield several benefits
//One benefit is preventing a main file from becoming unmanageably large. Another benefit is that the separated part could be useful in other program
//Suppose a program has several related functions that operate on triples of numbers, such as computing the maximum of three numbers or computing the average of three numbers
//Those related functions' definitions can be placed in their own file as shown below in the file threeintsfcts.cpp

//maibn.cpp
include <iostream>
#include "threeintsfcts.h"
using namespace std;

// Normally lots of other code here

int main() {

   cout << ThreeIntsSum(5, 10, 20) << endl;
   cout << ThreeIntsAvg(5, 10, 20) << endl;

   return 0;
}

// Normally lots of other code here

//threeintsfcts.cpp
int ThreeIntsSum(int num1, int num2, int num3) {
   return (num1 + num2 + num3);
}

int ThreeIntsAvg(int num1, int num2, int num3) {
   int sum;
   sum = num1 + num2 + num3;
   return (sum / 3);
}

//threeintsfcts.h
int ThreeIntsSum(int num1, int num2, int num3);
int ThreeIntsAvg(int num1, int num2, int num3);

//One could then compile the main.cpp and threeintsfcts.cpp files together
g++ -Wall main.cpp threeintsfcts.cpp //compiles all files together, otherwise you get an error as the copmiler doesn't see the function definitions while processing main file

//two file approach has two key advantages over just having function definitions in the .h file
//one - .h seres as brief summary of all available functions
//two - main files copy doesn't become large during compilation

//header files could get included more than once, causign errors durign compilation
//solution - add preprocessor directives known as header file guards to teh .h
#ifndef FILENAME_H
#define FILENAME_H

// Header file contents

#endif
//Header file guards are preprocessor directives, which cause the compiler to only include the contents of the header file once
//#define FILENAME_H defines the symbold FILENAME_H to the preprocessor
//#ifndef FILENAME_H & #endif form a pair that instructs preprocessor to process the code between the pair ONLY if FILENAME_H isn't defined
//if preprocessor includes encounter the header more than once, code in the file during 2nd and any subsequent encounters will be skipped
#ifndef THREEINTSFCTS_H
#define THREEINTSFCTS_H

int ThreeIntsSum(int num1, int num2, int num3);
int ThreeIntsAvg(int num1, int num2, int num3);

#endif
