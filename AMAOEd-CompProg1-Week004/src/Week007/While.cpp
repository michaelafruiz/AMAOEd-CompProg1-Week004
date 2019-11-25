/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Trigonometry
 * @app desc: CS201 - Week 007
 * @history:
 *  - 2019/11/15 | While Statement
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
int intHeight, intWidth, intLine;
cout << "Please enter height: ";
cin >> intHeight;
intWidth = 0;
while(intHeight > 0){
    intLine = intWidth;
    while(intLine >= 0){
        cout << "*";
        intLine--;
    }
    cout << endl;
    intHeight--;
    intWidth += 2;
}
   

    system ("pause");
    return 0;
}
