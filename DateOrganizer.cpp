/**
 * A testbed for a binary heap implementation of a priority queue to sort
 * Gregorian dates using various comparators
 * @author Duncan, YOUR NAME
 * @see Date.h, PQueue.h
 * <pre>
 * Date: 99-99-9999
 * Course: csc 3102
 * File: DateOrganizer.cpp
 * Instructor: Dr. Duncan
 * </pre>
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <functional>
#include "PQueue.cpp"
#include "Date.h"
using namespace std;




/**
 * Gives the integer value equivalent to the day of the
 * week of the specified date 
 * @param d a date on the Gregorian Calendar
 * @return 0->Sunday, 1->Monday, 2->Tuesday, 3->Wednesday,
 * 4->Thursday, 5->Friday, 6->Saturday; otherwise, -1
 */
int getDayNum(const Date& d)
{
	//Implement this function
    d = Date();

    return 0;
    return 1;
    return 2;
    return 3;

}




int main(int argc, char** argv) 
{
    string usage = "DateOrganizer <data-file-name> <sort-code>";
    usage += "sort-code: -2 -month-day-year\n";
    usage += "sort-code: -1 -year-month-day\n";
    usage += "sort-code: 0 +weekdayNumber+monthName+day+year\n";
    usage += "sort-code: 1 +year+month+day\n";
    usage += "sort-code: 2 +month+day+year\n";
    if (argc != 3){
        cout << "Invalid number of command line arguments" << endl;
        cout << usage << endl;
        exit(1);
    }
    //Complete the implementation of this function



    return 0;
}

