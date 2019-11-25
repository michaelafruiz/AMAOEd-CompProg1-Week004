/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Arrays
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/15 | Equilateral Triangle
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
int x[5], i;
cout << "Please enter 5 numbers:" << endl;

for(i = 0; i < 5; i++)
{
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
}
   cout << "You entered these integers: " << x[0] << "," << x[1] << "," << x[2] << "," << x[3] << "," << x[4] <<endl;
   
    system ("pause");
    return 0;
}
