/* 9

将英文单词转为数字
0 1 2 3 4

*/ 

#include "std_lib_facilities.h"

int main(int argc, char const *argv[])
{
    string numStr;
    int num;
    cout << "Please enter a word for number" << endl;
    while(cin >> numStr) {
    
        if(numStr == "zero") {
            num = 0;
        } else if(numStr == "one") {
            num = 1;
        } else if(numStr == "two") {
            num = 2;
        } else if(numStr == "three") {
            num = 3;
        } else if(numStr == "four") {
            num = 4;
        } else {
            num = -1;
        }
        if(num > 0) {
            cout << num << endl;
        } else {
            cout << "not a number I know" << endl;
        }
        cout << "Please enter a word for number" << endl;
    }
    return 0;
}
