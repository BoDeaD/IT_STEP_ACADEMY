#include <iostream>
#include <string>
#include <math.h>

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
Подсчитать количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры.
*/
void func1()
{
    int number1, number2, number3, same, resN, temp;
    resN = 0;
    for (int i = 100; i <= 999; i++)
    {
        same = 0;
        number3 = i % 10;
        temp = i / 10;
        number2 = temp % 10;
        number1 = temp / 10;

        if ((number1 == number2) &&
            (number1 != number3) &&
           (number2 != number3))
            {
                same++;
            } 
        if ((number1 != number2) &&
            (number1 == number3) &&
           (number2 != number3))
            {
                same++;
            } 
        if ((number1 != number2) &&
            (number1!= number3) &&
            (number2 == number3))
            { 
                same++;
            }
        if (same == 1)
            {
            cout << i << "\n";
            resN++;
            }  
    }
    cout << "количество целых чисел от 100 до 999, у которых есть две одинаковые цифры" << resN << "\n";
}
/*
Подсчитать количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные.
*/
void func2()
{
    int number1, number2, number3, same, resN, temp;
    resN = 0;
    for (int i = 100; i <= 999; i++)
    {
        same = 0;
        number3 = i % 10;
        temp = i / 10;
        number2 = temp % 10;
        number1 = temp / 10;
        if ((number1 != number2) &&
            (number1 != number3) &&
            (number2 != number3))
        {
            resN ++;
        } 
    }
    cout << "Аmount of numbers with different digits:"; 
    cout << resN << "\n";

}

/*
Пользователь вводит любое целое число.
Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран
*/
void func3()
{

    string number;
    string n = "36";
    cout << "-\nEnter number - ";
    cin >> number;

    for (int i = 0; i <= number.length(); i++) {
        if (number[i] == n[0]){
            number.erase(i,1);
        }
        else if (number[i] == n[1]){
            number.erase(i,1);
        }
    }

    cout << number << "\n";

}
/*
Пользователь вводит любое целое число А. Необходимо вывести все целые числа В, 
для которых А делиться без остатка на В*В и не делиться без остатка на В*В*В.
*/

void func4()
{
    int number;
    cout << "\nлюбое целое число А - ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % (i*i) == 0 && number % (i*i*i) != 0){
            cout << number << " делиться без остатка на " << i << "^2";
            cout << " и не делиться без остатка на " << i << "^3\n";
        }
    }
}
/*
Пользователь вводит целое число А. 
Программа должна определить, что куб суммы цифр этого числа равен А*А.
*/
void func5()
{
    int number;
    cout << "\nлюбое целое число - ";
    cin >> number;   

    if (pow(length(number),3) == pow(number,2)){
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }
}

/*
Пользователь вводит целое число. Необходимо вывести все целые числа, 
на которое заданное число делиться без остатка.
*/
void func6()
{
    int number;
    cout << "\nлюбое целое число - ";
    cin >> number; 

    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            cout << "число делиться без остатка - " << i << "\n";
        }
    }
}
/*
Пользователь вводит два целых числа. Необходимо вывести все целые числа,
 на которые оба введенных числа делятся без остатка.
*/
void func7()
{
    int number1,number2;
    cout << "\nлюбое целое число1 - ";
    cin >> number1; 
    cout << "\nлюбое целое число2 - ";
    cin >> number2; 

    if (number1 > number2){
        for (int i = 1; i <= number1; i++){
            if (number1 % i == 0 && number2 % i == 0){
                cout << "числа делиться без остатка - " << i << "\n";
            }
        }
    }
    else if (number1 < number2){
        for (int i = 1; i <= number2; i++){
            if (number2 % i == 0 && number1 % i == 0){
                cout << "числа делиться без остатка - " << i << "\n";
            }
        }
    }
}
int main()
{
    //func1();
    //func2();
    //func3();
    //func4();
    //func5();
    //func6();
    //func7();
}