/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Divide Them All
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/19 | Function Division
 * ****************************************************************/
//#include <cstdio>
#include <cstdlib>
//#include <limits>
#include <iostream>
//#include <string>
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
int divide(int dividend, int divisor) {
    return dividend / divisor;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
   int x[3][3], i;

  for(i = 0; i < 3; i++)
  {
    cout << "Set " << i + 1 << endl;
    while (x[i][0] == 0) {
      cout << "Enter the dividend for set " << i + 1 << ": ";
      cin >> x[i][0];
    }

    while (x[i][1] == 0) {
      cout << "Enter the divisor for set " << i + 1 << ": ";
      cin >> x[i][1];
    }
  }


  for(i = 0; i < 3; i++)
  {
    cout << "Answer for set " << i + 1 << " (" << x[i][0] << "/" << x[i][1] << ") is: " << divide(x[i][0], x[i][1]) << endl;
  }

    system ("pause");
    return 0;
}
