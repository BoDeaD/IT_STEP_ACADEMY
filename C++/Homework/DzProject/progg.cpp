#include <iostream>
#include "function.h"

using namespace std;

#define print_massive print_massive_int
#define r_fill r_fill_int
#define min_value min_value_int
#define max_value max_value_int
#define massive_sort massive_sort_int
#define change_m_value change_m_value_int
#define check_const check_const_int

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