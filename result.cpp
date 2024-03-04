#include<iostream>
#include<string>
using namespace std;
# include "result.h"



void Result::setStudentResult(int studentIndex) {
    cout << "Enter ID for Student " << studentIndex + 1 << ": ";
    cin >> studentResults[studentIndex].studentID;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for Subject " << i + 1 << " for Student " << studentIndex + 1 << ":" << endl;
        cout << "Subject Name: ";
        cin >> studentResults[studentIndex].subjects[i].subjectName;
        cout << "Enter marks obtained: ";
        cin >> studentResults[studentIndex].subjects[i].givenMarks;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
void Result::displayResultInfo() {
    cout << "Result Information :" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "Student ID: " << studentResults[i].studentID << endl;
        cout << "Subjects and Marks for Student " << i + 1 << ":" << endl;
        float totalObtainedMarks = 0;
        float totalPossibleMarks = 0;
        for (int j = 0; j < 3; ++j) {
            cout << "Subject: " << studentResults[i].subjects[j].subjectName << ", Marks: "
                 << studentResults[i].subjects[j].givenMarks << "/" << studentResults[i].subjects[j].totalMarks << endl;
            totalObtainedMarks += studentResults[i].subjects[j].givenMarks;
            totalPossibleMarks += studentResults[i].subjects[j].totalMarks;
        }
        double percentage = (totalObtainedMarks / totalPossibleMarks) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40) {
            cout << "Result: Pass (P)" << endl;
        } else {
            cout << "Result: Fail (F)" << endl;
        }
        cout << endl;
    }
}
