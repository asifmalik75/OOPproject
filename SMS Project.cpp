#include <iostream>
#include <string>
using namespace std;

class Person {   // Base class Person
protected:
    string name;
    int ID;
public:
    void setPersonInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> ID;
    }
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
    }
};

class Student : public Person {   // Student class inheriting from Person
public:
    void setStudentInfo() {
        cout << "Student Info:" << endl;
        setPersonInfo();
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
    void displayStudentInfo() {
        displayPersonInfo();
    }
};

class Teacher : public Person {
public:
    void setTeacherInfo() {
        cout << "Teacher Info:" << endl;
        setPersonInfo();
    }
    void displayTeacherInfo() {
        cout << "Class Incharge:" << endl;
        displayPersonInfo();
    }
};
class Fee {
private:
    float classFees[3]; // Assuming fees for three classes
public:
    Fee() {
        // Set default fees for each class
        classFees[0] = 500; // Class 1 fee
        classFees[1] = 600; // Class 2 fee
        classFees[2] = 700; // Class 3 fee
    }
    void displayClassFees() {
        cout << "Class Fees Information:" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Class " << i + 1 << " Fee: $" << classFees[i] << endl;
        }
	   
    }
};
class Attendance {
private:
    int total_students;
    int present_students;
    int absent_students;
public:
	Attendance() : total_students(2), present_students(2){	}
    void setattendanceInfo() {
        absent_students = total_students - present_students;
    }
    void displayattendanceInfo() {
        cout << "Attendance Information:" << endl;
        cout << "Total students:" << total_students << endl;
        cout << "Present students :" << present_students << endl;
        cout << "Absent students :" << absent_students << endl;
    }
};

class Result {
private:
    struct SubjectResult {
        string subjectName;
        float totalMarks = 100; // For example, total marks for each subject
        float givenMarks;
    };
    struct StudentResult {
        int studentID;
        SubjectResult subjects[3]; // Array to store results for 3 subjects
    };
    StudentResult studentResults[2]; // Results for 2 students in a class
public:
    void setStudentResult(int studentIndex) {
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
   void displayResultInfo() {
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
};

class SchoolClass {
private:
    Student students[2];
    Teacher teacher;
public:
    void setClassInfo() {
        teacher.setTeacherInfo();
        for (int i = 0; i < 2; ++i) {
            cout << "Enter details for student " << i + 1 << ":" << endl;
            students[i].setStudentInfo();
        }
    }
    void showClassInfo() {
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
};

class School {
private:
    string School_Name;
    string address;
public:
	School() : School_Name("School of Education"), address("College road, Township, Lahore") {}
    void getSchoolInfo() {
        cout << "School Information :" << endl;
        cout << "Name:" << School_Name << endl;
        cout << "Address:" <<address<<endl;
        cout<<endl;
    }
};

int main() {
    School myschool;
    SchoolClass myclass;
    Result result;
    Attendance attendance;
    Fee fee;
    
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
                    result.setStudentResult(i); // Setting result for each student
                    }
                    myschool.getSchoolInfo();
                    result.displayResultInfo();
                break;
                case 2:
        			for (int i = 0; i < 2; ++i) {
                    result.setStudentResult(i); // Setting result for each student
                    }
                    myschool.getSchoolInfo();
                    result.displayResultInfo();
                break;
                case 3:
        			for (int i = 0; i < 2; ++i) {
                    result.setStudentResult(i); // Setting result for each student
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
