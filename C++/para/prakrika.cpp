#include <iostream>

using namespace std;

/*
ПРАКТИКА1: показать на экране консоли меню, состоящее из 5 пунктов:
1 - кошка
2 - собака
3 - коровка
4 - ёжик
5 - бобёр

пользователь вводит число от 1 до 5.
программа СВИЧОМ проверяет значение, и показывает, какие звуки издаёт это животное
*/

int main()
{
    int choise;
    cout << "1 - кошка\n2 - собака\n3 - коровка\n4 - ёжик\n5 - бобёр\n-\nEnter number - ";
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << "мяу\n";
        break;
    case 2:
        cout << "гав\n";
        break;
    case 3:
        cout << "му\n";
        break;
    case 4:
        cout << "пых\n";
        break;
    case 5:
        cout << "хрум\n";
        break;
    
    default:
        break;
    }
}