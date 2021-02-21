/* 4

两个整数，
求 最小值、最大值、和、差、积、比率
*/ 

#include "std_lib_facilities.h"


int main(int argc, char const *argv[])
{
    int val1, val2;
    cin >> val1 >> val2;
    cout << "min = " << ((val1 > val2) ? val2 : val1) << '\n';
    cout << "max = " << ((val1 > val2) ? val1 : val2) << '\n';
    cout << "sum = " << (val1 + val2) << '\n';
    cout << "dif = " << (val1 - val2) << '\n';
    cout << "product = " << (val1 * val2) << '\n';
    cout << "ratio = " << (1.0 * val1 / val2)  << '\n';
    return 0;
}

