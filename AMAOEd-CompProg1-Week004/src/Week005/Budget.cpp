/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Budget
 * @app desc: CS201 - Week 005
 * @history:
 *  - 2019/11/04 | Budget
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

    float floatBudget;
    cout << "Enter your budget: ";
    cin >> floatBudget;
    cout << floatBudget * floatBudget << "\n";
    

    system ("pause");
    return 0;
}
