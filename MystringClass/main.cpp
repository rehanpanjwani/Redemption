#include <bits/stdc++.h>
#include "Mystring.h"

using namespace std;

int main(){
    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    Mystring george {"george"};
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false

    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
    cout << (a<b) << endl;          // true
    cout << (a>b) << endl;           // false

    Mystring s1 {"FRANK"};
    s1 = -s1;
    cout << s1 << endl;               // frank

    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****

//    s1 += (Mystring &) "-----";                        // frank*****-----
//    cout << s1 << endl;

    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345

    Mystring s3{"abcdef"};
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabc

    return 0;
}