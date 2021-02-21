/* 11

统计零钱
*/ 

#include "std_lib_facilities.h"


int main(int argc, char const *argv[])
{
    int numOfPennies = 0;
    int numOfNickles = 0;
    int numOfDimes = 0;
    int numOfQuarters = 0;
    int numOfHalfDol = 0;
    int numOfDollars = 0;
    cout << "How many pennies do you have? ";
    cin >> numOfPennies;
    cout << "How many nickles do you have? ";
    cin >> numOfNickles;
    cout << "How many dimes do you have? " ;
    cin >> numOfDimes;
    cout << "How many quarters do you have? ";
    cin >> numOfQuarters;
    cout << "How many half dollars do you have? " ;
    cin >> numOfHalfDol;
    cout << "How many dollars do you have? " ;
    cout << endl;
    cin >> numOfDollars;
    cout << "You have " << setw(2) << right << numOfPennies << " "
            << (numOfPennies == 1 ? "penny" : "pennies") << endl;
    cout << "You have " << setw(2) << right << numOfNickles << " "
            << (numOfNickles == 1 ? "nickle" : "nickles") << endl;
    cout << "You have " << setw(2) << right << numOfDimes << " "
            << (numOfDimes == 1 ? "dime" : "dimes") << endl;
    cout << "You have " << setw(2) << right << numOfQuarters << " "
            << (numOfQuarters == 1 ? "quarter" : "quarters") << endl;
    cout << "You have " << setw(2) << right << (numOfHalfDol + numOfDollars * 2) << " "
            << (numOfHalfDol == 1 && numOfDollars == 0 ? "half dollar" : "half dollars")
            << endl;
    return 0;
}
