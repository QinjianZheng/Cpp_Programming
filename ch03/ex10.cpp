/* 10

+ - * /
后缀运算

*/ 

#include "../std_lib_facilities.h"

int main(int argc, char const *argv[])
{
    string op;
    double n1, n2;
    cout << "Please enter an operator followed by 2 numbers" << endl;
    cin >> op >> n1 >> n2;
    if(op == "+") {
        cout << n1 << op << n2 << "=" << (n1 + n2) << endl;
    } else if(op == "-") {
        cout << n1 << op << n2 << "=" << (n1 - n2) << endl;
    } else if(op == "*") {
        cout << n1 << op << n2 << "=" << (n1 * n2) << endl;
    } else if(op == "/") {
        cout << n1 << op << n2 << "=" << (n1 / n2) << endl;
    } else {
        cout << "Not an operator" << endl;
    }
    return 0;
}
