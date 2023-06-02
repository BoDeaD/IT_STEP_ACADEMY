#include <iostream>

using namespace std;

/*
ПРАКТИКА1: загадать случайное число от 15 до 75.
*/

void func1()
{
    char min = 15;
    char max = 75;
    int K = max - min + 1;
    int one = rand() % K + min;

    cout << "случайное число от 15 до 75 - " << one << '\n';
}

/*
ПРАКТИКА2: загадать случайное время суток.
при запуске приложения на экране появляется либо "доброе утро",
 либо "добрый день", либо "доброго вечора", либо "спокойной ночи".
*/
void func2()
{
    char min = 1;
    char max = 4;
    int K = max - min + 1;
    int one = rand() % K + min;

    switch (one)
    {
    case 1:
        cout << "доброе утро" << "\n";
        break;
    case 2:
        cout << "добрый день" << "\n";
        break;
    case 3:
        cout << "доброго вечора" << "\n";
        break;
    case 4:
        cout << "спокойной ночи" << "\n";
        break;
    default:
        break;
    }
}
int main()
{
    //func1();
    func2();
}