# ifndef RESULT_H
# define RESULT_H

class Result{
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
        StudentResult studentResults[2];
    public:
    	void setStudentResult(int studentIndex);
    	void displayResultInfo();
};
# endif
