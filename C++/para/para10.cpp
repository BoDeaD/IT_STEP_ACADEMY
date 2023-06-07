#include <iostream>

using namespace std;
/*
Задание 1. Вывести на экран все числа от нуля до вве-денного пользователем числа.
*/
void func1()
{
    int number;
    cout << "-\nEnter number - ";
    cin >> number;

    for (int i = 0; i < number; i++){
        cout << i << "\n";
    }
}
int main()
{
    func1();
}