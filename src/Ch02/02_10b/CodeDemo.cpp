// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){

    float num = 10.99f;

    cout<< "Number: " << num << endl;
    cout<< "Decimal: " << (int)num << endl;
    cout << "floating point: " << (float)(num - (int)num)*10<< endl;
    
    cout << endl << endl;
    return (0);
}
