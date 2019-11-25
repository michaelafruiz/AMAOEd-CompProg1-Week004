/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Function-Pointer Explosion
 * @app desc: CS201 - Week 013
 * @history:
 *  - 2019/11/25 | Float
 * ****************************************************************/
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
    float a;
    float& b = a;
    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << &a << endl;
    cout << endl;

    cout << "The value of b is: " << b << endl;
    cout << "The address of b is: " << &b << endl;
   
    system ("pause");  
    return 0;
}
