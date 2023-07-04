#include <iostream>

using namespace std;

/*
Задание 1. Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.
 Пользователь вводит прибыль фирмы за каждый месяц.
*/
void func1()
{
    const int length = 6;
    int sum;
    int massive[length];

    for (int i = 0; i < length; i++)
    {
        int number;
        cout << "прибыль фирмы за " << i+1 << "m. - ";
        cin >> number;
        massive[i] = number;
    }
    for (int i = 0; i < length; i++){
        sum += massive[i];
    }
    cout << "Всего - " << sum << "\n";
}

/*
Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.
*/
void func2()
{
    const int length = 6;
    int massive[length] = {89,55,31,90,76,54};

    for (int i = length; i >= 0; i--){
        cout << massive[i] << "\n";
    }
}

/*
Задание 3. Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, 
необходимо вычислить периметр пятиугольника (периметр — сумма всех сторон).
*/
void func3()
{
    const int length = 5;
    int sum;
    int massive[length];

    for (int i = 0; i < length; i++)
    {
        int number;
        cout << "длина"<< i+1 <<" стороны пятиугольника - ";
        cin >> number;
        massive[i] = number;
    }
    for (int i = 0; i < length; i++){
        sum += massive[i];
    }
    cout << "периметр - " << sum << "\n";
}
/*
Задание 4. Пользователь вводит прибыль фирмы за год (12 месяцев). 
Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна.
*/
void func4()
{
    const int N = 12;
    int massive[N];

    for (int i = 0; i < N; i++)
    {
        int number;
        cout << "Прибыль за месяц" << i+1 << " - ";
        cin >> number;
        massive[i] = number;
    }

    int max = massive[0], min = massive[0];
    for(int i = 1; i < N; i++){
        if(max < massive[i])
            max = massive[i];
        if(min > massive[i])
            min = massive[i];
   }
   cout << "Maximum Value = " << max << "\n";
   cout << "Minimum Value = " << min << "\n";
}
int main()
{
    //func1();
    //func2();
    //func3();
    func4();
}