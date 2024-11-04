// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&, std::ifstream&);

int main(){
    StudentRecords SR;
    std::ofstream outFile;
    std::ifstream inFile;
    
    initialize(SR, inFile);
    SR.report_file(outFile);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec, std::ifstream& inFile){
    std:: string name,str;
    int sid, cid;
    unsigned char credits;
    char grade;
    int count = 0;

    inFile.open("students.txt");
    if (inFile.fail()){
        std::cout << "This File Not Found!"<< std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile,str);
            sid = stoi(str);
            getline(inFile,name);
            srec.add_student(sid,name);
            count++;
        }
        inFile.close();
        std::cout << "Found "<< count << " of students" << std::endl;
    }

    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail()){
        std::cout << "This File Not Found!"<< std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile,str);
            cid = stoi(str);
            getline(inFile,name);
            getline(inFile,str);
            credits = stoi(str);
            srec.add_course(cid,name,credits);
            count++;
        }
        inFile.close();
        std::cout<< "Found " << count << " of courses" << std:: endl;
    }

    count = 0;
    inFile.open("grades.txt");
    if(inFile.fail()){
        std::cout << "This file is not found!" << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile,str);
            sid = stoi(str);
            getline(inFile,str);
            cid = stoi(str);
            getline(inFile, str);
            grade = str[0];
            srec.add_grade(sid,cid,grade);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " of grades" << std::endl; 
    }
}
