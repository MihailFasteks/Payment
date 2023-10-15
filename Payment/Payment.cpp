//
//  Payment.cpp
//  Payment
//
//  Created by Michalis on 15.10.2023.

#include "Payment.hpp"
#include <iostream>
#include <string>
using namespace std;
Payment::Payment()
{
     firstName=" ";
     lastName=" ";
     sureName=" ";
     salary=0;
     start_year=0;
     add_percent=0;
    nDoneMonthDays=0;
     nMonthWorkDays=0;
}
Payment::Payment(string fn, string ln, string sn, float sal, int sy, int adp, int NmD, int doneD)
{
    firstName=fn;
    lastName=ln;
    sureName=sn;
    salary=sal;
    start_year=sy;
    add_percent=adp;
    nDoneMonthDays=doneD;
    nMonthWorkDays=NmD;

}
Payment::~Payment()
{
    
}
void Payment::Init(string fn, string ln, string sn, float sal, int sy, int adp, int NmD, int doneD)
{
    firstName=fn;
    lastName=ln;
    sureName=sn;
    salary=sal;
    start_year=sy;
    add_percent=adp;
    nDoneMonthDays=doneD;
    nMonthWorkDays=NmD;
}
void Payment::Input()
{
    cout << "Введите фамилию: ";
    cin>>firstName;
    cout << "Введите имя: ";
    cin>>lastName;
    cout << "Введите отчество: ";
    cin>>sureName;
    cout << "Введите год поступления: ";
    cin>>start_year;
    cout << "Введите оклад: ";
    cin>>salary;
    cout << "Введите надбавку к окладу: ";
    cin>>add_percent;
    cout << "Введите кол-во отработаных дней в текущем месяце: ";
    cin>>nDoneMonthDays;
    cout << "Введите кол-во раб. дней: ";
    cin>>nMonthWorkDays;

}
void Payment::Print()
{
    cout << "Фамилия: " << lastName << endl;
    cout << "Имя: " << firstName << endl;
    cout << "Отчество: " << sureName << endl;
    cout << "Год поступления: " << start_year << endl;
    cout << "Оклад: " << salary << endl;
    cout << "Надбавка к окладу: " << add_percent << endl;
    cout << "Кол-во отработаных дней в текущем месяце: " << nDoneMonthDays << endl;
    cout << "Кол-во раб. дней: " << nMonthWorkDays << endl;
}
float Payment::findAccureSum()
{
    float accureSum=((salary/nMonthWorkDays)+(((salary/100)*add_percent)/nMonthWorkDays))*nDoneMonthDays;
    return accureSum;
}
void Payment::findStopSum()
{
    stopSum=(findAccureSum()/100)*14;
    cout<<"Your stop sum is: ";
    cout<<stopSum;
    cout<<endl;
}
void Payment::findTakeSum()
{
    takeSum=findAccureSum()-stopSum;
    cout<<"Your take sum is: ";
    cout<<takeSum;
    cout<<endl;
}
int Payment::findExp()
{
    cout<<"Input current year: ";
    int year;
    cin>>year;
    return year-start_year;
}

void Payment::SetFN(string n)
{
    firstName=n;
}
void Payment::SetLN(string n)
{
    lastName=n;
}
void Payment::SetSN(string n)
{
    sureName=n;
}
void Payment::SetSal(float sal)
{
    salary=sal;
}
void Payment::SetSY(int sy)
{
    start_year=sy;
}
void Payment::SetAddP(int adp)
{
    add_percent=adp;
}
void Payment::SetTax(int t)
{
    tax=t;
}
void Payment::SetDMD(int n)
{
    nDoneMonthDays=n;
}
void Payment::SetnMonthWorkDays(int n)
{
    nMonthWorkDays=n;
}
void Payment::SettakeSum(float n)
{
    takeSum=n;
}//вычислить
void Payment::SetstopSum(float n)
{
    stopSum=n;
}//вычислить

string Payment::GetFN()
{
    return firstName;
}
string Payment::GetLN()
{
    return lastName;
}
string  Payment::GetSN()
{
    return sureName;
}
float Payment::GetSal()
{
    return salary;
}
int Payment::GetSY()
{
    return start_year;
}
int Payment::GetAddP()
{
    return add_percent;
}
int Payment::GetDMD()
{
    return nDoneMonthDays;
}
int Payment::GetnMonthWorkDays()
{
    return nMonthWorkDays;
}
float Payment::GetTakeSum()
{
    return takeSum;
}//вычислить
float Payment::GetStopSum()
{
    return stopSum;
}//вычислить
