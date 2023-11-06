#pragma once
#include <iostream>
#include <random>

#define INTENGER

// random
template <typename T> T random (T min, T max)
{
    max++;
    return abs(rand()%(max-min))+min;
}
// func a
void r_fill_int(int massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        massive[i] = random(1,10);
    }
}
void r_fill_float(float massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        massive[i] = (random(1,10) / 7) + (random(1,10) / 3);
    }
}
void r_fill_char(char* massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        massive[i] = (char*)random(1,10);
    }
}
// func b
void print_massive_int(int massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << massive[i] << " ";
    }
    std::cout << "\n";
}
void print_massive_float(float massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << massive[i] << " ";
    }
    std::cout << "\n";
}
void print_massive_char(char* massive[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << massive[i] << " ";
    }
    std::cout << "\n";
}
// func c
int min_value_int(int massive[], int length)
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
float min_value_float(float massive[], int length)
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
char* min_value_char(char* massive[], int length)
{
    char* min = massive[0];
    for (int i = 1; i < length; i++)
    {
        if (min > massive[i])
        {
            min = massive[i];
        }
    }
    return min;
}
// func d
int max_value_int(int massive[], int length)
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
float max_value_float(float massive[], int length)
{
    int min = massive[0];
    for (int i = 1; i < length; i++)
    {
        if (min < massive[i])
        {
            min = massive[i];
        }
    }
    return min;
}
char* max_value_char(char* massive[], int length)
{
    char* min = massive[0];
    for (int i = 1; i < length; i++)
    {
        if (min < massive[i])
        {
            min = massive[i];
        }
    }
    return min;
}
// func e
void massive_sort_int(int massive[], int length)
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
void massive_sort_float(float massive[], int length)
{
    float x;
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
void massive_sort_char(char* massive[], int length)
{
    char* x;
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
// func f
void change_m_value_int(int massive[], int position, int value)
{
    massive[position] = value;
}
void change_m_value_float(float massive[], int position, float value)
{
    massive[position] = value;
}
void change_m_value_char(char massive[], int position, char value)
{
    massive[position] = value;
}
// func g
void check_const_int()
{
    #ifdef INTEGER
    std::cout << "Константа определена" << "\n";
    #else
    std::cout << "Константа не определена" << "\n";
    #endif
}
void check_const_float()
{
    #ifdef FLOAT
    std::cout << "Константа определена" << "\n";
    #else
    std::cout << "Константа не определена" << "\n";
    #endif
}
void check_const_char()
{
    #ifdef CHAR
    std::cout << "Константа определена" << "\n";
    #else
    std::cout << "Константа не определена" << "\n";
    #endif
}