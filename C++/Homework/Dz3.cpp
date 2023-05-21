#include <iostream>
#include <cmath>

using namespace std;

void round_t(double a, double *b, double *c);

// 1. Марафонец прошел S километров со скоростью V метров в секунду (расстояние и скорость вводятся с клавиатуры).
//Определить, сколько времени он был в пути (часов, минут, секунд)?
int time_counter()
{
    int S, V;

    cout << "Расстояние(километры) - ";
    cin >> S;
    cout << "Скорость(метры в секунду) - ";
    cin >> V;

    int seconds = (S*1000)/V;
    int HH = seconds / 3600;
    int MM = (seconds-(3600*HH)) / 60;
    int SS = seconds % 60;

    cout << "-\nTime - " << HH << " h, " << MM << " m, " << SS << " s\n";

    return 0;
}

// 2. Пользователь вводит с клавиатуры два дробных числа. Вывести на экран сумму целых частей и сумму дробных.
int func_2()
{
    double num1, num2, b = 0, c = 0;

    cout << "First number - ";
    cin >> num1;
    cout << "Second number - ";
    cin >> num2;

    int sum = round(num1 + num2);
    round_t(num1,&b,&c);
    num1 = c;
    round_t(num2,&b,&c);

    cout << "-\nСумму целых частей - "<< sum << "\n";
    cout << "Сумму дробных - "<< num1 + c << "\n";
    
    return 0;
}
/* 3. Пользователь вводит с клавиатуры сумму в гривнах (дробное число).
Вывести по отдельности количество гривен и количество копеек 
(например, ввести 45.67 гривен - получить и вывести 45 гривен 67 копеек)*/

int func_3()
{
    double whole_number = 0, fraction = 0, num;

    cout << "-\nГривны - ";
    cin >> num;
    round_t(num,&whole_number,&fraction);
    cout << whole_number << " гривен " << fraction * 100 << " копеек \n";

    return 0;
} 
/*5. Пользователь вводит с клавиатуры время в секундах. Перевести это значение в дни, часы, минуты и секунды.
например, 43512 секунд - это 12 часов, 5 минут и 12 секунд.*/
int seconds_converter()
{
    int seconds;

    cout << "-\nEnter time - ";
    cin >> seconds;
    int HH = seconds / 3600;
    int MM = (seconds-(3600*HH)) / 60;
    int SS = seconds % 60;

    cout << "-\nTime - " << HH << " часов, " << MM << " минут, " << SS << " секунд\n";

    return 0;
}

/*6. Пользователь вводит с клавиатуры расстояние до аэропорта 
(в километрах, может быть вещественное значение) и время, за которое нужно доехать (в минутах).
 Вычислить скорость (км/ч), с которой нужно ехать
*/
int speed_count()
{
    double S, T;

    cout << "-\nРасстояние(километры) - ";
    cin >> S;
    cout << "Время(в минутах) - ";
    cin >> T;
    int speed = (S / (T / 60));

    cout << "Скорость - " << speed << " км/ч\n-\n";

    return 0;
}
/*7. Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора (часы, минуты и секунды).
Посчитать стоимость разговора, если стоимость минуты составляет 15 копеек, с учётом посекундной тарификации.
*/
int phone_call_amount()
{
    double HH, MM, SS;

    cout << "-\nДлительность розговора \n";
    cout << "Часы - ";
    cin >> HH;
    cout << "Минуты - ";
    cin >> MM;
    cout << "Секунды - ";
    cin >> SS;

    if (SS == 0){
         MM += (HH * 60);
    }
    else {
         MM += (HH * 60) + 1;
    }

    cout << "-\nСтоимость разговора - " << (MM * 0.15) << " гривен\n";

    return 0;
}

/*8. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня.
 Посчитать, сколько целых часов ему осталось сидеть на работе, если рабочий день составляет 8 часов.
*/
int func_8()
{
    int seconds;

    cout << "-\nEnter seconds - ";
    cin >> seconds;

    seconds = (3600 * 8) - seconds;
    int HH = seconds / 3600;
    int MM = (seconds-(3600*HH)) / 60;
    int SS = seconds % 60;

    cout << "-\nTime - " << HH << " часов, " << MM << " минут, " << SS << " секунд\n";

    return 0;

}
/*9 . Пользователь вводит с клавиатуры стоимость одного ноутбука, их количество и процент скидки.
 Посчитать общую сумму заказа.*/

int func_9()
{
    double cost,count,percent,sum;

    cout << "-\nстоимость одного ноутбука - ";
    cin >> cost;
    cout << "их количество - ";
    cin >> count;
    cout << "процент скидки - ";
    cin >> percent;

    sum = (cost - ((cost * percent) / 100)) * count;

    cout << "-\nОбщая сумму заказа - " << sum << "\n";

    return 0;
}
int main()
{

    //time_counter();
    //func_2();
    //func_3();
    //seconds_converter();
    //speed_count();
    //phone_call_amount();
    //func_8();
    //func_9();
}
void round_t(double a, double *b, double *c) {
        *c = modf(a,b);
    }