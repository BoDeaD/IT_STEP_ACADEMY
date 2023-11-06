#include <iostream>
#include "function.h"

#define INTENGER

using namespace std;

int main()
{
    int length = 5;
    int array[5] = {};
    // func a
    r_fill(array, length);
    // func b
    print_massive(array, length);
    // func c
    cout << "Min value - " << min_value(array, length) << "\n";
    // func d
    cout << "Max value - " << max_value(array, length) << "\n";
    // func e
    massive_sort(array, length);
    //print_massive(array, length);
    // func f
    change_m_value(array, 1, 7);
    //print_massive(array, length);
    // func g
    check_const();

    return 0;
}