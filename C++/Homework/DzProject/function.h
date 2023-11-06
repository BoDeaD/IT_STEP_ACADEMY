#pragma once
#include <iostream>
#include <random>

template <typename T> T random (T min, T max)
{
    max++;
    return abs(rand()%(max-min))+min;
}

void r_fill(int massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        massive[i] = random(1,10);
    }
}
void print_massive(int massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << massive[i] << " ";
    }
    std::cout << "\n";
}

int min_value(int massive[], int length)
{
    int min = massive[0];
    for (int i = 1; i < length; i++)
    {
        if (min > massive[i])
        {
            min = massive[i];
        }
    }
    return min;
}

int max_value(int massive[], int length)
{
    int max = massive[0];
    for (int i = 1; i < length; i++)
    {
        if (max < massive[i])
        {
            max = massive[i];
        }
    }
    return max;
}

void massive_sort(int massive[], int length)
{
    int x;
    for (int i = 0; i < length; i++)
    {
        for (int j = length - 1; i < j; j--)
        {
            if (massive[j-1] > massive[j])
            {
                x = massive[j-1];
                massive[j-1] = massive[j];
                massive[j] = x;
            }
        }
    }
}

void change_m_value(int massive[], int position, int value)
{
    massive[position] = value;
}

void check_const()
{
    #ifdef INTEGER
    cout << "Константа определена" << "\n";
    #else
    std::cout << "Константа не определена" << "\n";
    #endif
}