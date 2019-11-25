/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Object-Oriented Programming 1
 * @app desc: CS201 - Week 010
 * @history:
 *  - 2019/11/20 | Legged Mammal
 * ****************************************************************/
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "Mammal.h"
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
  
  Mammal animal("leopard", "fluffy", 4, true);

  cout << "[Mammal Details] \n" << animal.getMammal() << endl;

  cout << endl; 

    system ("pause");
    return 0;
}
