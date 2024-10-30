// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    const size_t length = 25;
    char array1[length] = "Hi, I am a C-String!";
    char array[] = "How are you doing?";
    string str1 = "Hello, I am a string!";
    string str2 = "How are you doing?";
    strncat(array1,array, length);
    cout << array1 << endl;
    cout << str1 + " " + str2 << endl;

    cout << endl << endl;
    return (0);
}
