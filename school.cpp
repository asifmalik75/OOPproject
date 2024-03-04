#include<iostream>
#include<string>
using namespace std;
# include "school.h"

School::School() {
    School_Name="The Heaven Kids Scholl";
    address="College Road Township";
}
void School::getSchoolInfo() {
    cout << "School Information :" << endl;
    cout << "Name:" << School_Name << endl;
    cout << "Address:" <<address<<endl;
    cout<<endl;
}
