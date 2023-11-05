#include <iostream>

using namespace std;
/*
Практика 1:

Дан массив чисел размерностью 10 элементов.
 Написать функцию, которая сортирует массив по возрастанию или по убыванию, в зависимости от третьего параметра функции.
 Если он равен 1, сортировка идет по убыванию, если 0, то по возрастанию.
 Первые 2 параметра функции — это массив и его размер, третий параметр по умолчанию равен 1.
*/

void sorting_massive1(int massive, int length, int key)
{

}

template <class T>
void sorting_massive(T massive[], long length, int key = 1){
    long i, j, k;
    T x;

    for(i=0; i<length; i++) {
        k=i;
        x=massive[i];

        for(j=i+1; j<length; j++){

            if(massive[j]<x){
                k=j;
                x=massive[j];
            } 

            if(k!=i){
                massive[k]=massive[i];
            massive[i]=x;
            } 
        }
    }
    if (key == 1){
        for (int i = 0; i < length; i++){
            cout << massive[i] << "\n";
        }   
    }
    else if (key == 0){
        for (int i = length-1; i >= 0; i--){
            cout << i << "\n";
        }   
    }
}
int main()
{
    int key = 0;
    const int length = 10;
    int massive[length] = {11,67,34,3,88,54,210,48,21,90};
    sorting_massive(massive, length, key);

}