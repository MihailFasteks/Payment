//
//  main.cpp
//  Payment
//
//  Created by Michalis on 15.10.2023.
//
#include "Payment.hpp"
#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    Payment Worker1;
    Worker1.Input();
    Worker1.Print();
    
    cout<<"Your expierence: "<<endl;
    cout<<Worker1.findExp();
    cout<<endl;
    Worker1.findAccureSum();
    Worker1.findStopSum();
    Worker1.findTakeSum();
    
    return 0;
}
