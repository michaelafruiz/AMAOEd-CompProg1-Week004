#ifndef _Employee
#define _Employee

#include <iostream>
#include <sstream>
#include <iomanip>

#include "../../Machine Problem/MP3/Payslip.h"

string padLR(string, char, long);
string padMid(string, string, long);
string fM(double);

class Employee {
    private:
        const string nl = "\n", tab = "\t";
    public:
        void main();
};
void Employee::main(){
    Payslip mine;
    long mainWidth = 81;

    //INPUT
    string name;
    double salary, ot;
    cout << tab << padLR("",'=',mainWidth) << nl;
    cout << tab << padLR("   P A Y S L I P    I N Q U I R Y ",'=',mainWidth) << nl;
    cout << tab << padLR("", '-',mainWidth) << nl;

    cout << tab << "Enter the employee's name: ";
    getline(cin, name);
    mine.setEmployeeName(name);

    do{
        cout << tab << "Enter the employee's basic salary(minimum: 10000): ";
        cin >> salary;
        mine.setBasicSalary(salary);
    }while(salary<10000);

    do{
        cout << tab << "Enter the number of OT hours (minimum: 1): ";
        cin >> ot;
        mine.setOTHrs(ot);
    }while(ot < 1);
    cout << tab << padLR("",'-',mainWidth) << nl;

    //OUTPUT
    //width of half page
    long subWidth = mainWidth/2 - 2;
    string dv = " | ";

    cout << tab << padLR("   PAYSLIP SUMMARY   ", '*',mainWidth) << nl << nl;
    cout << tab << padMid("Employee Name: ", mine.getEmployeeName(),subWidth) << tab << tab
                << "Salary Grade : " << mine.getPayGrade() << nl;
    cout << nl;
    cout << tab << padLR("Earnings",'-',subWidth) << dv
                << padLR("Deductions",'-',subWidth) << nl;
    cout << tab << padLR("",' ', subWidth) << dv
                << padLR("",' ', subWidth) << nl;
    cout << tab << padMid("Basic Salary: ", fM(mine.getBasicSalary()),subWidth) << dv
                << padMid("SSS: ", fM(mine.SSS),subWidth) << nl;
    cout << tab << padLR("",' ',subWidth) << dv
                << padMid("Pag-ibig: ", fM(mine.PAGIBIG),subWidth) << nl;
    cout << tab << padMid("No. of OT Hours: ", fM(mine.getOTHrs()),subWidth) << dv
                << padMid("Philhealth: ", fM(mine.PHILHEALTH),subWidth) << nl;
    cout << tab << padMid("Overtime Pay: ", fM(mine.getOTPay()),subWidth) << dv
                << padMid("Withholding Tax: ", fM(mine.getWithholdingTax()),subWidth) << nl;
    cout << tab << padLR("",'_',mainWidth) << nl << nl;
    cout << tab << padMid("Gross Pay: ", fM(mine.getGrossPay()),subWidth) << dv
                << padMid("Total Deductions: ", fM(mine.getWithholdingTax() + mine.FIXEDVALUES),subWidth) << nl << nl;
    cout << tab << padLR("",'_',mainWidth) << nl << nl;
    cout << tab << padMid("N E T   I N C O M E     :", fM(mine.getNetPay()),mainWidth) << nl;
    cout << nl;
}
template<typename T>struct Lenz: public numpunct<T>{
        virtual string do_grouping() const {return "\003";}
};
string fM(double a){
    ostringstream ss;
    ss.imbue(locale(ss.getloc(),new Lenz<char>()));
    ss << fixed << setprecision(2) << a;
    return ss.str();
}
string padMid(string field, string value, long len){
    long padLen = (len - (field.length()+value.length()));
    long resultLen;
    char filler = ' ';

    string padChars(padLen, filler);
    ostringstream ss;
    ss << field;
    resultLen = ss.str().length() + padChars.length() + value.length();
    if(resultLen !=len) ss << filler;
    ss << padChars << value;
    return ss.str();
}
    string padLR(string title, char filler, long wlen){
        long padLen = (wlen - title.length())/2;
        string padChars(padLen, filler);
        long resultLen;

        ostringstream ss;
        ss << padChars << title << padChars;
        resultLen = ss.str().length();
        if(resultLen !=wlen) cout << filler;
        return ss.str();
    }
/*OUTPUT

==========================+++==P A Y S L I P   I N Q U I R Y =================================
-----------------------------------------INPUT FORM-------------------------------------------
INPUT
1
2
3
----------------------------------------------------------------------------------------------
***************************************PAYSLIP SUMMARY****************************************

Employee Name: Michael Angelo Ruiz                  Salary Grade:   B

----------------------EARNINGS-----------------|---------------DEDUCTIONS---------------------
Basic Salary: 55,000.00                        |    SSS:                    500.00
                                               |    Pag-ibig:               200.00
No. of OT Hrs: 88 Hrs                          |    Philhealth:             100.00
Overtime Pay:  XXXX.XX                         |    Withholding Tax:       XXXX.XX
_______________________________________________|______________________________________________
Gross Pay                             XXXX.XX  |    Total Deductions:      XXXX.XX
______________________________________________________________________________________________
N E T   I N C O M E :                                                      XXXX.XX
*/

#endif