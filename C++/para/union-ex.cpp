#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    union month
    {
        int num;
        const char *name;
    };

    month jan;
    jan.num = 1;
    jan.name = "January";
    
    /*jan.name = "February";*/

    cout << jan.num << endl;

    /*cout << jan.num << endl;
    jan.num = 1;
    cout << jan.num << endl;*/

    



    
    return 0;
}