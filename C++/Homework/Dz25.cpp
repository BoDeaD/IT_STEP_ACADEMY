#include <iostream>

using namespace std;

/*
1) Используя два указателя на массив целых чисел, скопировать один массив в другой. Использовать в программе арифметику указателей для продвижения по массиву,
а также оператор разыменования.
2) Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
3) Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
4) Написать функцию, которая получает указатель на массив и его размер и возвращает сумму и произведение его элементов в двух параметрах-указателях.
5) Написать функцию, которая получает указатель на массив и его размер и возвращает количество отрицательных, положительных и нулевых элементов массива с помощью параметров-указателей.
6) Написать функцию, которая принимает массив и с помощью параметров-указателей возвращает 2 результата - индекс максимального элемента и его значение.
*/


void func1(int massive1[], int massive2[])
{
    int length_massive1 = *(&massive1 + 1) - massive1;

    for (int i = 0; i < length_massive1; i++)
    {
        int element = *(massive1 + i);
        *(massive2 + i) = element;
    }
}
void func2(int massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int element = *(massive + ((length-1) - i));
        *(massive + i) = element;
    }
}

void func3(int massive1[], int massive2[], int length = 5)
{
    for (int i = 0; i < length; i++)
    {
        int element = *(massive1 + ((length-1) - i));
        *(massive2 + i) = element;
    }

}

int func4(int *massive[], int length)
{
    int sum = 0;
    int sum2 = 0;

    int *p_sum = &sum;
    int *p_sum2 = &sum2;

    for (int i = 0; i < length; i++)
    {
        //sum += *(massive + i);
        cout << massive << "\n";
    }
    return 0;
}
int main()
{
    //   1
    const int length = 5;
    int massive1[length] = {10, 23, 17, 39, 55};
    int massive2[length];
    /*
    func1(massive1, massive2);
    for (int i = 0; i < length; i++)
    {
        cout << "massive2 - " << *(massive2 + i) << "\n";
    }
    */

    //   2
    /*
    func2(massive1, length);
    for (int i = 0; i < length; i++)
    {
        cout << "massive1 - " << *(massive1 + i) << "\n";
    }
    */
    //   3
    /*
    func3(massive1,massive2,length);
    for (int i = 0; i < length; i++)
    {
        cout << "massive2 - " << *(massive2 + i) << "\n";
    }
    */
    //   4
    int *p_massive1 = massive1;
    func4(p_massive1,length);
    return 0;
}
