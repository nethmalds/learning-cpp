// Learning C++ 
// Exercise 05_01
// Creating Functions, by Eduardo Corpeño 

#include <iostream>
#include "records.h"
#include <vector>

using namespace std;

void Initializer(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;

    Initializer(SR);

    cout<<"Enter the Student Id: "<< flush;
    cin >> id;
    cout<<SR.get_stu_name(id)<<" : "<<SR.get_GPA(id)<<endl;
    return(0);
}

void Initializer(StudentRecords& srec){
    srec.add_students(1,"Nimal");
    srec.add_students(2,"Anil");
    srec.add_courses(1,"Mathematics",50);
    srec.add_courses(2,"Science",30);
    srec.add_courses(3,"English",20);
    srec.add_courses(4,"Sinhala",20);
    srec.add_grades(1,1,'A');
    srec.add_grades(1,2,'B');
    srec.add_grades(1,3,'C');
    srec.add_grades(2,1,'B');
    srec.add_grades(2,2,'A');
    srec.add_grades(2,4,'D');
}