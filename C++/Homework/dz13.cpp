#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int length(int n) {
    int l = 0;
    do {
        l++;
        n /= 10;
    } while(n);
    return l;
}

/*
Пользователь вводит число. Определить количество цифр в этом числе,
посчитать их сумму и среднее арифметическое. 
Определить количество нулей в этом числе. 
Общение с пользователем организовать через меню.
*/

void func1()
{
    int num;
    int x, y;
    int sum = 0;
    int average;
    int zeros = 0;

    cout << "\nEnter number - ";
    cin >> num;

    for (; x > 0;) {
        y = x % 10;
        sum += y;
        if (y == 0){
            zeros++;
        }
        x /= 10;
    }
    average = sum / length(num);

    cout << "\nколичество цифр в этом числе - " << length(num) << "\n";
    cout << "посчитать их сумму - " << sum << "\n";
    cout << "среднее арифметическое - " << average << "\n";
    cout << "количество нулей в этом числе - " << zeros << "\n";
}
/*
Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки.
*/
void func2()
{
    int size;

    cout << "\nEnter size - ";
    cin >> size;

    for (int i = 0; i < 8; i++){
        if (i % 2 == 0){
            for (int m = 0; m < size; m++){
                for (int j = 0; j < 8; j++){
                    if (j % 2 == 0){ 
                        for (int k = 0; k < size; k++){
                            cout << "*";
                        }                   
                    }
                    else{
                        for (int k = 0; k < size; k++) {
                            cout<<"-"; 
                        }
                    }
                }
                cout << "\n";
            }
        }
        else {
            for (int m = 0; m < size; m++){
                for (int j = 0; j < 8; j++){
                    if (j % 2 == 0){
                        for (int k = 0; k < size; k++){
                            cout << "-";
                        }
                    }
                    else {
                        for (int k = 0; k < size; k++){ 
                            cout << "*"; 
                        }
                    }
                }
                cout << "\n";
            }
        } 
    }  
}
/*
Реализовать программу расчета заказа в кафетерии при условии, что заказ может быть на 
несколько человек и каждый клиент формирует свою часть заказа. 
Необходимо спросить у пользователя на сколько человек заказ. Далее каждому человеку 
выводиться меню (названия напитков, кондитерских изделий и их цена) и он выбирает. 
Предусмот- реть возможность выбора нескольких элементов меню для клиента, 
если он желает добавить еще что-то в свой заказ. 
Результат работы программы — итоговая сумма общего заказа всей компании.
*/   
void func3()
{
    int peoples;
    int choise;
    double sum;
    cout << "\n         Welcome to our cafe!\n";
    cout << "         How many people will eat?\n         * ";
    cin >> peoples;
    for (int i = 1; i <= peoples; i++){
        cout << "\n\n              MENU";
        cout << "\n         * 1.Сок - 35 грн\n         * 2.Борщ - 135 грн\n         * 3.Плов - 100 грн";
        cout << "\n         * 4.Латте - 60 грн\n         * 5.Капучино - 45 грн\n         * 6.Американно - 30 грн\n";
        while (true)
        {
            cout << "\nЕсли закончили заказ введите 11";
            cout << "\n* Клиент" << i << " чего желаете(1-6) - ";
            cin >> choise;

            if (choise == 11){
                cout << "\nСпасибо за заказ клиент" << i << "\n";
                break;
            } 

            switch (choise)
            {
            case 1:
                sum += 35;
                break;
            case 2:
                sum += 135;
                break;
            case 3:
                sum += 100;
                break;
            case 4:
                sum += 60;
                break;
            case 5:
                sum += 45;
                break;
            case 6:
                sum += 30;
                break;
            default:
                break;
            }
        }
    }
    cout << "\n\n Ваш чек - " << sum << "\n";
} 

/*
Есть пустое поле игры «Морской бой».
Вывести в консоль номера полей игры:
*/

void func4()
{
    cout << "\n";
    for (int i = 0; i < 10; i++){
        cout << " A" << i << " B" << i << " C" << i << " D" << i << " E" << i << " F" << i << " G" << i << " H" << i << " I" << i << " J" << i << "\n";
    }
    cout << "\n";
}
int main()
{
    //func1();
    //func2();
    //func3();
    func4();
}