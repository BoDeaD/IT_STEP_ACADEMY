#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/*
Homework
Задание 1. Написать функцию, которая принимает два параметра: основание степени и показатель степени, и вычисляет степень числа на основе полученных данных.
Задание 2. Написать функцию, которая получает в качстве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.
Задание 3. Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите функцию поиска таких чисел во введенном интервале.
Задание 4. Написать функцию, выводящую на экран переданную ей игральную карту.
Задание 5. Написать функцию, которая определяет, яв- ляется ли «счастливым» шестизначное число.
*/
int degree(int num, int degree){
    int sum = 1;
    if (degree == 0){
        return 1;
    }
    for (int i = 0; i < degree; i++){
        sum *= num;
    }
    return sum;
}
int sum_numbs(int num1,int num2)
{
    int sum = 0;
    for (num1; num1 <= num2; num1++)
    {
        sum += num1;
    }
    return sum;
}
int ideal_numb(int num1, int num2)
{
    for (num1; num1 < num2; num1++){
        cout << num1* 0.1 << "\n";
    }
}
string happy(string number){
    int first = number[0] + number[1] + number[2];
    int second = number[3] + number[4] + number[5];

    if (first == second) {
        return "Yes";
    }
    else{
        return "No";
    }
}
/*
HOMEWORK 2
Задание 1. Написать функцию, реализующую алгоритм
линейного поиска заданного ключа в одномерном массиве.
Задание 2. Написать функцию, реализующую алгоритм бинарного поиска заданного ключа в одномерном массиве.
Задание 3. Написать функцию для перевода числа, записанного в двоичном виде, в десятичное представление.
*/
int linear_search(int arr[], int length, int key1)
{
    for (int i = 0; i < length; i++)
    {
        if(arr[i] == key1){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int length, int key1)
{
    int right = length;
    int mid = (length / 2);
    int left = 0;

    while (true)
    {
        if (arr[right] == key1){
            return right;
        }
        else if (arr[left] == key1){
            return left;
        }
        else if (arr[mid] < key1){
            right--;
        }
        else if (arr[mid] > key1){
            left++;
        }
        else{
            return -1;
        }
         
    }
    
}
int two_to_ten(string num1)
{
    int sum = 0;
    int point = 0;

    for (int i = num1.length() - 1; i >= 0; i--)
    {
        if (num1[i] == '1'){
            sum += pow(2,point);
        }
        point++;
    }
    return sum;
}

int main()
{
    //Homework 1
    //1
    cout << "2^3 = " << degree(2,3) << "\n";
    //2
    cout << "сумма чисел из диапазона между 1 и 5 - " << sum_numbs(1,5) << "\n";
    //3
    //ideal_numb(50,60);
    //5
    string num = "133321";
    cout << "является ли «счастливым» шестизначное число " << num << " - " << happy(num) << '\n';
    /*
    Homework 2
    const int length = 5;
    int key = 74;
    int massive[length] = {5,23,30,74,95};

    cout << "-----\nlinear search - " << linear_search(massive,length,key) << "[key - " << key << "]\n";

    const int length1 = 10;
    int key1 = 7;
    int massive1[length1] = {0,1,2,3,4,5,6,7,8,9};

    cout << "-----\nbinary search - " << binary_search(massive1,length1,key1) << "[key - " << key1 << "]\n";

    string number = "1101";
    cout << "-----\nЧисло "<< number << " в десятичном представлении - " << two_to_ten(number) << "\n";
    */
    return 0;
}
