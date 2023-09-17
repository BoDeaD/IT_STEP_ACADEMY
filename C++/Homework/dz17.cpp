#include <iostream>

using namespace std;

/*
Написать перегруженные функции (int, double, char)
для выполнения следующих задач:
1 инициализация квадратной матрицы (двумерного массива);
2 вывод матрицы на экран;
3 определение максимального и минимального элемента
на главной диагонали матрицы

Шохин Сергей П25
*/
// Использую ссылку в качестве аргумента функции что-бы потом передавать все данные за её область видиния 
int create_massive(int (&massive)[3][3], int length){
    char min = 10;
    char max = 100;
    int K = max - min + 1;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            int one = rand() % K + min;
            massive[i][j] = one;
        }
    }
    return 0;
}
int matrix_output(int massive[][3], int length)
{
    cout << "-----";
    for (int i = 0; i < length; i++){
        cout << "\n" << massive[i][0] << "\t" << massive[i][1] << "\t" << massive[i][2];
    }
    cout << "\n";
    return 0;
}

int max_min_value_of_matrix_main_diagonal(int massive[][3], int length)
{
    int lst_diagonal[length];
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i == j){
                int *pointer = &(massive[i][i]);
                lst_diagonal[i] = *pointer;
            }
        }
    }
    int a = lst_diagonal[0];
    int b = lst_diagonal[1];
    int c = lst_diagonal[2];
    int max = (a > b) ? (a > c)? a : c : (b > c)? b : c;
    int min = (a < b) ? (a < c)? a : c : (b < c)? b : c;

    cout << "-----\nМинимальный элемент на главной диагонали матрицы - " << min << "\n";
    cout << "Максимальный элемент на главной диагонали матрицы - " << max << "\n";
    return 0;
}

int main()
{
    int const length = 3;
    int massive[][length] = {{},{},{}};

    create_massive(massive,length);
    matrix_output(massive, length);
    max_min_value_of_matrix_main_diagonal(massive,length);


}