/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Function-Pointer Explosion
 * @app desc: CS201 - Week 013
 * @history:
 *  - 2019/11/25 | Integer
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
void setValue(int& b){
    b = 27946;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int a = 654321;

    cout << "The value of a is: " << a << endl;

    setValue(a);
    cout << "The value of a after setValue is: " << a << endl;
   
    system ("pause");  
    return 0;
}
