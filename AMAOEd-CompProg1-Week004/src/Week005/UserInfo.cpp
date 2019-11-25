/* ****************************************************************
 * @author: Michael Angelo Franco-Ruiz
 * @app name: Working Machine 001
 * @app desc: CS201 - Week 006
 * @history:
 *  - 2019/11/14 | Working Machine 001
 * ****************************************************************/
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <cctype>
#include <clocale>
#include <cstdint>
#include <cwchar>
#include <cwctype>
#include <exception>
#include <initializer_list>
#include <iosfwd>
#include <istream>
#include <new>
#include <stdexcept>
#include <streambuf>
#include <system_error>
#include <type_traits>
#include <typeinfo>
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

    string strName, strPassword, strAddress;
    cout << "Enter your name: ";
    getline(cin, strName);
    cout << "Enter your password: ";
    getline(cin, strPassword);
    cout << "Enter your address: ";
    getline(cin, strAddress);
    cout << "Hi, I am " << strName << ". I live at " << strAddress << ".\n";

    system ("pause");
    return 0;
}
