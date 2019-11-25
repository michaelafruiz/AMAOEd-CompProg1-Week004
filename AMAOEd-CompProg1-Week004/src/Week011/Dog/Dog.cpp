/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Object-Oriented Programming 2
 * @app desc: CS201 - Week 011
 * @history:
 *  - 2019/11/20 | Dog
 * ****************************************************************/
#include <cstdlib>
#include <iostream>
#include "dog.h"
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
  Dog pet("Dog", "Short Coat", 4, true);
  pet.setBreed("Beagle");
  pet.setSize("Small");
  pet.setIsRegister(false);
  cout << "[Dog Details] \n" << pet.getMammal();
  cout << "Breed: " << pet.getBreed() << endl;
  cout << "Size: " << pet.getSize() << endl;
  cout << "Is Registered: " << pet.getIsRegister() << endl;
  cout << endl;
  
    system ("pause");  
    return 0;
}
