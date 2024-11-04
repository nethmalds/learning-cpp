#include "records.h"

using namespace std;

Student::Student(int s_id, string s_name){
    stu_id = s_id;
    stu_name = s_name;
}
int Student::get_id() const{
    return stu_id;
}
string Student::get_name() const{
    return stu_name;
}

Course::Course(int c_id, string c_name, unsigned char c_credits){
    co_id = c_id;
    co_name = c_name;
    credits = c_credits;
}
int Course::get_Cid() const{
    return co_id;
}
string Course::get_Cname() const{
    return co_name;
}
int Course::get_credits() const{
    return credits;
}

Grade::Grade(int s_id, int c_id, char the_grade){
    stu_id = s_id;
    co_id = c_id;
    grade = the_grade;
}
int Grade::get_sid() const{
    return stu_id;
}
int Grade::get_cid() const{
    return co_id;
}
char Grade::get_grade() const{
    return grade;
}

void StudentRecords::add_students(int sid, string sname){
    students.push_back(Student(sid,sname));
}
void StudentRecords::add_courses(int cid, string cname, unsigned char credits){
    courses.push_back(Course(cid,cname,credits));
}
void StudentRecords::add_grades(int sid, int cid, char grade){
    grades.push_back(Grade(sid,cid,grade));
}

float StudentRecords:: get_num_grade(char letter) const{
    float num_grd;
    switch (letter)
    {
    case 'A': num_grd = 4.0f;
        break;
    case 'B': num_grd = 3.0f;
        break;
    case 'C': num_grd = 2.0f;
        break;
    case 'D': num_grd = 1.0f;
        break;
    default: num_grd = 0.0f;
        break;
    }
    return num_grd;
}

string StudentRecords::get_stu_name(int sid) const{
    int i = 0;
    while(i < students.size() && students[i].get_id() != sid)
        i++;
    return students[i].get_name();
}

unsigned char StudentRecords::get_C_credits(int cid) const{
    int j = 0;
    while(j < courses.size() && courses[j].get_Cid() != cid)
        j++;
    return courses[j].get_credits();
}

float StudentRecords::get_GPA(int sid) const{
    float tot_credits = 0.0f, tot_points = 0.0f;
    for(const Grade& grd : grades){
        if(grd.get_sid() == sid){
            tot_points += get_num_grade(grd.get_grade()) * get_C_credits(grd.get_cid());
            tot_credits += get_C_credits(grd.get_cid()); 
        }
    }
    return (tot_points/tot_credits);
}