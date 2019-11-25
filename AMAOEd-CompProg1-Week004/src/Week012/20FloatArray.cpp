/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Pointer Revolution
 * @app desc: CS201 - Week 012
 * @history:
 *  - 2019/11/25 | 20 Float Array
 * ****************************************************************/
#include <iostream>
#include <cstdlib>

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
   float a[20];
   float (&r) [20] = a;
   cout << "The value of a is: " << a << endl;
   cout << "The logical address of a is: " << &a << endl;
   cout << "The value of reference is: " << r << endl;
   
    system ("pause");  
    return 0;
}
