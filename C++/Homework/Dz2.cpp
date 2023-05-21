#include <iostream>
using namespace std;


//1.Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.
int average()
{
    float num1,num2,num3;
    cout << "Type a number: ";
    cin >> num1;
    cout << "Type a another number:";
    cin >> num2;
    cout << "Type a another number:";
    cin >> num3;
    double result = (num1 + num2 + num3) / 3;
    return result;
}

//2. Написать программу, которая находит корень линейного уравнения ax + b = 0.
int solving_Lineare_Gleichungen(int a, int b)
{
    cout << "x = " << (b * -1) / a << "\n";
    return 0;
}
// 3. Пользователь вводит число и степень. Программа вычисляет указанную степень этого числа (пригодится функция pow).
int silbentrennung()
{
    int number, degree;
    cout << "Type the number: ";
    cin >> number;
    cout << "Type degree: ";
    cin >> degree;
    return pow(number, degree);
}
// 4. Написать программу, которая  предлагает пользователю ввести радиус окружности, 
// а затем считает площадь и длину этой окружности. Число Pi задать в программе как вещественную константу.

int square()
{
    const double pi = 3.14;
    int number;
    cout << "Type the radious: ";
    cin >> number;
    cout << "Square - " << number * pow(pi, 2) << "\n";
    return 0;
}
/* 5. Написать программу, которая  предоставляет пользователю возможность ввести с клавиатуры количество гривен,
и переводит это количество в доллары, евро и биткоины. */

int currency_converter()
{
    double number;
    cout << "Type the UAH: ";
    cin >> number;
    cout << "USD - " << number / 37 << "\nEUR - " << number / 40 << "\nBitcoin - " << number / 987731.11 << "\n";
    return 0;
}
/* 6. Написать программу, которая переводит километры в сухопутные и морские мили. */
int distance_converter(int km)
{
    cout << "-\nLand miles - " << km / 1.6 << "\nNautical miles - " << km * 0.53 << "\n";
    return 0;
}
// 7. Написать программу, которая находит процент P от числа N.
int interest(float P,float N)
{
    cout << "interest - " << P * 100 / N << "%\n";
    return 0;
}
/*8. Написать программу, которая переводит указанное количество градусов по Цельсию в градусы по
 шкале Фаренгейта, Кельвина, Реомюра и Делиля.
 Затем реализовать перевод из градусов по Фаренгейту в градусы по Цельсию.*/
int temperature_converter()
{
    int number;
    cout << "Enter °C - ";
    cin >> number;
    float F = (number * 9/5) + 32;
    float K = number + 273.15;
    float Re = number * 0.8;
    float D = (100 - number) * 3/2;
    cout << "-\nФаренгейта - " << F << "°F\n";
    cout << "Кельвина - " << K << "°K\n";
    cout << "Реомюра - " << Re << "°Re\n";
    cout << "Делиля - " << D << "°D\n";
    return 0;
}
/*9. Поменять местами значения переменных a и b,
 сначала с использованием дополнительной третьей переменной, а затем – без.*/
int replace(int a, int b)
{
    int c = a;
    a = b; b = c;
    cout << "a - " << a <<"\nb - " << b << "\n";
    return 0;
}
int main()
{     
    //cout << average() << "\n";
    //solving_Lineare_Gleichungen(-3,6);  // Enter a and b of the gleichungen
    //cout << silbentrennung() << "\n";
    //square();
    //currency_converter();
    //distance_converter(5);
    //interest(10,5);
    //temperature_converter();
    //replace(5,10);
}
