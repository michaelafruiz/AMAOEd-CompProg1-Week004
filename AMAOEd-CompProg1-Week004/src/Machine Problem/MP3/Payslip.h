#ifndef _Payslip
#define _Payslip

#include <string>

using namespace std;

class Payslip{
    private:
        string mEmployeeName, mPayGrade;
        double mBasicSalary, mNetPay, mWTax, mTaxRate, mGrossPay;
        double mOTHrs, mOTPay;

        void determinePayGradeAndTaxRate();
        void computePay();
    public:
        const double SSS = 500, PAGIBIG = 200, PHILHEALTH = 100,
                        FIXEDVALUES = SSS + PAGIBIG + PHILHEALTH;

        string getEmployeeName(){return mEmployeeName;}
        string getPayGrade(){return mPayGrade;}
        double getBasicSalary(){return mBasicSalary;}
        double getOTHrs(){return mOTHrs;}
        double getOTPay(){return mOTPay;}
        double getGrossPay(){return mGrossPay;}
        double getWithholdingTax(){return mWTax;}
        double getNetPay(){return mNetPay;}

        void setEmployeeName(string);
        void setBasicSalary(double);
        void setOTHrs(double);


};

//SET
void Payslip::setEmployeeName(string name){
    mEmployeeName = name;
}
void Payslip::setBasicSalary(double m){
    mBasicSalary = m;
    determinePayGradeAndTaxRate();
}
void Payslip::setOTHrs(double h){
    mOTHrs = h;
    computePay();
}

//METHODS
void Payslip::determinePayGradeAndTaxRate(){
    if(mBasicSalary >= 10000 && mBasicSalary < 15000){
        mPayGrade = "A";
        mTaxRate = 0.1;
    } else if(mBasicSalary >= 15000 && mBasicSalary < 20000){
        mPayGrade = "B";
        mTaxRate = 0.1;
    } else if(mBasicSalary >= 20000 && mBasicSalary < 25000){
        mPayGrade = "A";
        mTaxRate = 0.15;
    } else if(mBasicSalary >= 25000 && mBasicSalary < 30000){
        mPayGrade = "B";
        mTaxRate = 0.15;
    } else if(mBasicSalary >= 30000 && mBasicSalary < 35000){
        mPayGrade = "A";
        mTaxRate = 0.2;
    } else if(mBasicSalary >= 35000 && mBasicSalary < 40000){
        mPayGrade = "B";
        mTaxRate = 0.2;
    } else if(mBasicSalary >= 40000 && mBasicSalary < 45000){
        mPayGrade = "A";
        mTaxRate = 0.25;
    } else if(mBasicSalary >= 45000 && mBasicSalary < 50000){
        mPayGrade = "B";
        mTaxRate = 0.25;
    } else if(mBasicSalary >= 50000 && mBasicSalary < 55000){
        mPayGrade = "A";
        mTaxRate = 0.3;
    } else {
        mPayGrade = "B";
        mTaxRate = 0.3;
    }
}

void Payslip::computePay(){
    mOTPay = mOTHrs * (mBasicSalary * 0.01);
    mGrossPay = mBasicSalary + mOTPay;
    mWTax = mGrossPay * mTaxRate;
    mNetPay = mGrossPay - mWTax - FIXEDVALUES;
}

#endif