/* 5

用浮点数做第四题

*/ 

#include "std_lib_facilities.h"
int main(int argc, char const *argv[])
{
    double val1, val2;
    cin >> val1 >> val2;
    cout << "min = " << ((val1 > val2) ? val2 : val1) << '\n';
    cout << "max = " << ((val1 > val2) ? val1 : val2) << '\n';
    cout << "sum = " << (val1 + val2) << '\n';
    cout << "dif = " << (val1 - val2) << '\n';
    cout << "product = " << (val1 * val2) << '\n';
    cout << "ratio = " << (val1 / val2)  << '\n';
    // 整数ratio只有整数，浮点数会有浮点数
    return 0;
}

