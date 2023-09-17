#include <iostream>

using namespace std;
//1
#define MIN(num1,num2) ((num1 > num2)? num2 : num1)
//2
#define SUM(num1,num2,num3) (num1 + num2 + num3)

string recursia(int lenght)
{
    if (lenght == 0) return 0;

    cout << "*\n";
    return recursia(lenght-1);
}


int main()
{
    int a = 5; int b = 10; int c = 15;
    //cout << MIN(a,b) << "\n";
    //cout << SUM(a,b,c) << "\n";
    recursia(4);
    return 0;
}