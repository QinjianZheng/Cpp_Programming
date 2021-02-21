/* 1

试一试
*/ 

// #include <iostream>
#include "std_lib_facilities.h"

int main(int argc, char const *argv[])
{
    double d = 0;
    while(cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
             << " i==" << i
             << " i2==" << i2
             << " char(" << c << ")\n";
    }
    return 0;
}



