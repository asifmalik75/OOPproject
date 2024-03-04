#include<iostream>
#include<string>
using namespace std;
# include "attendance.h"

void Attendance::setattendanceInfo(){
	cout << "enter total students :";
    cin >> total_students;
    cout << "enter present students :";
    cin >> present_students;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    absent_students = total_students - present_students;
}
void Attendance::displayattendanceInfo(){
	cout << "Attendance Information:" << endl;
    cout << "Total students:" << total_students << endl;
    cout << "Present students :" << present_students << endl;
    cout << "Absent students :" << absent_students << endl;
}
