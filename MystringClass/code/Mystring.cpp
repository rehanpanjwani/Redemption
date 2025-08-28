#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

Mystring::Mystring()
:str{nullptr} {
    str = new char[1];
    str = '\0';
}

Mystring::Mystring(const char *s)
:str {nullptr} {
    if(str == nullptr){
        str = new char [1];
        str = '\0';
    }
    else{
        str = new char [strlen(s)+1];
        strcpy(str , s);
    }
}

Mystring::~Mystring(){
    delete [] str;
}