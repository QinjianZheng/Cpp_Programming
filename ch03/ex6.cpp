/* 6

3个数排序

*/ 

#include "std_lib_facilities.h"

void sort(int *, int *, int *);

int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    sort(&n1, &n2, &n3);
    cout << n1 << ", " << n2  << ", "<< n3 << '\n';
    return 0;
}

static void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


void sort(int *p1, int *p2, int *p3) {
    if(*p1 > *p2) {
        swap(p1, p2);
    }
    if(*p2 > *p3) {
        swap(p2, p3);
    }
    if(*p1 > *p2) {
        swap(p1, p2);
    }
}