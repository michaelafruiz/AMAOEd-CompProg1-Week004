/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Enrollment Slip
 * @app desc: CS201 - Week 006
 * @history:
 *  - 2019/11/15 | Machine Problem 001
 * ****************************************************************/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
// Declare Variables

string studName, course, yearName;
int yearLevel;
double units, tuitionFee, downPayment;

// Input Variables
cout << "\tStudent Name         :";
getline(cin, studName);
cout << "\tProgram/Course       :";
getline(cin, course);
cout << "\tYear Level           :";
cin >> yearLevel;
cout << "\tNo. of Units         :";
cin >> units;
cout << "\t-----------------------------------------------------------" <<endl;

//Conditions
if (yearLevel == 1){
    yearName = "Freshman";
    tuitionFee = units * 1500;
} else if (yearLevel == 2){
    yearName = "Sophomore";
    tuitionFee = units * 1800;
} else if (yearLevel == 3){
    yearName = "Junior";
    tuitionFee = units * 2000;
} else if (yearLevel == 4 || yearLevel == 5){
    yearName = "Senior";
    tuitionFee = units * 2300;
} 

downPayment = tuitionFee * 30/100;

//Display Results
cout << "\n\n\t\tENROLLMENT SLIP" <<endl;

cout << "\tStudent Name           :" << studName << std::endl;
cout << "\tProgram/Course         :" << course << std::endl;
cout << "\tYear Name              :" << yearName << std::endl;
cout << "\tNo. of Units           :" << units << std::endl;
cout << "\tTuition Fee            :" << tuitionFee << std::endl;
cout << "\tDown Payment           :" << downPayment << std::endl;
cout << "\tBalance                :" << tuitionFee - downPayment << std::endl;


cin.get();
   

    system ("pause");
    return 0;
}
