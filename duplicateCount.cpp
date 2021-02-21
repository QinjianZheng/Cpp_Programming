#include "std_lib_facilities.h"

int main()
{
    // int numOfRepeatWords = 0;
    string previous = "";
    string current;
    while(cin >> current) {
        // ++ numOfRepeatWords;
        if(previous == current) {
            cout << "repeated word: " << current << '\n';
        }
        previous = current;
    }
    return 0;
}
