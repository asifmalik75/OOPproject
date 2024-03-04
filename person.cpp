#include<iostream>
#include<string>
using namespace std;
# include "person.h"

void Person::setPersonInfo(){
	cout << "Enter name: ";
    cin >> name;
    
    cout << "Enter ID: ";
    cin >> ID;
}
void Person::displayPersonInfo(){
	cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
}
void Student::setStudentInfo(){
	cout << "Student Info:" << endl;
    setPersonInfo();
}
void Student::displayStudentInfo(){
	displayPersonInfo();
}
void Teacher::setTeacherInfo(){
	cout << "Teacher Info:" << endl;
    setPersonInfo();
}
void Teacher::displayTeacherInfo(){
	cout << "Class Incharge:" << endl;
    displayPersonInfo();
}
void SchoolClass::setClassInfo(){
	teacher.setTeacherInfo();
        for (int i = 0; i < 2; ++i) {
            cout << "Enter details for student " << i + 1 << ":" << endl;
            students[i].setStudentInfo();
        }
}
void SchoolClass::showClassInfo(){
	cout << "Class Details :" << endl;
        teacher.displayTeacherInfo();
        cout << endl;
        cout << "Student Info:" << endl;
        for (int i = 0; i < 2; ++i) {
            cout << "Student " << i + 1 << endl;
            students[i].displayStudentInfo();
        }
        cout << endl;
}
