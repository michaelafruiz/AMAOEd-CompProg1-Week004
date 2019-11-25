/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Object-Oriented Programming 2
 * @app desc: CS201 - Week 011
 * @history:
 *  - 2019/11/20 | Student
 * ****************************************************************/
#include <cstdlib>
#include <iostream>
#include "Student.h"
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
  Student student("Michael Angelo Franco-Ruiz", "Candelaria, Zambales", "Male", 30, "Student");
  student.setProgram("BSIT");
  student.setYearsInCollege(1);
  student.setUniversity("AMAOED");
  cout << "[Student Details] \n" << student.getInformation();
  cout << "Program: " << student.getProgram() << endl;
  cout << "Years in College: " << student.getYearsInCollege() << endl;
  cout << "University: " << student.getUniversity() << endl;

  cout << endl;
  
    system ("pause");  
    return 0;
}
