#pragma once

#include<string>
#include<vector>

using namespace std;

class Student{
    private:
        int stu_id;
        string stu_name;

    public:
        Student (int s_id, string s_name);
        int get_id() const;
        string get_name() const;
};

class Course{
    private:
        int co_id;
        string co_name;
        unsigned char credits;

    public:
    Course(int c_id, string c_name, unsigned char c_credits);
    int get_Cid() const;
    string get_Cname() const;
    int get_credits() const;
};

class Grade{
    private:
        int stu_id;
        int co_id;
        char grade;

    public:
        Grade(int s_id, int c_id, char the_grade);
        int get_sid() const;
        int get_cid() const;
        char get_grade() const;
};

class StudentRecords{
    private: 
        vector<Student> students;
        vector<Course> courses;
        vector<Grade> grades;

        float get_num_grade(char) const;
    
    public:
        void add_students(int, string);
        void add_courses(int, string, unsigned char);
        void add_grades(int, int, char);

        string get_stu_name(int) const;
        unsigned char get_C_credits(int) const;
        float get_GPA(int) const;
};