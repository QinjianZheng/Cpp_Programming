/* 2

将英里转换成公里

*/ 
#include "std_lib_facilities.h"
#define MILE_TO_KM 1.69


int main(int argc, char const *argv[])
{
    double d;
    cout << "Please enter a number for mile.\n";
    cin >> d;
    cout << d << " mile = " << d / MILE_TO_KM << " km\n";
    return 0;
}

