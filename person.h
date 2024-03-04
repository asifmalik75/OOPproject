#ifndef PERSON_H
#define PERSON_H

class Person
{
	protected:
        string name;
        int ID;
    public:
    	void setPersonInfo();
    	void displayPersonInfo();
};
class Student: public Person{
	public:
		void setStudentInfo();
		void displayStudentInfo();
};
class Teacher: public Person{
	public:
		void setTeacherInfo();
		void displayTeacherInfo();
};
class SchoolClass {
	private:
	    Student students[2];
        Teacher teacher;
    public:
    	void setClassInfo();
    	void showClassInfo();
};
#endif
