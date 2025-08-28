//
// Created by REHAN PANJWANI on 21-12-2022.
//

//#ifndef MYSTRINGCLASS_MYSTRING_H
//#define MYSTRINGCLASS_MYSTRING_H
#pragma once
#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    explicit Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source) noexcept;                         // Move constructor
    ~Mystring();                                                     // Destructor

    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring&& rhs);           // Move assignment

    Mystring operator-()const;                                                  // unary        // - make lower_case
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);           // equals
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs) ;          // not equal

    friend bool operator>(const Mystring &lhs, const Mystring &rhs);            // > lexical cmp
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);            // < lexical cmp

    friend Mystring operator+(const Mystring &lhs, const char* rhs);       // concat
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, Mystring &rhs);                 // all
    friend Mystring &operator+=(Mystring &lhs, Mystring &&rhs);                // 3

    friend Mystring operator*(Mystring &lhs, size_t times);
    friend Mystring &operator*=(Mystring &lhs, size_t times);

    void display() const;

    size_t get_length() const;                                      // getters
    [[nodiscard]] const char *get_str() const;
};

//#endif //MYSTRINGCLASS_MYSTRING_H