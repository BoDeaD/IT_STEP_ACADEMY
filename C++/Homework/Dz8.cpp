#include <iostream>

using namespace std;


/*
1. Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).
*/
void func1()
{
    int num;
    double sum;
    cout << "Enter number - ";
    cin >> num;

    if (num < 500){
        while (num <= 500){
            sum += num;
            num++;
        }
    }
    cout << "Your sum - " << sum << "\n";
}

/*
2.Напишите программу, которая запрашивает два целых числа x и y, 
после чего вычисляет и выводит значение x в степени y.
*/
void func2(){
    int x,y;
    double sum = 1;
    cout << "Enter number - ";
    cin >> x;
    cout << "Enter degree - ";
    cin >> y;

    for (int i = 0; i < y; i++){
        sum *= x;
    }
    cout << x << "^" << y << "=" << sum << "\n";   
}
/*
Найти среднее арифметическое всех целых чисел от 1 до 1000.
*/
void func3()
{
    double sum;
    for (int i = 1; i <= 1000; i++){
        sum += i;
    }
    sum = sum / 1000;
    cout << sum << "\n";
}
/*
Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры: 1 <=a <= 20).
*/
void func4()
{
    int num;
    double sum;
    cout << "Enter number - ";
    cin >> num;

    if (1 <= num & num <= 20){
        while (num <= 20){
            sum += num;
            num++;
        }
    }
    cout << "Your num - " << sum << "\n";
}
/*
Написать программу, которая выводит на экран таблицу умножения на k, где k — номер варианта.
*/
void func5()
{
    int k;
    cout << "Enter number - ";
    cin >> k;

    for (int i = 1; i < 10; i++){
        cout << k << " * " << i << " = " << k * i << "\n";
    }
}
int main()
{
    //func1();
    //func2();
    //func3();
    //func4();
    //func5();
}