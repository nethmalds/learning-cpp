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