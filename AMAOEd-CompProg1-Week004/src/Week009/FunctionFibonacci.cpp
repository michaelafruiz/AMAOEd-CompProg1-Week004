/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Divide Them All
 * @app desc: CS201 - Week 008
 * @history:
 *  - 2019/11/19 | Function Fibonacci
 * ****************************************************************/
//#include <cstdio>
#include <cstdlib>
#include <limits>
#include <iostream>
//#include <ostream>
#include "_pause.h"
using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////
int fib(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
int n;
  cout << "Enter an integer: ";
  cin >> n;
  cout << fib(n) << endl;

    system ("pause");
    return 0;
}
