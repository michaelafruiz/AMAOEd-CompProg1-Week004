/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Pointer Revolution
 * @app desc: CS201 - Week 012
 * @history:
 *  - 2019/11/25 | 10 Character Array
 * ****************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

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
   char a[10];
   char * p;
   p = (char*) &a;
   cout << "The value of a is: " << a << endl;
   cout << "The logical address of a is: " << &a << endl;
   cout << "The value of pointer of a is: " << p << endl;
   
    system ("pause");  
    return 0;
}
