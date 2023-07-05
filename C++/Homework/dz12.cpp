#include <iostream>

using namespace std;

/*
В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.
*/
void func1()
{
    const int l = 10;
    int massive[l];

    for (int i = 0; i < l; i++){
        int K = 100 - 25 + 1;
        int one = rand() % K + 25;

        massive[i] = one;
    }
    int max = massive[0], min = massive[0];
    for(int i = 1; i < l; i++){
        if(max < massive[i])
            max = massive[i];
        if(min > massive[i])
            min = massive[i];
   }
   cout << "Maximum Value = " << max << "\n";
   cout << "Minimum Value = " << min << "\n";

}

/*
В одномерном массиве, заполненном случайными числами в заданном пользователем диапазоне, 
найти сумму элементов, значения которых меньше указанного пользователем
*/
void func2()
{
    const int l = 10;
    int arr[l];
    char min;
    char max;

    cout << "Enter max - ";
    cin >> max;
    
    cout << "Enter min - ";
    cin >> min;

    for (int i = 0; i < l; i++){
        int K = max - min + 1;
        int one = rand() % K + min;

        arr[i] = one;
    }
    for (int i = 0; i < l; i++){
        cout << arr[i] << "\n";
    }
}

/*
Пользователь вводит прибыль фирмы за год (12 месяцев). 
Затем пользователь вводит диапазон (например, 3 и 6 — поиск между 3-м и 6-м месяцем). 
Необходимо определить месяц, в котором прибыль была максимальна и месяц,
 в котором прибыль была минимальна с учетом выбранного диапазона.
*/

void func3()
{
    int const n = 12;
    int profit[n];
    int start, end, minPrMonth, maxPrMonth;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your profit for " << i + 1;
        cout << " month:\n";
        cin >> profit[i];
    }   
    cout << "Enter the start of the range "
            "interested for you:\n";
    cin >> start;
    cout << "Enter the end of the range interested "
            "for you:\n";
    cin >> end;
    minPrMonth = start-1;
    maxPrMonth = start-1;
    for (int i = start; i <= end-1; i++){
        if (profit[i] > profit[maxPrMonth]){   
            maxPrMonth = i;
        }
        if (profit[i] < profit[minPrMonth]){
            minPrMonth = i;
        }   
    }
    cout << "You got the min. profit in "
         << minPrMonth+1 << " month.\n";
    cout << "You got the max. profit in "
         << maxPrMonth+1 << " month.\n";
}
/*
В одномерном массиве, состоящем из N вещественных чисел вычислить:
■ Сумму отрицательных элементов.
■ Произведение элементов,находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и послед-
ним отрицательными элементами.
*/
void func4()
{
    int m_sum, ch_sum, ms_mf_sum;
    const int l = 10;
    int arr[l];

    for (int i = 0; i < l; i++){
        int K = 100 - (-100) + 1;
        int one = rand() % K + 25;

        arr[i] = one;
    }

    int max_index = arr[0], min_index = arr[0];
    int negative_max_index = arr[0], negative_min_index = arr[0];
    for (int i = 0; i < l; i++){
        if (arr[i] < 0){
            m_sum++;

            if(max_index < arr[i])
                negative_max_index = i;

            else if(min_index > arr[i])
                negative_min_index = i;
        }
        else if (arr[i] % 2 == 0){
            ch_sum *= arr[i];
        }
        else if(max_index < arr[i])
            max_index = i;

        else if(min_index > arr[i])
            min_index = i;
    }
    int min_max_sum;
    for (int i = min_index; i < max_index; i++){
        min_max_sum *= arr[i];
    }
    int negative_min_max_sum;
    for (int i = negative_min_index; i < negative_max_index; i++){
        negative_min_max_sum += arr[i];
    }
    cout << "\nСумму отрицательных элементов - " << m_sum << "\n";
    cout << "Произведение элементов с четными номерами - " << ch_sum << "\n";
    cout << "Произведение элементов,находящихся между min и max элементами - " << min_max_sum << "\n";
    cout << "Сумму элементов, находящихся между первым и последним отрицательными элементами - " << negative_min_max_sum << "\n";
}
int main()
{
    //func1();
    //func2();
    //func3();
    //func4();
}