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

string recursia1(int num, int num1) {
    if (num1 == 0) {
        return "";
    }

    cout << num << "\n";
    num++;
    return recursia1(num, num1 - 1);
}

int main()
{
    int a = 5; int b = 10; int c = 15;
    //cout << MIN(a,b) << "\n";
    //cout << SUM(a,b,c) << "\n";
    //recursia(4);
    
    int num = 5;
    cout << "5) вывод на экран всех целых чисел от 1 до " << num << "\n";
    recursia1(1, num);

    return 0;
}