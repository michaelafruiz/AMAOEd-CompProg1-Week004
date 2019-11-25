/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Trigonometry
 * @app desc: CS201 - Week 007
 * @history:
 *  - 2019/11/15 | For Statement
 * ****************************************************************/
//#include <cstdio>
//#include <cstdlib>
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
int intHeight;
cout << "Please enter heights: ";
cin >> intHeight;

for (int M = 0, A = 0; M < intHeight; M++,A+=2)
{
    for(int R = 0; R < (intHeight * 2) - A - 2; R++)
    {
        cout << " ";
    }
    for(int R = 0; R <= A; R++)
    {
        cout << "*";
    }
    cout << endl;
}
   

    system ("pause");
    return 0;
}
