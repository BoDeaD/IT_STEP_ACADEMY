#include <iostream>

using namespace std;

/*
Написать перегруженные функции (int, double, char)
для выполнения следующих задач:
1 инициализация квадратной матрицы (двумерного массива);
2 вывод матрицы на экран;
3 определение максимального и минимального элемента
на главной диагонали матрицы
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
double create_massive(double (&massive)[3][3], int length){
    char min = 10;
    char max = 100;
    int K = max - min + 1;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            int one = (rand() % K + min);
            massive[i][j] = one + (one * 0.03);
        }
    }
    return 0.1;
}
char create_massive(char (&massive)[3][3], int length){
    char min = 40;
    char max = 60;
    int K = max - min + 1;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            char one = (rand() % K + min);
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
double matrix_output(double massive[][3], int length)
{
    cout << "-----";
    for (int i = 0; i < length; i++){
        cout << "\n" << massive[i][0] << "\t" << massive[i][1] << "\t" << massive[i][2];
    }
    cout << "\n";
    return 0.1;
}
char matrix_output(char massive[][3], int length)
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
            //здесь в указатель записываю ссылку на элемент в массиве что-бы присвоить его к списку элемнтов главной диагонали
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

    cout << "\nМинимальный элемент на главной диагонали матрицы - " << min << "\n";
    cout << "Максимальный элемент на главной диагонали матрицы - " << max << "\n";
    return 0;
}

double max_min_value_of_matrix_main_diagonal(double massive[][3], int length)
{
    double lst_diagonal[length];
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i == j){
            //здесь в указатель записываю ссылку на элемент в массиве что-бы присвоить его к списку элемнтов главной диагонали
                double *pointer = &(massive[i][i]);
                lst_diagonal[i] = *pointer;
            }
        }
    }
    double a = lst_diagonal[0];
    double b = lst_diagonal[1];
    double c = lst_diagonal[2];
    double max = (a > b) ? (a > c)? a : c : (b > c)? b : c;
    double min = (a < b) ? (a < c)? a : c : (b < c)? b : c;

    cout << "\nМинимальный элемент на главной диагонали матрицы - " << min << "\n";
    cout << "Максимальный элемент на главной диагонали матрицы - " << max << "\n";
    return 0.1;
}

char max_min_value_of_matrix_main_diagonal(char massive[][3], int length)
{
    char lst_diagonal[length];
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i == j){
            //здесь в указатель записываю ссылку на элемент в массиве что-бы присвоить его к списку элемнтов главной диагонали
                char *pointer = &(massive[i][i]);
                lst_diagonal[i] = *pointer;
            }
        }
    }
    char a = lst_diagonal[0];
    char b = lst_diagonal[1];
    char c = lst_diagonal[2];
    char max = (a > b) ? (a > c)? a : c : (b > c)? b : c;
    char min = (a < b) ? (a < c)? a : c : (b < c)? b : c;

    cout << "\nМинимальный элемент на главной диагонали матрицы - " << min << "\n";
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

    double massive1[][length] = {{},{},{}};

    create_massive(massive1,length);
    matrix_output(massive1, length);
    max_min_value_of_matrix_main_diagonal(massive1,length);

    char massive2[][length] = {{},{},{}};

    create_massive(massive2,length);
    matrix_output(massive2, length);
    max_min_value_of_matrix_main_diagonal(massive2,length);

}

//Шохин Сергей П25