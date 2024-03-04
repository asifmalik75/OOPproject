#include<iostream>
#include<string>
using namespace std;
# include "fee.h"

Fee::Fee(){
	classFees[0] = 1500; // Class 1 fee
    classFees[1] = 2000; // Class 2 fee
    classFees[2] = 2500; // Class 3 fee
}
void Fee::displayClassFees(){
	cout << "Class Fees Information:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Class " << i + 1 << " Fee: Rs" << classFees[i] << endl;
    }
}
