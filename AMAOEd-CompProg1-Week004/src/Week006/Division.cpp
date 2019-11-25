/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Division
 * @app desc: CS201 - Week 006
 * @history:
 *  - 2019/11/12 | Division
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

    float floatDividend, floatDivisor, max, min;
  max = std::numeric_limits<float>::max();
  min = std::numeric_limits<float>::lowest();

  cout << "Please enter your dividend: ";
  cin >> floatDividend;

  cout << "Please enter your divisor: ";
  cin >> floatDivisor;


  if (floatDivisor == 0) {
    cout << "Divisor should not be zero." << endl;
  } else if (floatDividend > max || floatDivisor > max) {
    cout << "Input value should not greater than max allowed value" << endl;
  } else if (floatDividend < min || floatDivisor < min ) {
    cout << "Input value should not lower than min allowed value" << endl;
  } else {
    cout << floatDividend / floatDivisor << endl;
  }

    system ("pause");
    return 0;
}
