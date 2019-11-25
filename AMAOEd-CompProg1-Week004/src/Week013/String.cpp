/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Function-Pointer Explosion
 * @app desc: CS201 - Week 013
 * @history:
 *  - 2019/11/25 | String
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
void setRef(string& b) {
    b = "This is it!";
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    string a;

    setRef(a);
    printf("%s\n",a.c_str());
   
    system ("pause");  
    return 0;
}
