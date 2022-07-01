// There are two types of header files:
// 1. System header files: It is written by the programmer
#include<iostream>
// 2.User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=5, b=5;
    // arithmetic operators
    cout<<"the value of a + b is"<<a+b;
    cout<<"the value of a + b is"<<a-b;
    cout<<"the value of a * b is"<<a*b;
    cout<<"the value of a/b is"<<a/b;
    return 0;
}
