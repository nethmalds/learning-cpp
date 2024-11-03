// Learning C++ 
// Challenge Solution 04_06
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include "records.h"
#include <vector>

using namespace std;

int main(){

    float GPA = 0.0f;
    int id;
    vector<Student> students = {
        Student(1,"Saman"),
        Student(2,"Nimal")
    };

    vector<Course> courses = {
        Course(1,"Mathematics",20),
        Course(2,"Science",25),
        Course(3,"English",30),
        Course(4,"Sinhala",30)
    };

    vector<Grade> grades = {
        Grade(1,1,'A'),
        Grade(1,2,'A'),
        Grade(1,3,'B'),
        Grade(2,1,'B'),
        Grade(2,2,'C'),
        Grade(2,4,'A')
    };

    cout<<"Enter the Student Id: "<< flush;
    cin >> id;
    float num_grd =0.0f,points = 0.0f,tot_credits = 0.0f;
    for(Grade& grd : grades){
        if(grd.get_sid() == id){
            switch (grd.get_grade())
            {
            case 'A': 
                num_grd = 4.0f;
                break;
            case 'B': 
                num_grd = 3.0f;
                break;
            case 'C': 
                num_grd = 2.0f;
                break;
            case 'S': 
                num_grd = 1.0f;
                break;
            default:
                num_grd = 0.0f;
                break;
            }
            int i = 1;
            while(i < courses.size() && courses[i].get_Cid() != grd.get_cid()){
                points += num_grd * courses[i].get_credits();
                tot_credits += courses[i].get_credits();
                i++;
            }            
        }
    }
    GPA = points/tot_credits;

    for(Student& stu : students)
    if(stu.get_id() == id)
    {
        cout<< stu.get_name()<<" : "<<GPA<<endl;
    }
    return(0);
}
