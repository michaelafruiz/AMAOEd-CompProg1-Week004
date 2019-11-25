/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Arrays
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/15 | Sort Four Variables
 * ****************************************************************/
//#include <cstdio>
//#include <cstdlib>
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
int x[6], a, j, temp;
  cout << "Please enter 6 numbers to sort." << endl;

  for(a = 0; a < 6; a++)
  {
    cout << "Number[" << a + 1 << "]: ";
    cin >> x[a];
  }
  for(a = 0; a < 6; a++)
  {
    j = a + 1;
    while(j<6){
      while(x[a] > x[j]) {
        temp=x[a];
        x[a]=x[j];
        x[j]=temp;
        j++;
      }
      j++;
    }
  }
  cout << "Integers after sorted: " << x[0] << ", " << x[1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << ", " << x[5] << endl;
   
    system ("pause");
    return 0;
}
