#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
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

    return 0;
}
