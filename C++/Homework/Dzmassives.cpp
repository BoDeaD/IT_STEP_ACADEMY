#include <iostream>

using namespace std;
/*
Задание 1. Транспонирование матрицы — это операция, 
после которой столбцы прежней матрицы становят- ся строками, а строки столбцами.
Напишите функцию транспонирования матрицы.
*/
void func1(int** matrix, int rows, int cols) {
    // создаем временную матрицу для хранения транспонированной матрицы
    int** result = new int*[cols];
    for (int i = 0; i < cols; i++) {
        result[i] = new int[rows];
    }

    // заполняем результат транспонирования
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    cout << "-----\nТранспонированная матрица:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }

    // освобождаем память
    for (int i = 0; i < cols; i++) {
        delete[] result[i];
    }
    delete[] result;
}

int main()
{
    int m1 = 3; 
    int m2 = 3; 
    //инициализация двумерного динамического массива 
    int** Array = new int* [m1]; 
    for (int i = 0; i < m1; i++) {     
        Array[i] = new int[m2]; 
    } 
    //заполнение массива
    cout << "Оригинал: " << "\n";
    int pointer = 0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            pointer++;
            Array[i][j] = pointer;
            cout << Array[i][j] << " ";
        }
        cout << "\n";
    }
    
    func1(Array,m1,m2);
    //Удаление двумерного массива(освобождение памяти) 
    for (int i = 0; i < m1; i++) {     
        delete[] Array[i]; 
    } 
    delete[] Array;

    return 0;
}