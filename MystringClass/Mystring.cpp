#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
        : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
        : str {nullptr} {
    if (s==nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
        : str{nullptr} {
    str = new char[strlen(source.str)+ 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source)
 noexcept         :str(source.str) {
    source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment




// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
size_t Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

Mystring Mystring::operator-() const {
    char *buff = new char [std::strlen(str) + 1];
    strcpy(buff , str);
    for (size_t i = 0; i < strlen(buff); ++i) {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    bool result = std::strcmp(lhs.str, rhs.str) == 0;
    return result;
}

// Not equals
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    bool result = std::strcmp(lhs.str, rhs.str) != 0;
    return result;
}

bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return strcmp(lhs.str , rhs.str) > 0;
}

bool operator<(const Mystring &lhs, const Mystring &rhs){
    return strcmp(lhs.str , rhs.str) < 0;
}

Mystring operator+(const Mystring &lhs, const char *rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs) + 1];
    strcpy(buff , lhs.str);
    strcat(buff , rhs);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff , lhs.str);
    strcat(buff , rhs.str);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring &operator+=(Mystring &lhs, Mystring &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

Mystring &operator+=(Mystring &lhs, Mystring &&rhs) {
    lhs = lhs + rhs;
    return lhs;
}

Mystring operator*(Mystring &lhs, size_t times) {

    Mystring temp{};
    for(size_t i = 0; i < times; i++){
        temp = temp + " " + lhs;
    }

    return temp;
}

Mystring &operator*=(Mystring &lhs, size_t times) {
    lhs = lhs * times;
    return lhs;
}

Mystring &Mystring::operator=(Mystring&& rhs) {

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

