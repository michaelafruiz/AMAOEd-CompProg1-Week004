/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: If Statement
 * @app desc: CS201 - Week 006
 * @history:
 *  - 2019/11/12 | If Statement
 * ****************************************************************/
#include <limits>
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

    int intOption;
  cout << "Please enter an integer: ";
  cin >> intOption;
  if (intOption == 0) {
    cout << "Hello World" << endl;
  } else if (intOption == 1) {
    cout << "I am Groot" << endl;
  } else if (intOption == 2) {
    cout << "To the Top" << endl;
  } else if (intOption == 3) {
    cout << "Where is the Horizon" << endl;
  } else if (intOption == 4) {
    cout << "I do not know" << endl;
  } else {
    cout << "Yeah, I will." << endl;
  }

    system ("pause");
    return 0;
}
