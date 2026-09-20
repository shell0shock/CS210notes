/*
*CS 210 - Project 1 - Chada Tech Clock
*Written By: Alex Cochrane
*Written On: 20SEP2026
*Purpose: 12/24 hour clock display simulation, interactive time changing
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "functions.h"

using namespace std;

int main() {
    unsigned int hours = 0;
    unsigned int minutes = 0;
    unsigned int seconds = 0;
    unsigned int menuChoice = 0;
    bool quitVal = true;

    cout << "Please enter the current time." << endl;
    GetStartTime(hours, minutes, seconds); //function grabs user time as segmented inputs and checks input

    while (quitVal == true) {
        ShowClocks(hours, minutes, seconds);
        ShowMenu();
        cout << "Enter your choice, 4 will terminate the program." << endl;
        cin >> menuChoice;

        //switch logic for menu options
        switch (menuChoice) {
            case 1:
                AddHour(hours);
                break;
            case 2:
                AddMinute(minutes, hours);
                break;
            case 3:
                AddSecond(seconds, minutes, hours);
                break;
            case 4:
                cout << "Exiting Clock Program." << endl;
                quitVal = false;
                break;
            default:
                cout << "Not one of the Menu Options, please try again." << endl; //in case of invalid option choice
                break;
        }
    }
    return 0;
}