/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Divide Them All
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/19 | Function Digit
 * ****************************************************************/
//#include <cstdio>
#include <cstdlib>
//#include <limits>
#include <iostream>
#include <string>
//#include <ostream>
#include "_pause.h"
using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////
string separateDigit(int digit) {
  return to_string(digit / 10 % 10) + " " + to_string(digit % 10);
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
  int digit;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (digit < 10 || digit > 99) {
      cout << "Please enter a short value from 10 to 99: ";
      cin >> digit;
    } else {
      break;
    }
  }

  cout << separateDigit(digit) << endl;

    system ("pause");
    return 0;
}
