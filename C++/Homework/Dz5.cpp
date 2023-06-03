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
/*
8. Ввести число и определить кратно ли оно 3, 5, и 7 одновременно. (логическое И)
*/
void func8()
{
    int num1;
    cout << "Enter number - ";
    cin >> num1;

    if (num1 % 3 == 0 && num1 % 5 == 0 && num1 % 7 == 0){
        cout << "кратно\n";
    }
    else {
        cout << "не кратно\n";
    }
}
/*
9. Показать модуль введённого числа. (abs)
*/
void func9()
{
    int num1;
    cout << "Enter number - ";
    cin >> num1;

    cout << "модуль введённого числа - " << abs(num1) << "\n";
}
/*
10. Вводится целое число (не более 4 разрядов!) . Определить количество цифр в нём.
*/
void func10()
{
    string num;
    cout << "Enter number - ";
    cin >> num;
    int pointer = 0;
    for (int i = 0; i < num.length(); i++){
        if (isdigit(num[i])){
            pointer++;
        }
    }
    cout << "количество цифр в нём - " << pointer << '\n';
}
/*
11. Ввести с клавиатуры пятизначное число и определить, является ли оно палиндромом
 (т.е. одинаково читается в обоих направлениях - например, 12321 будет палиндромом,
12345 - не палиндром).
*/
void func11() {
    string num, num1;
    cout << "Enter number: ";
    cin >> num;
    int numl = num.length();

    for (int i = numl - 1; i >= 0; i--) {
        num1 += num[i];
    }
    if (num == num1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
/*
12. Пользователь задаёт координаты верхнего левого, и нижнего правого угла прямоугольника,
 а также координаты точки (X, Y) в декартовой системе координат. Принадлежит ли
точка этом поямоуГольнику
*/
void func12()
{
    int rectangle_up_X;
    int rectangle_up_Y;
    int rectangle_down_X;
    int rectangle_down_Y;
    int X;
    int Y;

    cout << "-\nкоординаты верхнего левого угла(X) -  ";
    cin >> rectangle_up_X;
    cout << "-\nкоординаты верхнего левого угла(Y) -  ";
    cin >> rectangle_up_Y;

    cout << "-\nкоординаты нижненго правого угла(X) -  ";
    cin >> rectangle_down_X;
    cout << "-\nкоординаты нижненго правого  угла(Y) -  ";
    cin >> rectangle_down_Y;

    cout << "-\nкоординаты точки(X) -  ";
    cin >> X;
    cout << "-\nкоординаты точки(Y) -  ";
    cin >> Y;

    if (rectangle_up_X <= X && rectangle_down_X >= X && rectangle_up_Y <= Y && rectangle_down_Y >= Y){
         cout << "Точка принадлежит этому прямоугольнику\n";
    }
    else {
        cout << "Точка не принадлежит этому прямоугольнику\n";
        }
}
// 13. Найти максимальное значение среди 4 переменных, используя тернарный оператор.
void func13()
{
    /*
    list<int> num; // инициализирую список 
    for (int i = 0; i < 4; i++){ // в цикле записываю в список 4 числа 
        int number;
        cout << "Enter number - " << "\n";
        cin >> number;
        num.push_back(number);
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            
        }
    }
    */
   // P.S Не пасибо)) я передумал 
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
    //func8();
    //func9();
    //func10();
    //func11();
    //func12();
    //func13();
}