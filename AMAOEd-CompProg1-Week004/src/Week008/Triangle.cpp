/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Arrays
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/15 | Triangle
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
int intHeight, i, k;

while(true) {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (intHeight < 1 || intHeight > 10) {
        cout << "Please enter height (1 - 10):";
        cin >> intHeight;
    }else {
        break;
    }
}

char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
for(i = 0; i < intHeight; i++)
{
    for(k = 0; k < intHeight - i - 1; k++)
    {
        cout << " ";
    }
    for(k = 0; k < (i * 2) + 1; k++)
    {
        cout << arr[i];
    }
    cout << endl;
}
    system ("pause");
    return 0;
}
