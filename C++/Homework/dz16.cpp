#include <iostream>
#include <cmath>

using namespace std;

//Задача 1. Написать шаблон функции для поиска среднего арифметического значений массива.
template <typename T1, typename T2> T2 average(T1 massive, T2 lenght){
   int sum = 0;
   for (int i = 0; i < lenght; i++){
        sum += massive[i];
   }
   return sum / lenght;
}
/* 
Задача 2. Написать перегруженные шаблоны функций для
нахождения корней линейного (ax + b = 0) и квадратного (ax^2 + bx + c = 0) уравнений.

*/
template <typename T> T quadratic_equation(T a, T b, T c)
{
    int D = (b*b) - (4 * a * c);
    if (D < 0){
        cout << "\nПустое множество" << "\n";
        return 0;
    }
    int x1 = ((b * -1) + sqrt(D)) / (2 * a);
    int x2 = ((b * -1) - sqrt(D)) / (2 * a);

    cout << "-----\n"<< a << "x^2 + " << b <<  "x + "<< c <<  " = 0";
    cout << "\nx1 = " << x1 << "\nx2 = " << x2 << "\n";
    return 0;
}

template <typename T> T linear_equation(T a, T b)
{
    return (b * (-1)) / a;
}
/*
Задача 3. Написать функцию, которая принимает в качестве параметров вещественное число и 
количество знаков после десятичной точки, которые должны остаться.
Задачей функции является округление вышеуказанного вещественного числа с заданной точностью.
*/
double rounding(double num, int point)
{
    return round(num * pow(10, point)) / pow(10,point);
}

int main()
{
    int const lenght = 5;
    int massive1[] = {1,7,5,3,2};
    double massive2[] = {1.5,12.19,5.12,3.8,2.6};

    //Задача 1
    //cout << "-----\nсреднеее арифметическое массива(int) - " << average(massive1, lenght) << "\n";
    //cout << "-----\nсреднеее арифметическое массива(double) - " << average(massive2, lenght) << "\n";

    //Задача 2
    //cout << "-----\n2x + 4 = 0\nx = " << linear_equation(2, 4) << "\n";
    //cout << "-----\n2,56x + 4,44 = 0\nx = " << linear_equation(2.56, 4.44) << "\n";

    //quadratic_equation(2, 9, 4);
    //quadratic_equation(2.5, 9.7, 4.3);

    //Задача 3
    //cout << "-----\nYour number - " << rounding(3.56783, 3) << "\n";

}