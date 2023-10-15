//
//  Payment.hpp
//  Payment
//
//  Created by Michalis on 15.10.2023.
//

#pragma once
#include <iostream>
#include <string>
using namespace std;
class Payment
{
    string firstName;
    string lastName;
    string sureName;
    float salary;
    int start_year;
    int add_percent;
    int tax;
    int nDoneMonthDays;
    int nMonthWorkDays;
    int takeSum;//вычислить
    int stopSum;//вычислить
public:
    Payment();
    Payment(string fn, string ln, string sn, float sal, int sy, int adp, int NmD, int doneD);
    ~Payment();
    void Init(string fn, string ln, string sn, float sal, int sy, int adp, int NmD, int doneD);
    void Input();
    void Print();
    float findAccureSum();
    void findStopSum();
    void findTakeSum();
    int findExp();
    
    void SetFN(string n);
    void SetLN(string n);
    void SetSN(string n);
    void SetSal(float sal);
    void SetSY(int sy);
    void SetAddP(int adp);
    void SetTax(int tax);
    void SetDMD(int n);
    void SetnMonthWorkDays(int n);
    void SettakeSum(float n);//вычислить
    void SetstopSum(float n);//вычислить
    
    string GetFN();
    string GetLN();
    string  GetSN();
    float GetSal();
    int GetSY();
    int GetAddP();
    int GetDMD();
    int GetnMonthWorkDays();
    float GetTakeSum();//вычислить
    float GetStopSum();//вычислить
    
    
    
};

