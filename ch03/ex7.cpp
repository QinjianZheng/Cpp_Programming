/* 7

三个字符串排序

*/ 

#include "../std_lib_facilities.h"
void sort(string * , string *, string *);

int main(int argc, char const *argv[])
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    sort(&s1, &s2, &s3);
    cout << s1 << ", " << s2  << ", "<< s3 << '\n';
    return 0;
}

void swap(string *s1, string *s2) {
    string temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void sort(string *s1, string *s2, string *s3) {
    if(*s1 > *s2) {
        swap(s1, s2);
    }
    if(*s1 > *s3) {
        swap(s1, s3);
    }
    if(*s2 > *s3) {
        swap(s2, s3);
    }
}