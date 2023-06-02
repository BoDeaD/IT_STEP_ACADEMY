#include <iostream>
#include <list>
#include <string>

using namespace std;

/*1. Ввести число, и определить - чётное оно, или нет (либо иф-элс, либо тернарка, % 2 == 0)*/
void func1()
{
    int num;
    cout << "-\nEnter number - ";
    cin >> num;

    string result = (num % 2 == 0) ? "чётное":"нечётное";
    cout << result << "\n";
}

/*2. Ввести три числа и найти наименьшее среди них.*/
void func2()
{
    list<int> num; // инициализирую список 
    for (int i = 0; i < 3; i++){ // в цикле записываю в список 3 числа 
        int number;
        cout << "Enter number - " << "\n";
        cin >> number;
        num.push_back(number);
    }
    num.sort(); // сортирую( по умолчаниею от меньшего к большему )
    cout << "наименьшее среди них - "<< num.front() << '\n'; 
}
/*
3. Ввести число, и выяснить
- положительное оно, отрицательное, или равно нулю?
*/
void func3()
{
    int number;
    cout << "Enter number - " << '\n';
    cin >> number;

    if (number == 0){
        cout << "равно нулю" << "\n";
    }
    else if (number < 0){
         cout << "отрицательное" << "\n";
    }
    else if (number > 0){
         cout << "положительное" << "\n";
    }
    else {
        cout << "На это я отвечать не собираюсь" << "\n";
    }
    
}
/*
Реализовать калькулятор. Вводятся 2 любых вещественных числа в переменные а и b. 
Необходимо вывести на экран меню с пунктами: (рекомендуется использовать лесенку)


При выборе соответствующего пункта меню происходит вывод результата вычисления 
(должна быть проверка деления на 0!)
*/
void func4()
{
    int a, b;
    string op;

    cout << "a + b\n";
    cout << "a - b\n";
    cout << "a / b\n";
    cout << "a % b\n";

    cout << "-\nEnter a - ";
    cin >> a;
    cout << "Enter operator - ";
    cin >> op;
    cout << "Enter b - ";
    cin >> a;
    
    if (op == "+"){
        cout << "Your number - " << a + b << "\n";
    }
    else if (op == "-"){
        cout << "Your number - " << a - b << "\n";
    }
    else if (op == "/"){
        cout << "Your number - " << a / b << "\n";
    }
    else if (op == "%"){
        cout << "Your number - " << (int) a %  (int) b << "\n";
    }
}
/*
5. Ввести с клавиатуры символ. 
Определить, чем он является: цифрой, буквой или знаком пунктуации. (можно использовать isdigit ispunct)
*/
void func5()
{
    char symbol;
    cout << "Ввести с клавиатуры символ - ";
    cin >> symbol;

    if (isdigit(symbol)){
        cout << "this is digit\n";
    }
    else if (ispunct(symbol)){
        cout << "this is punctuation\n";
    }
    else {
        cout << "this is letter\n";
    }

}
/*
6. Ввести с клавиатуры число и проверить, принадлежит ли это число диапазону от N до М (включительно)
*/
void func6(int N, int M) 
{
    int number;
    cout << "Enter number - ";
    cin >> number;

    if (N <= number && number <= M) {
        cout << "это число принадлежит диапазону\n";
    }
    else {
        cout << "это число не принадлежит диапазону\n";
    }
}

/*
7. Написать программу для проверки кратности числа Х числу Y (оба числа вводятся с клавиатуры).
*/
void func7()
{
    int num1, num2;
    cout << "Enter X - ";
    cin >> num1;
    cout << "Enter Y - ";
    cin >> num2;

    if (num1 % num2 == 0){
        cout << "кратно\n";
    }
    else {
        cout << "не кратно\n";
    }
}
int main()
{
    //func1();
    //func2();
    //func3();
    //func4();
    //func5();
    //func6(1,10);
    //func7();
}