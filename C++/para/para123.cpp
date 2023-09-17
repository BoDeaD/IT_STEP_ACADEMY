#include <iostream>

using namespace std;

/*
Задача 1. Написать шаблон функции, возвращающей максимальное из трех чисел.​
*/
template <typename T> T max(T a, T b, T c){
    if (a > b & a > c){
        return a;
    }
    if (b > a & b > c){
        return b;
    }
    if (c > a & b < c){
        return c;
    }

}

int main(){

    //cout << "\nYour answear - " << max(1,5,6) << "\n";
}