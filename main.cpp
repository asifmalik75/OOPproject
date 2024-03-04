#include<iostream>
#include<string>
using namespace std;
# include "person.h"
# include "fee.h"
# include "attendance.h"
# include "result.h"
# include "school.h"

int main() {
    School myschool;
    SchoolClass myclass;
    Result result;
    Attendance attendance;
    Fee fee;
    
   // myschool.setSchoolInfo();
    
    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1. Attendance Information" << endl;
    cout << "2. Class Information" << endl;
    cout << "3. Result Information" << endl;
    cout << "4. Fee Information"<<endl;
    cin >> choice;
    switch (choice) {
        case 1:
            attendance.setattendanceInfo();
            myschool.getSchoolInfo();
            attendance.displayattendanceInfo();
            break;
        case 2:
        	int choice;
        	cout<<"entre your choice:"<<endl;
        	cout<<"Entre 1 for class 1"<<endl;
        	cout<<"Entre 2 for class 2"<<endl;
        	cout<<"Entre 3 for class 3"<<endl;
        	cin>>choice;
        	switch (choice){
        		case 1:
        			myclass.setClassInfo();
                    myschool.getSchoolInfo();
                    myclass.showClassInfo();
                break;
                case 2:
        			myclass.setClassInfo();
                    myschool.getSchoolInfo();
                    myclass.showClassInfo();
                break;
                case 3:
        			myclass.setClassInfo();
                    myschool.getSchoolInfo();
                    myclass.showClassInfo();
                break;
                default:
                    cout << "Invalid choice. Please enter a valid option (1-3)." << endl;
			}
            break;
        case 3:
        	int classchoice;
        	cout<<"Entre your choice:"<<endl;
        	cout<<"1 for class 1 result."<<endl;
        	cout<<"2 for class 2 result."<<endl;
        	cout<<"3 for class 3 result."<<endl;
        	cin>>classchoice;
        	switch (classchoice){
        		case 1:
        			for (int i = 0; i < 2; ++i) {
                    result.setStudentResult(i); 
                    }
                    myschool.getSchoolInfo();
                    result.displayResultInfo();
                break;
                case 2:
        			for (int i = 0; i < 2; ++i) {
                    result.setStudentResult(i); 
                    }
                    myschool.getSchoolInfo();
                    result.displayResultInfo();
                break;
                case 3:
        			for (int i = 0; i < 2; ++i) {
                    result.setStudentResult(i); 
                    }
                    myschool.getSchoolInfo();
                    result.displayResultInfo();
                break;
                default:
                    cout << "Invalid choice. Please enter a valid option (1-3)." << endl;
			}
            break;
        case 4: // New case for displaying fees
            myschool.getSchoolInfo();
            fee.displayClassFees();
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
    }
    return 0;
}
