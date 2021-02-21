/* 8

奇数还是偶数？
*/ 

#include "../std_lib_facilities.h"



int main(int argc, char const *argv[])
{
    int val;
    // cout << "Please enter an integer" << endl; 
    // cin >> val;
    val = 4;
    cout << "The value " << val << " is an " << (val % 2 == 0 ? "even" : "odd") << " number" << endl;
    return 0;
}
