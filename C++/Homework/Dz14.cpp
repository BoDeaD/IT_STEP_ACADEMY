#include <iostream>

using namespace std;
int leap_year(int year);
void func2(int massive[], int lenght);
void func1(int d1, int m1, int y1, int d2, int m2, int y2);
void func3(int massive[], int lenght);

/*
Задание 1. Написать функцию, которая принимает две даты 
(т.е. функция принимает шесть параметров) и вычисляет разность в днях между этими датами.
Для решения этой задачи необходимо также написать функцию, которая определяет, является ли год високосным.
*/

void func1(int d1, int m1, int y1, int d2, int m2, int y2)
{
    y1 = leap_year(y1);
    y2 = leap_year(y2);
    m1 *= 30;
    m2 *= 30;
    // сумируем все данные и вычитаем учитывая какое число больше 
    int total = (y1 <= y2) ? (y2 + m2 + d2) - (y1 + m1 + d1) : (y1 + m1 + d1) - (y2 + m2 + d2);

    cout << "Разница дней - \n" << (total) << "\n";
}

/*
Задание 2. Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
*/
void func2(int massive[], int lenght)
{
    double sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += massive[i];
        //cout << "\n" << sum << "     " << massive[i] << "\n";
    }
    int total = sum / lenght;
    cout << "\nСреднее арифметическое элементов - \n" << total << "\n";
}
/*
Задание 3. Написать функцию, 
определяющую количество положительных,
отрицательных и нулевых элементов передаваемого ей массива.
*/
void func3(int massive[], int lenght)
{
    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for (int i = 0; i < lenght; i++){
        if (massive[i] > 0){
            positive++;
            break;
        }
        else if (massive[i] < 0){
            negative++;
            break;
        }
        else if (massive[i] == 0){
            zeros++;
            break;
        }

    }
    cout << "\n" << "positive       negative       zeros\n    ";
    cout << positive << "             " << negative << "             " << zeros << "\n";
}

int main()
{
    const int lenght = 5;
    int massive[lenght] = {1,4,7,3,7};
    func1(23,3,2007,3,4,1980);
    func1(23,3,2007,24,3,2007);
    //func2(massive, lenght);
    //func3(massive,lenght);
}

int leap_year(int year){
    int year1 = 1;
    // проверяем каждый год на высокосность и множим
    for (int i = 0; i <= year; i++){ 
        switch (int(year % 4 == 0)){
            case true:
                year1 = year1 + (366 + i);
                break;
            case false:
                year1 = year1 + (365 + i);
                break;
            default:
                break;
    }
    }
    return year1;
}