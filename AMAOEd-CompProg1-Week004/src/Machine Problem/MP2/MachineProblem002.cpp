/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Seat Reservation
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/17 | Machine Problem 002
 * ****************************************************************/
#include <cstdio>
#include <cstdlib>
#include <limits>
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
 int seatArray[5][7];
 int seatCount;
 int intEntrSeat;
 bool iFoundSeat;

 iFoundSeat=false;
 seatCount=0;

//Welcome Message
cout << "Good day! Welcome to Franco's Movie Theater VIP Seat Reservation System." << endl;

 //seat selection
 for (int intRow=0;intRow<5;intRow++) {
     for (int intCol=0;intCol<7;intCol++) {
         seatArray[intRow][intCol]=seatCount+1;
         seatCount++;
     }
 }
while (true) {
for (int intRow=0;intRow<5;intRow++) {
     for (int intCol=0;intCol<7;intCol++) {
         if (seatArray[intRow][intCol]<=9) {
             cout << seatArray[intRow][intCol] << "  ";
         } else
         {
             cout << seatArray[intRow][intCol] << " ";
         }
     }
     cout << endl;
 }
//Ask user to enter a seat number
cout << endl;
cout << "Enter seat number to reserve or 00 to exit: ";
cin >> intEntrSeat;

//Conditions
if (intEntrSeat>=1 && intEntrSeat<36) {
    for (int intRow=0;intRow<5;intRow++) {
        for (int intCol=0;intCol<7;intCol++) {
            if (seatArray[intRow][intCol]==intEntrSeat) {
                seatArray[intRow][intCol]=0;
                iFoundSeat=true;
                cout << "Seat successfully reserved." << endl;
            }
        }
    }
    if (iFoundSeat==false) {
        cout << "Seat is taken." << endl;
    }
} else if (intEntrSeat==00) {
    cout << endl;
    cout << "Thank you for using the Seat Reservation system!";
    cout << endl;
    break;
} else 
{
    cout << endl;
    cout << "Invalid seat number.";
    cout << endl;
}
iFoundSeat=false;
}
    system ("pause");
    return 0;
}
