/**
Reverse a string and print it
github: dipanshu-m
**/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    printf("Enter a string: ");
    string s;

    cin>>s; //inputs a string

    string s1="";

    long long t=0;
    while(t!=s.length()) {
        s1+=s.at(s.length()-t-1); //extracts the last character of the code and then concatenates it as the first character of the new string.
        t++;
    }

    //cout<<s1;
    printf("The reversed String is: %s", s1.c_str()); //same as: cout<<s1; .c_str() converts a c++ type string to C type string ie, converts to a *s1...
    //Note: you should use always cout because its simpler to write.
    return 0;
}
