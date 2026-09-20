/*
*CS 210 - Project 1 - Chada Tech Clock
*Written By: Alex Cochrane
*Written On: 20SEP2026
*Purpose: 12/24 hour clock display simulation, interactive time changing
*/

#ifndef CS210PROJONE_FUNCTIONS_H
#define CS210PROJONE_FUNCTIONS_H

#include <iostream>
#include <string>
using namespace std;


void ShowMenu() { //prints menu
    cout << endl;
    cout << "***************************" << endl;
    cout << "* 1 - Add One Hour        *" << endl;
    cout << "* 2 - Add One Minute      *" << endl;
    cout << "* 3 - Add One Second      *" << endl;
    cout << "* 4 - Exit Program        *" << endl;
    cout << "***************************" << endl;
}


//hour logic
void AddHour(unsigned int& hours) { //adds one hour
    hours = hours + 1;
    if ( hours > 23 ) { //hour rollover
        hours = 0;
    }
}

//minute logic
void AddMinute(unsigned int& minutes, unsigned int& hours) {
    minutes = minutes + 1;
    if ( minutes > 59 ) {
        minutes = 0;
        AddHour(hours); //60 minutes = 1 hour, past 59 min + 1 hour
    }
}


//second logic
void AddSecond(unsigned int& seconds, unsigned int& minutes, unsigned int& hours) {
    seconds = seconds + 1;
    if (seconds > 59 ) {
        seconds = 0;
        AddMinute(minutes, hours); //60s -> 1m, if 60m -> 1h
    }
}



//adds 0 if they don't add it themselves
string TwoDigitInput(unsigned int n) {
    if (n < 10) {
        return "0" + to_string(n);
    }
    return to_string(n);
}

//shows the clocks and times
void ShowClocks (unsigned int hours, unsigned int minutes, unsigned int seconds) {
    //12 hour
    unsigned int displayHour12 = hours % 12;
    if (displayHour12 == 0) {
        displayHour12 = 12;
    }
    string merideanMod = (hours < 12) ? "AM" : "PM";

    //borders
    cout << endl;
    cout << "***************************";
    cout << "    ";
    cout << "***************************";
    cout << endl;

    //top info
    cout << "*      12-Hour Clock      *    *      24-Hour Clock      *\n";

    //time and formatting
    cout << "*        " << TwoDigitInput(displayHour12) << ":" << TwoDigitInput(minutes) << ":" << TwoDigitInput(seconds) << " " << merideanMod << "      *    " //12
    << "*        " << TwoDigitInput(hours) <<  ":" << TwoDigitInput(minutes) << ":" << TwoDigitInput(seconds) << "         *"; //24

    //border for bottom
    cout << endl;
    cout << "***************************";
    cout << "    ";
    cout << "***************************";
    cout << endl;
}

//grab user input for time
void GetStartTime(unsigned int& hours, unsigned int& minutes, unsigned int& seconds) {
    string amPm = "";
    cout << "Enter the Hours:" << endl;
    while (!(cin >> hours) || hours > 23) {
        cout << "Input incorrect, hours must be from 0 - 23:";
        cin.clear();
        cin.ignore();
    }
    cout << "AM or PM?" << endl;
    while (cin >> amPm) {
        if (amPm == "AM" || amPm == "am" || amPm == "PM" || amPm == "pm") {
            break;
        }
        else {
            cout << "Input incorrect, AM/PM must be from 0 - 23:" << endl;
            cin.clear();
            cin.ignore();
        }
    }

    if ((amPm == "PM" || amPm == "pm") && hours != 12) {
        hours = hours + 12;
    }
    else if ((amPm == "AM" || amPm == "am") && hours == 12) {
        hours = 0;
    }
    cout << "Enter the Minutes:" << endl;
    while (!(cin >> minutes) || minutes > 59) {
        cout << "Input incorrect, minutes must be from 0 - 59:";
        cin.clear();
        cin.ignore();
    }
    cout << "Enter the Seconds:" << endl;
    while (!(cin >> seconds) || seconds > 59) {
        cout << "Input incorrect, seconds must be from 0 - 59:";
        cin.clear();
        cin.ignore();
    }
}

#endif //CS210PROJONE_FUNCTIONS_H